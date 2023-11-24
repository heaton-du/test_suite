
.global cache_enable_asm
cache_enable_asm:
    mrc p15, 0, r0, c1, c0, 0  //read system control to r0
    orr r0, r0, #0x1<<12       //i-cache enable
    orr r0, r0, #0x1<<2        //d-cache enable
    dsb
    mcr p15, 0, r0, c1, c0, 0
    bx lr
.end
