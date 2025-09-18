#rm -rf build
#cmake -Bbuild . CC=riscv64-unknown-elf-gcc
#mkdir build
#cd build/
make clean
make CC=riscv64-unknown-elf-gcc  CFLAGS="-O2 -pipe"
#cd ..


