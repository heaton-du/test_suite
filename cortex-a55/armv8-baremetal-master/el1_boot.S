.section ".text.boot", "ax"
.balign 4
.global _start
_start:
    b .
    /* Try drop from el3 to el1 secure */

    /*=============================================================*/
    /*      Enable FP/SIMD at EL1                                  */
    /*=============================================================*/
    mov x0, #3 << 20
    msr cpacr_el1, x0           /* Enable FP/SIMD at EL1 */

    /*=============================================================*/
    /*      Initialize sctlr_el1                                   */
    /*=============================================================*/
    mov x0, xzr
    orr x0, x0, #(1 << 29)          /* Checking http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.ddi0500d/CIHDIEBD.html */
    orr x0, x0, #(1 << 28)          /* Bits 29,28,23,22,20,11 should be 1 (res1 on documentation) */
    orr x0, x0, #(1 << 23)
    orr x0, x0, #(1 << 22)
    orr x0, x0, #(1 << 20)
    orr x0, x0, #(1 << 11)
    msr sctlr_el1, x0

    /*=============================================================*/
    /*      Initialize scr_el3                                     */
    /*=============================================================*/
    mrs x0, scr_el3
    orr x0, x0, #(1<<10)        /* Lower EL is 64bits */
    msr scr_el3, x0

    /*=============================================================*/
    /*      Initialize spsr_el3                                    */
    /*=============================================================*/
    mov x0, xzr
    mov x0, #0b00101            /* EL1 */
    orr x0, x0, #(1 << 8)       /* Enable SError and External Abort. */
    orr x0, x0, #(1 << 7)       /* IRQ interrupt Process state mask. */
    orr x0, x0, #(1 << 6)       /* FIQ interrupt Process state mask. */
    msr spsr_el3, x0

    /*=============================================================*/
    /*      Initialize elr_el3                                     */
    /*=============================================================*/
    adr x0, el1_secure
    msr elr_el3, x0

    eret

    el1_secure:   bl call_kernel_main
