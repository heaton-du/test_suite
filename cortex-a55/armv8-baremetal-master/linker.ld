SECTIONS
{
    . = 0xFFFF000045000000;
    .text : { *(.text.boot)  *(.text.vector_el1) }
    .data : { *(.data) }
    .bss : { *(.bss COMMON) }
    . = 0xFFFF000045080000;
    el1_stack_top = .;
    . = 0xFFFF000045180000;
    .text.el0 : { *(.text) }
	. = ALIGN(8);
	. = . + 0x1000; /* 4kB of stack memory */
	el0_stack_top = .;
	. = . + 0x1000; /* 4kB of hole */
    /*1. 下面的段 32 字节对其*/
    . = ALIGN(32);
    /*2. 定义段 */
    /*定义__initcall_start符号为当前位置,即.代表当前位置*/
    __initcall_start = .;
    data_ptrs   : { *(data_ptrs)  }
    __initcall_end = .;
    /*上述3行代码代表function_ptrs节位于__initcall_start和__initcall_end之间*/

    . = . + 0x1000; /* 4kB of hole */
    . = ALIGN(32);
    __initcall_debug_start = .;
    debug_ptrs   : { *(debug_ptrs)  }
    __initcall_debug_end = .;
}
