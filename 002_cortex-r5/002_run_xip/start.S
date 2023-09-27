	
.text
.global  _start
.global  reset_hdlr

reset_hdlr:
	b _start

_start: 
	/* 设置栈 */
	ldr  sp,=0x408000

	/* copy data从flash到IRAM */
	bl copy_data

	/* 清除bss段 */
	bl clean_bss
	
	/* 跳转到主函数 */
	bl main

halt:
	b  halt 

copy_data:
	/* 重定位data段 */
	ldr r1, =__data_load_addr  /* data段的加载地址 (0x100C1xxx) */
	ldr r2, =__data_start 	 /* data段重定位地址, 0x406000 */
	ldr r3, =__data_end 	     /* data段结束地址(重定位后地址 0x406000) */
cpy:
	ldr r4, [r1] 			 /* 从r1读到r4 */
	str r4, [r2] 			 /* r4存放到r2 */
	add r1, r1, #4 			 /* r1+1 */
	add r2, r2, #4			 /* r2+1 */
	cmp r2, r3 				 /* r2 r3比较 */
	bne cpy 				 /* 如果不等则继续拷贝 */

	mov pc, lr

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
