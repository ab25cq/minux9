OUTPUT_ARCH(riscv)
ENTRY(_start)
SECTIONS {
    . = 0x80200000;
    .text : { *(.text) }
    .rodata ALIGN(4) : { *(.rodata) }
    /DISCARD/ : { *(.note.*) *(.comment) }
}

