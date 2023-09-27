
#include "uart.h"
#include "my_printf.h"
#include "RegHelper.h"

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
 * 功能描述： 测试bss段清零
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号        修改人        修改内容
 * -------------------------------------------------
 * 2020/02/17	    V1.0         阿和            创建
 ***********************************************************************/

#define MUX_CONFIG_GPIO_Y6 0x2060U
#define MUX_CONFIG_GPIO_Y7 0x2064U

#define IOMUX_SAFETY 0xF0630000U

int main (void)
{	
	unsigned int v;

	v = readl(IOMUX_SAFETY+MUX_CONFIG_GPIO_Y6);
	v |= 0x4;
	writel(v,IOMUX_SAFETY+MUX_CONFIG_GPIO_Y6);

	v = readl(IOMUX_SAFETY+MUX_CONFIG_GPIO_Y7);
	v |= 0x4;
	writel(v,IOMUX_SAFETY+MUX_CONFIG_GPIO_Y7);

	Uart_Init();	//初始化uart串口

	//printf("g_intA = 0x%08x\n\r", g_intA);	//打印g_intA的值
	//printf("g_intB = 0x%08x\n\r", g_intB);	//打印g_intB的值

	while (1)
	{
		PutChar(g_charA);
		g_charA++;
		delay(1000000);
	}
	return 0;
}

