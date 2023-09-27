	
.text
.global  _start
.global  reset_hdlr

reset_hdlr:
	b _start

_start: 
	b .
	/* 设置栈 */
	ldr  sp,=0x408000

	/* 从Flash Copy到IRAM 运行 */
	adr     r0, reset_hdlr
    ldr     r1, =0x404000                 /* calculate the binary's physical load address */
    mov     r11, r1
    subs    r12, r0, r1                          /* calculate the delta between where we're loaded and the proper spot */
    beq     .Lrelocate_done

    /* we need to relocate ourselves to the proper spot */
    ldr     r2, =__bss_start
    add     r2, r12

.Lrelocate_loop:
    ldmia   r0!, {r3-r10}
    cmp     r0, r2
    stmia   r1!, {r3-r10}
    blt     .Lrelocate_loop

    /* we're relocated, jump to the right address */
    sub     pc, r12
    nop     /* skipped in the add to pc */

.Lrelocate_done:
	/* 清除bss段 */
	bl clean_bss
	
	/* 跳转到主函数 */
	bl main

halt:
	b  halt 

clean_bss:
	ldr r1, =__bss_start	//将链接脚本变量__bss_start变量保存于r1
	ldr r2, =__bss_end		//将链接脚本变量__bss_end变量保存于r2
	mov r3, #0
clean:
	strb r3, [r1]			//将当前地址下的数据清零
	add r1, r1, #1			//将r1内存储的地址+1
	cmp r1, r2				//相等：清零操作结束；否则继续执行clean函数清零bss段
	bne clean
	
	mov pc, lr
