/**
 *   @file    RegHelper.h
 *
 *   @brief   HW register access layer.
 */

/********************************************************
 *        Copyright(c) 2020                             *
 *        All rights reserved.                          *
 ********************************************************/

#ifndef REGHELPER_H
#define REGHELPER_H

#ifdef __cplusplus
extern "C" {
#endif

#define writell(v, a)   (*(volatile unsigned long long*)(a)) = (unsigned long long) (v)
#define readll(a)       (*(volatile unsigned long long*)(a))
#define readl(a)        (*(volatile unsigned long*)(a))
#define writel(v, a)    (*(volatile unsigned long*)(a)) = (unsigned long) (v)
#define readh(a)        (*(volatile unsigned short*)(a))
#define writeh(v, a)    (*(volatile unsigned short*)(a)) = (unsigned short) (v)
#define readb(a)        (*(volatile unsigned char*)(a))
#define writeb(v, a)    (*(volatile unsigned char*)(a))  = (unsigned char) (v)


#define REG64(addr) ((volatile unsigned long long *)(addr))
#define REG32(addr) ((volatile unsigned long *)(addr))
#define REG16(addr) ((volatile unsigned short *)(addr))
#define REG8(addr) ((volatile unsigned char *)(addr))


#define RMWREG64(addr, startbit, width, val)                                    \
              do{                                                               \
                unsigned long long temp = *REG64(addr);                                     \
                temp &= ~((((unsigned long long)1u<<(width)) - 1u) << (startbit));          \
                temp |= ((unsigned long long)(val) << (startbit));                          \
                *REG64(addr) = temp;                                            \
              }while(0)

#define RMWREG32(addr, startbit, width, val)                                    \
              do{                                                               \
                unsigned long temp = *REG32(addr);                                     \
                temp &= ~((((unsigned long)1u<<(width)) - 1u) << (startbit));          \
                temp |= ((unsigned long)(val) << (startbit));                          \
                *REG32(addr) = temp;                                            \
              }while(0)

#define RMWREG16(addr, startbit, width, val)                                    \
              do{                                                               \
                unsigned short temp = *REG16(addr);                                     \
                temp &= ~((((unsigned short)1u<<(width)) - 1u) << (startbit));          \
                temp |= ((unsigned short)(val) << (startbit));                          \
                *REG16(addr) = temp;                                            \
              }while(0)

#define RMWREG8(addr, startbit, width, val)                                    \
              do{                                                               \
                unsigned char temp = *REG8(addr);                                       \
                temp &= ~((((unsigned char)1u<<(width)) - 1u) << (startbit));           \
                temp |= ((unsigned char)(val) << (startbit));                           \
                *REG8(addr) = temp;                                             \
              }while(0)

#define reg32(addr)     (*(volatile unsigned long *)(addr))
#define reg16(addr)     (*(volatile unsigned short *)(addr))
#define reg8(addr)      (*(volatile unsigned char *)(addr))

#define rmw64           RMWREG64
#define rmw32           RMWREG32
#define rmw16           RMWREG16
#define rmw8            RMWREG8

#define REG_READ32(a)   readl((a))
#define REG_READ16(a)   readh(a)
#define REG_READ8(a)    readb(a)

#define REG_WRITE32(v, a)   writel((v), (a))
#define REG_WRITE16(v, a)   writeh(v, a)
#define REG_WRITE8(v, a)    writeb(v, a)

#define REG_RMW32   RMWREG32
#define REG_RMW16   RMWREG16
#define REG_RMW8    RMWREG8

#define BIT(nr)       (1U << (nr))
#define BITS_WIDTH(x) ((1U << (x)) - 1)
#define BIT_MASK(x) (((x) >= (sizeof(unsigned long) * 8U)) ? (0xFFFFFFFFU) : ((1UL << (x)) - 1UL))
#define SET_BITS32(x, start, width) (x = ((unsigned long)x | ((BITS_WIDTH(width)) << start)))
#define CLEAR_BITS32(x, start, width) (x = ((unsigned long)x & (~((BITS_WIDTH(width)) << start))))
#define GET_ONE_BYTE(v, start_bit) (((unsigned long)v & (0xFF << start_bit)) >> start_bit)
#define BIT_SHIFT(x, bit) (((x) >> (bit)) & 1)
#define BITS(x, high, low) ((x) & (((1UL<<((high)+1))-1) & ~((1UL<<(low))-1)))
#define BITS_SHIFT(x, high, low) (((x) >> (low)) & ((1UL<<((high)-(low)+1))-1))

#ifdef __cplusplus
}
#endif
#endif  /* REGHELPER_H */
