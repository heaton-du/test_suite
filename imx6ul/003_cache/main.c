
#include "uart.h"
#include "my_printf.h"

char g_charA = 'A';			//存储在 .data段
const char g_charB = 'B';	//存储在 .rodata段
const char g_charC;			//存储在 .bss段
int g_intA = 0;				//存储在 .bss段
int g_intB;					//存储在 .bss段
		  			 		  						  					  				 	   		  	  	 	  
/**********************************************************************
 * 函数名称： delay
 * 功能描述： 延时
 * 输入参数： time
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号        修改人        修改内容
 * -------------------------------------------------
 * 2020/02/17	    V1.0         阿和            创建
 ***********************************************************************/
void delay (volatile int time)
{
	while(time--);
}

/**********************************************************************
 * 函数名称： main
 * 功能描述： 打印字符串g_charA
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号        修改人        修改内容
 * -------------------------------------------------
 * 2020/02/17	    V1.0         阿和            创建
 ***********************************************************************/

int main (void)
{	
	Uart_Init();	//初始化uart串口

	printf("\n\r");
	/* 在串口上输出g_charA */
	while (1)
	{
		PutChar(g_charA);
		g_charA++;
		delay(1000000);
	}

	return 0;
}

