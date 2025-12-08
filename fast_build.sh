
if which apt
then
    sudo apt install gcc-riscv64-unknown-elf \
                 binutils-riscv64-unknown-elf \
                 qemu-system-misc \
                 make \
                 git \
                 gcc \
                 clang \
                 build-essential \
                 gawk \
                 gdb-multiarch xxd
fi

if which dnf
then
    if uname -a | grep x86
    then
        sudo dnf install \
            gcc-riscv64-linux-gnu.x86_64 \
            qemu-system-riscv.x86_64 \
            binutils-riscv64-linux-gnu.x86_64 \
                    make \
                        git \
                        gcc \
                        clang \
                                gawk \
                                        xxd gcc glibc-devel.x86_64
    else
        sudo dnf install \
            gcc-riscv64-linux-gnu.aarch64 \
            qemu-system-riscv.aarch64 \
            binutils-riscv64-linux-gnu.aarch64 \
                    make \
                        git \
                        gcc \
                        clang \
                                gawk \
                                        xxd gcc glibc-devel.aarch64
    fi
fi

if which pacman
then
sudo pacman -Syu \
  riscv64-elf-gcc \
    riscv64-elf-binutils \
      make \
        git \
          base-devel \
            gawk \
            gcc \
            clang \
                make vim qemu-system-riscv
                
fi

if which apk
then
    sudo apk add binutils-riscv-none-elf binutils-riscv64 gcc-riscv-none-elf newlib-riscv-none-elf qemu-riscv64 make git gawk gdb-multiarch qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-system-riscv64 gcc clang
    sudo apk add spike
fi

rm -rf ~/.config/gdb
mkdir -p ~/.config/gdb
echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit

make clean
if uname -a | grep Darwin
then
    make run
#   make debug-mac
elif which riscv64-linux-gnu-gcc
then
    make run CCPREFIX=riscv64-linux-gnu- CFLAGS="-march=rv64gc -mabi=lp64" 
elif which riscv-none-elf-gcc
then
    make run CCPREFIX=riscv-none-elf- CFLAGS="-march=rv64gc -mabi=lp64" 
elif which riscv64-elf-gcc
then
    make run CCPREFIX=riscv64-elf- CFLAGS="-march=rv64gc -mabi=lp64" 
else 
    make run
fi
