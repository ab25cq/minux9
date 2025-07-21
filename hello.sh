riscv64-unknown-elf-gcc \
  -march=rv64gc -mabi=lp64 \
  -nostdlib -static \
  -T hello.ld \
  -o hello.elf hello.S

temu \
  -machine virt -m 256 \
  -bios bbl64.bin \
  -kernel hello.elf \
  -nographic

