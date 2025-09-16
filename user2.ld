OUTPUT_ARCH(riscv)
ENTRY(_start)

PHDRS {
  text PT_LOAD FLAGS(r_x);
  data PT_LOAD FLAGS(rw_);
}

SECTIONS {
  . = 0x00010000;                         /* いま使っている 0x10000台のVMAに合わせる */

  .text : {
    *(.text .text.*) *(.init) *(.fini)
    *(.rodata .rodata.*)
  } :text

  . = ALIGN(16);
  .data : { *(.sdata .sdata.*) *(.data .data.*) } :data

  . = ALIGN(16);
  .sbss (NOLOAD) : { *(.sbss .sbss.*) } :data
  .bss  (NOLOAD) : { *(.bss .bss.*) *(COMMON) } :data
}

