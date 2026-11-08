ifneq ($(shell command -v riscv64-unknown-elf-gcc 2>/dev/null),)
CCPREFIX?=riscv64-unknown-elf-
else ifneq ($(shell command -v riscv64-linux-gnu-gcc 2>/dev/null),)
CCPREFIX?=riscv64-linux-gnu-
else
CCPREFIX?=riscv64-unknown-elf-
endif
RISCV_ARCH?=rv64gc
RISCV_ARCH2?=rv64g
ifneq ($(findstring linux-gnu,$(CCPREFIX)),)
RISCV_ABI?=lp64d
else
RISCV_ABI?=lp64
endif
CFLAGS_AS=-march=$(RISCV_ARCH) -mabi=$(RISCV_ABI)
CFLAGS=-march=$(RISCV_ARCH) -mabi=$(RISCV_ABI) -msmall-data-limit=0 -fno-pic -fno-pie -Wl,-no-pie
CFLAGS2=-march=$(RISCV_ARCH2) -mabi=$(RISCV_ABI) -msmall-data-limit=0 -fno-pic -fno-pie -Wl,-no-pie
HOST_CC ?= cc
HOST_CFLAGS ?= -std=c11 -O3
RISCV_EMU ?= ./riscv-emu
RISCV_EMU_TARGET ?= riscv-emu
RISCV_EMU_OPTION ?= -i kernel.elf --mem 512 --mmu sv39 --disk fs.img
EMU_TEST_TIMEOUT ?= 12
EMU_TEST_EOF_OUT ?= .emu-test-eof.out
EMU_TEST_BASIC_OUT ?= .emu-test-basic.out
EMU_TEST_TEXT_OUT ?= .emu-test-text.out
EMU_TEST_PIPES_OUT ?= .emu-test-pipes.out
QEMU ?= qemu-system-riscv64
QEMU_OPTION ?= -machine virt -bios none -nographic -m 1024M -kernel kernel.elf -drive file=fs.img,if=none,format=raw,id=hd0 -device virtio-blk-device,drive=hd0 -nic none

.DEFAULT_GOAL := all
.PHONY: all clean run log test test-eof test-basic test-text test-pipes test-fork-heap
.DELETE_ON_ERROR:

USER_PROGRAMS := cat sleep cpp uname hostname hello echo grep readelf nm objdump hexdump ls pipeline mkdir rmdir pwd touch more vi as ld cc sh
USER_FLAGS := $(CFLAGS) -std=gnu11 -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -Tuser.ld
KERNEL_OBJECTS := entry.o start.o userret.o trap.o fs.o plic.o trap_c.o main.o libc.o syscall.o kernel_proc.o

all: kernel.elf fs.img $(RISCV_EMU_TARGET)

crt0.o: crt0.S
	$(CCPREFIX)gcc $(CFLAGS) -c -o $@ $<

minux.o: minux.c minux.h
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o $@ $<

minux9.o: minux9.c minux9.h
	$(CCPREFIX)gcc $(CFLAGS2) -nostdlib -c -g -ffreestanding -mcmodel=medany -o $@ $<

$(USER_PROGRAMS): %: %.c crt0.o minux.o minux.h user_helpers.h user.ld
	$(CCPREFIX)gcc $(USER_FLAGS) $(if $(filter cc,$@),-DCC_S_ONLY,) -g -o $@ crt0.o $< minux.o -lgcc -fno-omit-frame-pointer

build/sh.h: sh
	mkdir -p build
	xxd -i -n sh_elf sh > $@

main.o: build/sh.h
kernel_proc.o: kernel_list.h
$(filter-out entry.o userret.o trap.o trap_c.o,$(KERNEL_OBJECTS)): %.o: %.c common.h minux.h
	$(CCPREFIX)gcc $(CFLAGS) -std=gnu11 -nostdlib -c -O0 -g -ffreestanding -fno-builtin -fno-stack-protector -mcmodel=medany -o $@ $<

entry.o userret.o trap.o: %.o: %.S
	$(CCPREFIX)as -g $(CFLAGS_AS) -o $@ $<

trap_c.o: trap.c common.h
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o $@ $<

kernel.elf: $(KERNEL_OBJECTS) kernel.ld
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T kernel.ld -Wl,-Map=map.txt -mcmodel=medany -o $@ $(KERNEL_OBJECTS) -lgcc
	$(CCPREFIX)objcopy -O binary $@ kernel.bin

mkfs: mkfs.c
	$(HOST_CC) -o $@ $<

fs.img: mkfs $(USER_PROGRAMS) minux9.o crt0.o passwd group a.c b.c c.c stdarg.h minux9.h user-minux9.ld
	./mkfs $@

$(RISCV_EMU_TARGET): riscv-emu-src/riscv-emu.c
	$(HOST_CC) $(HOST_CFLAGS) $< -o $@

run: all
	$(RISCV_EMU) $(RISCV_EMU_OPTION)

