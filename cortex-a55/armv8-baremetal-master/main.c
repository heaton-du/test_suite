#include "uart.h"
#include "stdio.h"
#include "types.h"
#include "shell.h"

void main(void)
{
    printf("Hello World\n");
    shell_user();
    return;
}


void call_kernel_main(void)
{
    while(1);
}