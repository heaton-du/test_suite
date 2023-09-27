SECTIONS {
    . = 0x100C1000;

    . = ALIGN(4);
    .text      :
    {
      *(.text)
    }

    . = ALIGN(4);
    .rodata : { *(.rodata) }

    . = ALIGN(4);
    __data_load_addr = .;
    .data 0x406000 : AT(__data_load_addr)
    { 
    __data_start = .;
      *(.data) 
    __data_end = .;
    }

    . = ALIGN(4);
    __bss_start = .;
    .bss : { *(.bss) *(.COMMON) }
    __bss_end = .;
}