log: all
	$(RISCV_EMU) $(RISCV_EMU_OPTION) --trace

test: test-eof test-basic test-text test-pipes test-fork-heap

test-eof: kernel.elf fs.img $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_EOF_OUT)"; \
	rm -f "$$out"; \
	printf '' | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		echo 'EOF did not stop shell/emulator cleanly'; \
		exit "$$status"; \
	fi; \
	echo "PASS test-eof ($$out)"

test-basic: kernel.elf fs.img $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_BASIC_OUT)"; \
	rm -f "$$out"; \
	{ \
		printf '%s\n' 'echo aaa'; \
		printf '%s\n' 'pwd'; \
		printf '%s\n' 'hostname'; \
		printf '%s\n' 'uname'; \
		printf '%s\n' 'ls'; \
	} | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		exit "$$status"; \
	fi; \
	grep -Fx 'aaa' "$$out" >/dev/null || { cat "$$out"; echo 'missing: echo output'; exit 1; }; \
	grep -Fx '/' "$$out" >/dev/null || { cat "$$out"; echo 'missing: pwd output'; exit 1; }; \
	grep -Fx 'minux9' "$$out" >/dev/null || { cat "$$out"; echo 'missing: hostname output'; exit 1; }; \
	grep -Fx 'Minux' "$$out" >/dev/null || { cat "$$out"; echo 'missing: uname output'; exit 1; }; \
	grep -Fx 'passwd' "$$out" >/dev/null || { cat "$$out"; echo 'missing: ls passwd'; exit 1; }; \
	grep -Fx 'hostname' "$$out" >/dev/null || { cat "$$out"; echo 'missing: ls hostname'; exit 1; }; \
	echo "PASS test-basic ($$out)"

test-text: kernel.elf fs.img $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_TEXT_OUT)"; \
	rm -f "$$out"; \
	{ \
		printf '%s\n' 'grep -n root passwd'; \
		printf '%s\n' 'grep -vn root passwd'; \
		printf '%s\n' 'grep -v root passwd'; \
		printf '%s\n' 'cat -n passwd'; \
		printf '%s\n' 'echo aaa | cat -n'; \
	} | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		exit "$$status"; \
	fi; \
	grep -F '1:root:root:0:0:' "$$out" >/dev/null || { cat "$$out"; echo 'missing: grep -n root'; exit 1; }; \
	grep -F '2:user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: grep -vn root'; exit 1; }; \
	grep -Fx 'user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: grep -v root'; exit 1; }; \
	grep -F '     1  root:root:0:0:' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat -n passwd root'; exit 1; }; \
	grep -F '     2  user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat -n passwd user'; exit 1; }; \
	grep -F '     1  aaa' "$$out" >/dev/null || { cat "$$out"; echo 'missing: echo | cat -n'; exit 1; }; \
	echo "PASS test-text ($$out)"

test-pipes: kernel.elf fs.img $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_PIPES_OUT)"; \
	rm -f "$$out"; \
	for cmd in \
		'echo aaa | cat -n | grep -n aaa' \
		'cat passwd | grep root | grep -n root' \
		'cat passwd | grep user | cat -n' \
		'cat passwd | grep -v root | grep -n user' \
	; do \
		printf '%s\n' "$$cmd" | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) >> "$$out" 2>&1; \
		status=$$?; \
		if [ "$$status" -ne 0 ]; then \
			cat "$$out"; \
			exit "$$status"; \
		fi; \
	done; \
	grep -F '1:     1  aaa' "$$out" >/dev/null || { cat "$$out"; echo 'missing: echo | cat -n | grep -n'; exit 1; }; \
	grep -F '1:root:root:0:0:' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat | grep root | grep -n'; exit 1; }; \
	grep -F '     1  user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat | grep | cat -n'; exit 1; }; \
	grep -F '1:user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat | grep -v | grep -n'; exit 1; }; \
	echo "PASS test-pipes ($$out)"

debug: all
	$(QEMU) $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu

debug-mac: all
	$(QEMU) $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb kernel.elf
	pkill -f qemu

clean:
	rm -f $(USER_PROGRAMS) $(KERNEL_OBJECTS) crt0.o minux.o minux9.o kernel.elf kernel.bin fs.img fork_test .emu-test-fork.img mkfs map.txt $(RISCV_EMU_TARGET) build/sh.h .emu-test-*.out

fork_test: tests/fork_heap.c crt0.o minux.o minux.h user.ld
	$(CCPREFIX)gcc $(USER_FLAGS) -g -o $@ crt0.o $< minux.o -lgcc

test-fork-heap: all fork_test
	./mkfs .emu-test-fork.img fork_test
	@printf '%s\n' fork_test | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) -i kernel.elf --mem 512 --mmu sv39 --disk .emu-test-fork.img > .emu-test-fork.out 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then cat .emu-test-fork.out; exit "$$status"; fi; \
	grep -Fx 'PASS fork heap' .emu-test-fork.out || { cat .emu-test-fork.out; exit 1; }
