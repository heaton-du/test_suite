PREFIX=arm-none-eabi-
CC=$(PREFIX)gcc
LD=$(PREFIX)ld
AR=$(PREFIX)ar
OBJCOPY=$(PREFIX)objcopy
OBJDUMP=$(PREFIX)objdump

relocate.img : start.S  uart.c main.c my_printf.c
	$(CC) -nostdlib -g -c -o start.o start.S 
	$(CC) -nostdlib -g -c -o uart.o uart.c	
	$(CC) -nostdlib -g -c -o main.o main.c	
	$(CC) -nostdlib -g -c -o my_printf.o my_printf.c
	
	#使用链接脚本链接
	$(LD) -T imx6ull.lds -g start.o uart.o main.o my_printf.o -o relocate.elf -lgcc -L/usr/local/arm/gcc-arm-none-eabi-7-2018-q2-update/lib/gcc/arm-none-eabi/7.3.1
	#将所有程序的.text段放在一起，起始地址设置为0x80100000
	#将所有程序的.data段放在一起，起始地址设置为0x80102000
	#$(LD) -Ttext 0x80100000 -Tdata 0x80102000 -g start.o uart.o main.o my_printf.o -o relocate.elf -lgcc -L/home/book/100ask_imx6ull-sdk/ToolChain/gcc-linaro-6.2.1-2016.11-x86_64_arm-linux-gnueabihf/lib/gcc/arm-linux-gnueabihf/6.2.1

	$(OBJCOPY) -O binary -S relocate.elf  relocate.bin
	$(OBJDUMP) -D -m arm  relocate.elf  > relocate.dis
	./tools/mkimage -n ./tools/imximage.cfg.cfgtmp -T imximage -e 0x80100000 -d relocate.bin relocate.imx
	dd if=/dev/zero of=1k.bin bs=1024 count=1
	cat 1k.bin relocate.imx > relocate.img

clean:
	rm -f relocate.dis relocate.bin relocate.elf relocate.imx relocate.img *.o


	
