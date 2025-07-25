STACK_MAX = 0x64000;

OUTPUT_ARCH( "riscv" )

PHDRS {
   text PT_LOAD FLAGS (r_x);
   data PT_LOAD FLAGS (rw_);
}

ENTRY(entry)
SECTIONS
{
#  . = 0x90000000;
#  PROVIDE(_userret = .);
#  .text.userret : {
#    *(.text.userret)
#  }
#  . += 4096;
  
  . = 0x80000000;
  .text : { *(.text*) } :text
#  .text : { *(.text) }
  .rodata : { *(.rodata*) } :text
  .data : { *(.data*) } :data
  .sdata : { *(.sdata*) } :data
  .bss : { *(.bss) *(.bss.*) *(.sbss) *(.sbss.*) } :data
  PROVIDE(_code_end = .);
  . += STACK_MAX;
  PROVIDE(stack_top = .);
  
  . = ALIGN(4096);
  TRAPFRAME = .;
  . = . + 4096;
  
  . = ALIGN(4096);
  TRAPFRAME2 = .;
  . = . + 4096;
  
  PROVIDE(TRAMPOLINE = .);
  .trampoline : { *(.trampoline) }
  . = ALIGN(4096);
  . = 0x80700000;
  PROVIDE(COMMON = .);
  .common : { *(.common) }
  . = . + 4096 * 16;
  . = ALIGN(4096);
  PROVIDE(COMMON2 = .);
  .common2 : { *(.common2) }
  . = . + 4096 * 8;
  . = ALIGN(4096);

  /* End of uninitalized data segement */
  PROVIDE(_end = .);
  . += STACK_MAX;
  PROVIDE(_end2 = .);
  . = . + 4096 * 8;
  PROVIDE(_end3 = .);
  
  .debug_info        0 : { *(.debug_info) } 
  .debug_abbrev      0 : { *(.debug_abbrev) }
  .debug_line        0 : { *(.debug_line) }
  .debug_str         0 : { *(.debug_str) }
  .debug_line_str    0 : { *(.debug_line_str) }
/*  .debug_pubnames    : { *(.debug_pubnames) }
  .debug_pubtypes    0 : { *(.debug_pubtypes) } */
}

