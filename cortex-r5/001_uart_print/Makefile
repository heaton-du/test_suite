PREFIX=arm-none-eabi-
CC=$(PREFIX)gcc
LD=$(PREFIX)ld
AR=$(PREFIX)ar
OBJCOPY=$(PREFIX)objcopy
OBJDUMP=$(PREFIX)objdump

test_suite.img : start.S  uart.c main.c my_printf.c
	$(CC) -nostdlib -g -c -o start.o start.S 
	$(CC) -nostdlib -g -c -o uart.o uart.c	
	$(CC) -nostdlib -g -c -o main.o main.c	
	$(CC) -nostdlib -g -c -o my_printf.o my_printf.c
	
	$(LD) -T link.lds -g start.o uart.o main.o my_printf.o -o test_suite.elf -lgcc -L/usr/local/arm/gcc-arm-none-eabi-7-2018-q2-update/lib/gcc/arm-none-eabi/7.3.1
	
	$(OBJCOPY) -O binary -S test_suite.elf  test_suite.bin
	$(OBJDUMP) -D -m arm  test_suite.elf  > test_suite.dis
	../tools/sign/atb_signer_e3 sign --v 2 --sec_ver 0x1234 --dgst sha256 --iib core=0 type=0x0 image=test_suite.bin to=0x404000 entry=0x404000 --of test_suite.sign.bin

clean:
	rm -f test_suite.dis test_suite.bin test_suite.elf test_suite.imx test_suite.img *.o *.bin


	
