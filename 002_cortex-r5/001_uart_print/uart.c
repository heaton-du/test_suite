#include "uart.h"
#include "uart_reg.h"
#include "RegHelper.h"


#define UART_ROOT_CLK_FREQ  (24000000u)
#define UART7               (0xf0960000u)
/**********************************************************************
 * 函数名称： Uart_Init
 * 功能描述： 初始化UART，就是规定传输格式，设置波特率为115200，配置UART占用的GPIO管脚
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/

void uart_ip_init(unsigned int b, uart_cfg_t *cfg)
{
    /* Set MCR0.MODEN to 0x0 (disable module) */
    unsigned int mcr0 = readl(b + MCR0_OFF);
    mcr0 &= ~BM_MCR0_MODEN;
    writel(mcr0, b + MCR0_OFF);
    /* Reset module by set MCR0.MODRST to 0x1 */
    mcr0 |= BM_MCR0_MODRST;
    writel(mcr0, b + MCR0_OFF);

    /* Wait software reset auto clear (MCR0.MODRST) */
    while ((mcr0 = readl(b + MCR0_OFF)) & BM_MCR0_MODRST);

    mcr0 &= ~FM_MCR0_OPMOD;
    mcr0 |= FV_MCR0_OPMOD(0);  /* Asynchronous Serial mode */
    writel(mcr0, b + MCR0_OFF);
    /* full-duplex, no flow ctl, 8-n-1, baudrate detection enabled with 8 tries (0xaa),
     * LSB, 16x sampling */
    unsigned int rate = 115200u;;

    if (0u != cfg->baud_rate) {
        rate = cfg->baud_rate;
    }

    /* 24 bits divider shall be quite enough */
    /* for 16x sampling, the lower 4 bits are frac bits, thus no need to div 16 here */
    unsigned int div_i = UART_ROOT_CLK_FREQ / rate;
#if defined(BOARD_E3_z1)
    div_i /= 16;    /* z1's virtual uart issue */
#endif
    unsigned int pcr1 = FV_PCR1_BAUDRATECNT(div_i);
    writel(pcr1, b + PCR1_OFF);
    unsigned int pcr0 = 0;

    if (cfg->auto_br) {
        pcr0 = FV_PCR0_ABRCTL1(0)   /* one match byte */
               | FV_PCR0_ABRCTL0(0)
               | BM_PCR0_ABREN;
        writel(pcr0, b + PCR0_OFF);
    }

    unsigned int per8 = readl(b + PCR8_OFF);
    writel(per8 | BM_PCR8_RXSYNCEN,b+PCR8_OFF);

    pcr0 |= BM_PCR0_RXEN;
    writel(pcr0, b + PCR0_OFF);
    mcr0 |= BM_MCR0_MODEN;
    writel(mcr0, b + MCR0_OFF);
}

void Uart_Init(void)
{
    uart_cfg_t uart_cfg;
    uart_cfg.baud_rate = 115200u;
    uart_ip_init(UART7, &uart_cfg);
}

/**********************************************************************
 * 函数名称： PutChar
 * 功能描述： 从串口输出单个字符到上位机
 * 输入参数：单个字符
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
static int uart_ip_tx(unsigned long b, unsigned char *data, unsigned int sz)
{
    unsigned int v = readl(b + PCR0_OFF);
    v |= BM_PCR0_TXEN;
    writel(v, b + PCR0_OFF);

    while (sz) {
        if (0 == (BM_FSR0_FULL & readl(b + FSR0_OFF))) {
            writel(*data, b + TXDR_OFF);
            data++;
            sz--;
        }
    }

    /* shall not disable TX here otherwise data in fifo will never be sent out */

    return 0;
}

void PutChar(int c)
{
	unsigned char cc = (unsigned char)c;
	uart_ip_tx(UART7, &cc, 1);
}
/**********************************************************************
 * 函数名称： GetChar
 * 功能描述： 通过串口，从上位机获取单个字符
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 返回接收到的字符
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
static int uart_ip_rx(unsigned long b, unsigned char *data, unsigned int sz)
{
    while (sz) {
        if (0u != FV_FSR1_FILLLVL(readl(b + FSR1_OFF))) {
            *data++ = readl(b + RXDR_OFF);
            sz--;
        }
    }

    return 0;
}

unsigned char GetChar(void)						
{
	unsigned char c;
	uart_ip_tx(UART7, &c, 1);
	return (unsigned char)c;
}
/**********************************************************************
* 函数名称： PutStr
* 功能描述： 输出字符串，就是连续发送单个字符
* 输入参数： 字符串
* 输出参数： 无
* 返 回 值： 无
* 修改日期		  版本号 	修改人		 修改内容
* -----------------------------------------------
* 2020/02/16		V1.0	 zh(angenao)		 创建
***********************************************************************/

void PutStr(const char *s)				
{
	while (*s)
	{
		PutChar(*s);
		s++;
	}
}
int raise(int signum)/* raise函数，防止编译报错 */
{
    return 0;
}
