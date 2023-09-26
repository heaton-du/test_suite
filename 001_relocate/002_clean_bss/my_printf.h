
#ifndef _MY_PRINTF_H
#define _MY_PRINTF_H

#define  MAX_NUMBER_BYTES  	64
/**********************************************************************
 * 函数名称： my_printf_test
 * 功能描述： printf测试函数，测试自定义printf函数打印是否正常
 * 输入参数： 无
 * 输出参数：无
 * 返 回 值：  返回0，表示函数正常返回
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
extern int my_printf_test(void);
/**********************************************************************
 * 函数名称： printf
 * 功能描述： 自定义串口格式化函数，实现printf打印功能
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 返回0，表示函数正常返回
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
int printf(const char *fmt, ...);
		  			 		  						  					  				 	   		  	  	 	  
#endif /* _MY_PRINTF_H */
