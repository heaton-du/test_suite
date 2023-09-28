/********************************************************
 *          Copyright(c) 2021                           *
 ********************************************************/

/* Generated by tool. Do not modify manually. */

#ifndef __UART_REG_H__
#define __UART_REG_H__

#define MCR0_OFF    0x0U

#define BM_MCR0_SELFTESTMODEEN  (0x01U << 9U)

#define BM_MCR0_QCHCTL  (0x01U << 8U)

#define FM_MCR0_OPMOD   (0xfU << 4U)
#define FV_MCR0_OPMOD(v) \
    (((v) << 4U) & FM_MCR0_OPMOD)
#define GFV_MCR0_OPMOD(v) \
    (((v) & FM_MCR0_OPMOD) >> 4U)

#define FM_MCR0_CGC (0x3U << 2U)
#define FV_MCR0_CGC(v) \
    (((v) << 2U) & FM_MCR0_CGC)
#define GFV_MCR0_CGC(v) \
    (((v) & FM_MCR0_CGC) >> 2U)

#define BM_MCR0_MODRST  (0x01U << 1U)

#define BM_MCR0_MODEN   (0x01U << 0U)

#define PRDATAINJ_OFF   0x4U

#define BM_PRDATAINJ_B0 (0x01U << 0U)

#define MCR2_OFF    0x8U

#define FM_MCR2_PWDATAINJ   (0xffffffffU << 0U)
#define FV_MCR2_PWDATAINJ(v) \
    (((v) << 0U) & FM_MCR2_PWDATAINJ)
#define GFV_MCR2_PWDATAINJ(v) \
    (((v) & FM_MCR2_PWDATAINJ) >> 0U)

#define MCR3_OFF    0xcU

#define FM_MCR3_DMARXFWCODEINJ  (0xfU << 28U)
#define FV_MCR3_DMARXFWCODEINJ(v) \
    (((v) << 28U) & FM_MCR3_DMARXFWCODEINJ)
#define GFV_MCR3_DMARXFWCODEINJ(v) \
    (((v) & FM_MCR3_DMARXFWCODEINJ) >> 28U)

#define FM_MCR3_DMARXFWDATAINJ  (0x7U << 24U)
#define FV_MCR3_DMARXFWDATAINJ(v) \
    (((v) << 24U) & FM_MCR3_DMARXFWDATAINJ)
#define GFV_MCR3_DMARXFWDATAINJ(v) \
    (((v) & FM_MCR3_DMARXFWDATAINJ) >> 24U)

#define FM_MCR3_DMATXFWCODEINJ  (0xfU << 20U)
#define FV_MCR3_DMATXFWCODEINJ(v) \
    (((v) << 20U) & FM_MCR3_DMATXFWCODEINJ)
#define GFV_MCR3_DMATXFWCODEINJ(v) \
    (((v) & FM_MCR3_DMATXFWCODEINJ) >> 20U)

#define FM_MCR3_DMATXFWDATAINJ  (0x7U << 16U)
#define FV_MCR3_DMATXFWDATAINJ(v) \
    (((v) << 16U) & FM_MCR3_DMATXFWDATAINJ)
#define GFV_MCR3_DMATXFWDATAINJ(v) \
    (((v) & FM_MCR3_DMATXFWDATAINJ) >> 16U)

#define FM_MCR3_DMARXBWCODEINJ  (0xfU << 12U)
#define FV_MCR3_DMARXBWCODEINJ(v) \
    (((v) << 12U) & FM_MCR3_DMARXBWCODEINJ)
#define GFV_MCR3_DMARXBWCODEINJ(v) \
    (((v) & FM_MCR3_DMARXBWCODEINJ) >> 12U)

#define FM_MCR3_DMARXBWDATAINJ  (0xfU << 8U)
#define FV_MCR3_DMARXBWDATAINJ(v) \
    (((v) << 8U) & FM_MCR3_DMARXBWDATAINJ)
#define GFV_MCR3_DMARXBWDATAINJ(v) \
    (((v) & FM_MCR3_DMARXBWDATAINJ) >> 8U)

#define FM_MCR3_DMATXBWCODEINJ  (0xfU << 4U)
#define FV_MCR3_DMATXBWCODEINJ(v) \
    (((v) << 4U) & FM_MCR3_DMATXBWCODEINJ)
#define GFV_MCR3_DMATXBWCODEINJ(v) \
    (((v) & FM_MCR3_DMATXBWCODEINJ) >> 4U)

#define FM_MCR3_DMATXBWDATAINJ  (0xfU << 0U)
#define FV_MCR3_DMATXBWDATAINJ(v) \
    (((v) << 0U) & FM_MCR3_DMATXBWDATAINJ)
#define GFV_MCR3_DMATXBWDATAINJ(v) \
    (((v) & FM_MCR3_DMATXBWDATAINJ) >> 0U)

#define MCR4_OFF    0x10U

#define BM_MCR4_ERRINJINTERRUPTERRUNCORR    (0x01U << 9U)

#define BM_MCR4_ERRINJINTERRUPTERRCORR  (0x01U << 8U)

#define BM_MCR4_ERRINJINTERRUPT (0x01U << 7U)

#define FM_MCR4_PWECCINJ    (0x7fU << 0U)
#define FV_MCR4_PWECCINJ(v) \
    (((v) << 0U) & FM_MCR4_PWECCINJ)
#define GFV_MCR4_PWECCINJ(v) \
    (((v) & FM_MCR4_PWECCINJ) >> 0U)

#define MSR0_OFF    0x18U

#define FM_MSR0_SCR_STATE   (0x3fU << 6U)
#define FV_MSR0_SCR_STATE(v) \
    (((v) << 6U) & FM_MSR0_SCR_STATE)
#define GFV_MSR0_SCR_STATE(v) \
    (((v) & FM_MSR0_SCR_STATE) >> 6U)

#define FM_MSR0_PCR_STATE   (0x3fU << 0U)
#define FV_MSR0_PCR_STATE(v) \
    (((v) << 0U) & FM_MSR0_PCR_STATE)
#define GFV_MSR0_PCR_STATE(v) \
    (((v) & FM_MSR0_PCR_STATE) >> 0U)

#define MSR1_OFF    0x1cU

#define INTR0_OFF   0x20U

#define BM_INTR0_IO3EDGE    (0x01U << 31U)

#define BM_INTR0_IO2EDGE    (0x01U << 30U)

#define BM_INTR0_IO1EDGE    (0x01U << 29U)

#define BM_INTR0_IO0EDGE    (0x01U << 28U)

#define BM_INTR0_RXCHKSUMERR    (0x01U << 26U)

#define BM_INTR0_RXCHKSUMPASS   (0x01U << 25U)

#define BM_INTR0_RXPIDERR   (0x01U << 24U)

#define BM_INTR0_RXPIDPASS  (0x01U << 23U)

#define BM_INTR0_APBCMDABORT    (0x01U << 22U)

#define BM_INTR0_APBCMDDONE (0x01U << 21U)

#define BM_INTR0_STARTERR   (0x01U << 20U)

#define BM_INTR0_ABRFAIL    (0x01U << 19U)

#define BM_INTR0_ABRPASS    (0x01U << 18U)

#define BM_INTR0_TC (0x01U << 17U)

#define BM_INTR0_CHARMATCH  (0x01U << 16U)

#define BM_INTR0_RXADDR (0x01U << 15U)

#define BM_INTR0_RXIDLE (0x01U << 14U)

#define BM_INTR0_RXBREAK    (0x01U << 13U)

#define BM_INTR0_RXTO   (0x01U << 12U)

#define BM_INTR0_NOISEERR   (0x01U << 11U)

#define BM_INTR0_BAUDRATEERR    (0x01U << 10U)

#define BM_INTR0_FRAMEERR   (0x01U << 9U)

#define BM_INTR0_PARITYERR  (0x01U << 8U)

#define BM_INTR0_RXFABT (0x01U << 7U)

#define BM_INTR0_TXFABT (0x01U << 6U)

#define BM_INTR0_RXFOVF (0x01U << 5U)

#define BM_INTR0_TXFOVF (0x01U << 4U)

#define BM_INTR0_RXFUDF (0x01U << 3U)

#define BM_INTR0_TXFUDF (0x01U << 2U)

#define BM_INTR0_RXFWF  (0x01U << 1U)

#define BM_INTR0_TXFWE  (0x01U << 0U)

#define INTR3_OFF   0x2cU

#define BM_INTR3_REGPAREJENERR  (0x01U << 26U)

#define BM_INTR3_SELFTESTMODEERR    (0x01U << 25U)

#define BM_INTR3_PWDATAFATAL    (0x01U << 22U)

#define BM_INTR3_PWDATAUNCERR   (0x01U << 21U)

#define BM_INTR3_PWDATACORERR   (0x01U << 20U)

#define BM_INTR3_PADDRUNCERR    (0x01U << 19U)

#define BM_INTR3_PUSERUNCERR    (0x01U << 18U)

#define BM_INTR3_PCTL1UNCERR    (0x01U << 17U)

#define BM_INTR3_PCTL0UNCERR    (0x01U << 16U)

#define BM_INTR3_DMARXBWFATALERR    (0x01U << 12U)

#define BM_INTR3_DMARXBWCORRERR (0x01U << 11U)

#define BM_INTR3_DMARXBWUNCORRERR   (0x01U << 10U)

#define BM_INTR3_DMARXEOBCERR   (0x01U << 9U)

#define BM_INTR3_DMARXEOBAERR   (0x01U << 8U)

#define BM_INTR3_DMATXBWFATALERR    (0x01U << 4U)

#define BM_INTR3_DMATXBWCORRERR (0x01U << 3U)

#define BM_INTR3_DMATXBWUNCORRERR   (0x01U << 2U)

#define BM_INTR3_DMATXEOBCERR   (0x01U << 1U)

#define BM_INTR3_DMATXEOBAERR   (0x01U << 0U)

#define INTEN0_OFF  0x30U

#define BM_INTEN0_IO3EDGEE  (0x01U << 31U)

#define BM_INTEN0_IO2EDGEE  (0x01U << 30U)

#define BM_INTEN0_IO1EDGEE  (0x01U << 29U)

#define BM_INTEN0_IO0EDGEE  (0x01U << 28U)

#define BM_INTEN0_RXCHKSUMERRE  (0x01U << 26U)

#define BM_INTEN0_RXCHKSUMPASSE (0x01U << 25U)

#define BM_INTEN0_RXPIDERRE (0x01U << 24U)

#define BM_INTEN0_RXPIDPASSE    (0x01U << 23U)

#define BM_INTEN0_APBCMDABORTE  (0x01U << 22U)

#define BM_INTEN0_APBCMDDONEE   (0x01U << 21U)

#define BM_INTEN0_STARTERRE (0x01U << 20U)

#define BM_INTEN0_ABRFAILE  (0x01U << 19U)

#define BM_INTEN0_ABRPASSE  (0x01U << 18U)

#define BM_INTEN0_TCE   (0x01U << 17U)

#define BM_INTEN0_CHARMATCHE    (0x01U << 16U)

#define BM_INTEN0_RXADDRE   (0x01U << 15U)

#define BM_INTEN0_RXIDLEE   (0x01U << 14U)

#define BM_INTEN0_RXBREAKE  (0x01U << 13U)

#define BM_INTEN0_RXTOE (0x01U << 12U)

#define BM_INTEN0_NOISEERRE (0x01U << 11U)

#define BM_INTEN0_BAUDRATEERRE  (0x01U << 10U)

#define BM_INTEN0_FRAMEERRE (0x01U << 9U)

#define BM_INTEN0_PARITYERRE    (0x01U << 8U)

#define BM_INTEN0_RXFABTE   (0x01U << 7U)

#define BM_INTEN0_TXFABTE   (0x01U << 6U)

#define BM_INTEN0_RXFOVFE   (0x01U << 5U)

#define BM_INTEN0_TXFOVFE   (0x01U << 4U)

#define BM_INTEN0_RXFUDFE   (0x01U << 3U)

#define BM_INTEN0_TXFUDFE   (0x01U << 2U)

#define BM_INTEN0_RXFWFE    (0x01U << 1U)

#define BM_INTEN0_TXFWEE    (0x01U << 0U)

#define INTEN3_OFF  0x3cU

#define BM_INTEN3_REGPAREJENERRE    (0x01U << 26U)

#define BM_INTEN3_SELFTESTMODEERRE  (0x01U << 25U)

#define BM_INTEN3_PWDATAFATALE  (0x01U << 22U)

#define BM_INTEN3_PWDATAUNCERRE (0x01U << 21U)

#define BM_INTEN3_PWDATACORERRE (0x01U << 20U)

#define BM_INTEN3_PADDRUNCERRE  (0x01U << 19U)

#define BM_INTEN3_PUSERUNCERRE  (0x01U << 18U)

#define BM_INTEN3_PCTL1UNCERRE  (0x01U << 17U)

#define BM_INTEN3_PCTL0UNCERRE  (0x01U << 16U)

#define BM_INTEN3_DMARXBWFATALERRE  (0x01U << 12U)

#define BM_INTEN3_DMARXBWCORRERRE   (0x01U << 11U)

#define BM_INTEN3_DMARXBWUNCORRERRE (0x01U << 10U)

#define BM_INTEN3_DMARXEOBCERRE (0x01U << 9U)

#define BM_INTEN3_DMARXEOBAERRE (0x01U << 8U)

#define BM_INTEN3_DMATXBWFATALERRE  (0x01U << 4U)

#define BM_INTEN3_DMATXBWCORRERRE   (0x01U << 3U)

#define BM_INTEN3_DMATXBWUNCORRERRE (0x01U << 2U)

#define BM_INTEN3_DMATXEOBCERRE (0x01U << 1U)

#define BM_INTEN3_DMATXEOBAERRE (0x01U << 0U)

#define CMDCSR0_OFF 0x40U

#define FM_CMDCSR0_DOORBELL (0xffffU << 0U)
#define FV_CMDCSR0_DOORBELL(v) \
    (((v) << 0U) & FM_CMDCSR0_DOORBELL)
#define GFV_CMDCSR0_DOORBELL(v) \
    (((v) & FM_CMDCSR0_DOORBELL) >> 0U)

#define CMDCSR1_OFF 0x44U

#define FM_CMDCSR1_PID  (0xffU << 16U)
#define FV_CMDCSR1_PID(v) \
    (((v) << 16U) & FM_CMDCSR1_PID)
#define GFV_CMDCSR1_PID(v) \
    (((v) & FM_CMDCSR1_PID) >> 16U)

#define FM_CMDCSR1_RXBYTENUM    (0xffU << 8U)
#define FV_CMDCSR1_RXBYTENUM(v) \
    (((v) << 8U) & FM_CMDCSR1_RXBYTENUM)
#define GFV_CMDCSR1_RXBYTENUM(v) \
    (((v) & FM_CMDCSR1_RXBYTENUM) >> 8U)

#define FM_CMDCSR1_TXBYTENUM    (0xffU << 0U)
#define FV_CMDCSR1_TXBYTENUM(v) \
    (((v) << 0U) & FM_CMDCSR1_TXBYTENUM)
#define GFV_CMDCSR1_TXBYTENUM(v) \
    (((v) & FM_CMDCSR1_TXBYTENUM) >> 0U)

#define FCR0_OFF    0x50U

#define BM_FCR0_CLRTXF  (0x01U << 16U)

#define FM_FCR0_TXWMLVL (0xffU << 0U)
#define FV_FCR0_TXWMLVL(v) \
    (((v) << 0U) & FM_FCR0_TXWMLVL)
#define GFV_FCR0_TXWMLVL(v) \
    (((v) & FM_FCR0_TXWMLVL) >> 0U)

#define FCR1_OFF    0x54U

#define BM_FCR1_CLRRXF  (0x01U << 16U)

#define FM_FCR1_RXWMLVL (0xffU << 0U)
#define FV_FCR1_RXWMLVL(v) \
    (((v) << 0U) & FM_FCR1_RXWMLVL)
#define GFV_FCR1_RXWMLVL(v) \
    (((v) & FM_FCR1_RXWMLVL) >> 0U)

#define FSR0_OFF    0x60U

#define BM_FSR0_FULL    (0x01U << 25U)

#define BM_FSR0_EMPTY   (0x01U << 24U)

#define FM_FSR0_FIFOSZ  (0xffU << 16U)
#define FV_FSR0_FIFOSZ(v) \
    (((v) << 16U) & FM_FSR0_FIFOSZ)
#define GFV_FSR0_FIFOSZ(v) \
    (((v) & FM_FSR0_FIFOSZ) >> 16U)

#define FM_FSR0_EMPTYLVL    (0xffU << 8U)
#define FV_FSR0_EMPTYLVL(v) \
    (((v) << 8U) & FM_FSR0_EMPTYLVL)
#define GFV_FSR0_EMPTYLVL(v) \
    (((v) & FM_FSR0_EMPTYLVL) >> 8U)

#define FM_FSR0_FILLLVL (0xffU << 0U)
#define FV_FSR0_FILLLVL(v) \
    (((v) << 0U) & FM_FSR0_FILLLVL)
#define GFV_FSR0_FILLLVL(v) \
    (((v) & FM_FSR0_FILLLVL) >> 0U)

#define FSR1_OFF    0x64U

#define BM_FSR1_FULL    (0x01U << 25U)

#define BM_FSR1_EMPTY   (0x01U << 24U)

#define FM_FSR1_FIFOSZ  (0xffU << 16U)
#define FV_FSR1_FIFOSZ(v) \
    (((v) << 16U) & FM_FSR1_FIFOSZ)
#define GFV_FSR1_FIFOSZ(v) \
    (((v) & FM_FSR1_FIFOSZ) >> 16U)

#define FM_FSR1_EMPTYLVL    (0xffU << 8U)
#define FV_FSR1_EMPTYLVL(v) \
    (((v) << 8U) & FM_FSR1_EMPTYLVL)
#define GFV_FSR1_EMPTYLVL(v) \
    (((v) & FM_FSR1_EMPTYLVL) >> 8U)

#define FM_FSR1_FILLLVL (0xffU << 0U)
#define FV_FSR1_FILLLVL(v) \
    (((v) << 0U) & FM_FSR1_FILLLVL)
#define GFV_FSR1_FILLLVL(v) \
    (((v) & FM_FSR1_FILLLVL) >> 0U)

#define DMACR_OFF   0x70U

#define BM_DMACR_RXDMARST   (0x01U << 3U)

#define BM_DMACR_TXDMARST   (0x01U << 2U)

#define BM_DMACR_RXDMAE (0x01U << 1U)

#define BM_DMACR_TXDMAE (0x01U << 0U)

#define DMASR_OFF   0x74U

#define BM_DMASR_RXDMAREQ   (0x01U << 5U)

#define BM_DMASR_TXDMAREQ   (0x01U << 4U)

#define FM_DMASR_RXDMA_STATE    (0x3U << 2U)
#define FV_DMASR_RXDMA_STATE(v) \
    (((v) << 2U) & FM_DMASR_RXDMA_STATE)
#define GFV_DMASR_RXDMA_STATE(v) \
    (((v) & FM_DMASR_RXDMA_STATE) >> 2U)

#define FM_DMASR_TXDMA_STATE    (0x3U << 0U)
#define FV_DMASR_TXDMA_STATE(v) \
    (((v) << 0U) & FM_DMASR_TXDMA_STATE)
#define GFV_DMASR_TXDMA_STATE(v) \
    (((v) & FM_DMASR_TXDMA_STATE) >> 0U)

#define PCR0_OFF    0x80U

#define FM_PCR0_RXMUTECTL   (0x3U << 29U)
#define FV_PCR0_RXMUTECTL(v) \
    (((v) << 29U) & FM_PCR0_RXMUTECTL)
#define GFV_PCR0_RXMUTECTL(v) \
    (((v) & FM_PCR0_RXMUTECTL) >> 29U)

#define BM_PCR0_TRANSFERMODE    (0x01U << 28U)

#define FM_PCR0_FCM (0x7U << 25U)
#define FV_PCR0_FCM(v) \
    (((v) << 25U) & FM_PCR0_FCM)
#define GFV_PCR0_FCM(v) \
    (((v) & FM_PCR0_FCM) >> 25U)

#define FM_PCR0_ABRCTL1 (0x7U << 22U)
#define FV_PCR0_ABRCTL1(v) \
    (((v) << 22U) & FM_PCR0_ABRCTL1)
#define GFV_PCR0_ABRCTL1(v) \
    (((v) & FM_PCR0_ABRCTL1) >> 22U)

#define FM_PCR0_ABRCTL0 (0xfU << 18U)
#define FV_PCR0_ABRCTL0(v) \
    (((v) << 18U) & FM_PCR0_ABRCTL0)
#define GFV_PCR0_ABRCTL0(v) \
    (((v) & FM_PCR0_ABRCTL0) >> 18U)

#define BM_PCR0_ABREN   (0x01U << 17U)

#define BM_PCR0_ADDRBIT (0x01U << 16U)

#define FM_PCR0_PARITYBIT   (0x7U << 13U)
#define FV_PCR0_PARITYBIT(v) \
    (((v) << 13U) & FM_PCR0_PARITYBIT)
#define GFV_PCR0_PARITYBIT(v) \
    (((v) & FM_PCR0_PARITYBIT) >> 13U)

#define FM_PCR0_STOPBIT (0x3U << 11U)
#define FV_PCR0_STOPBIT(v) \
    (((v) << 11U) & FM_PCR0_STOPBIT)
#define GFV_PCR0_STOPBIT(v) \
    (((v) & FM_PCR0_STOPBIT) >> 11U)

#define FM_PCR0_DATABIT (0x7U << 8U)
#define FV_PCR0_DATABIT(v) \
    (((v) << 8U) & FM_PCR0_DATABIT)
#define GFV_PCR0_DATABIT(v) \
    (((v) & FM_PCR0_DATABIT) >> 8U)

#define BM_PCR0_BITORDER    (0x01U << 7U)

#define BM_PCR0_RXEN    (0x01U << 6U)

#define BM_PCR0_TXEN    (0x01U << 5U)

#define FM_PCR0_PRESCALE    (0x1fU << 0U)
#define FV_PCR0_PRESCALE(v) \
    (((v) << 0U) & FM_PCR0_PRESCALE)
#define GFV_PCR0_PRESCALE(v) \
    (((v) & FM_PCR0_PRESCALE) >> 0U)

#define PCR1_OFF    0x84U

#define FM_PCR1_RXIDLECTL   (0x7U << 29U)
#define FV_PCR1_RXIDLECTL(v) \
    (((v) << 29U) & FM_PCR1_RXIDLECTL)
#define GFV_PCR1_RXIDLECTL(v) \
    (((v) & FM_PCR1_RXIDLECTL) >> 29U)

#define FM_PCR1_RXBREAKCTL  (0x7U << 26U)
#define FV_PCR1_RXBREAKCTL(v) \
    (((v) << 26U) & FM_PCR1_RXBREAKCTL)
#define GFV_PCR1_RXBREAKCTL(v) \
    (((v) & FM_PCR1_RXBREAKCTL) >> 26U)

#define FM_PCR1_SAMPLERATE  (0x3U << 24U)
#define FV_PCR1_SAMPLERATE(v) \
    (((v) << 24U) & FM_PCR1_SAMPLERATE)
#define GFV_PCR1_SAMPLERATE(v) \
    (((v) & FM_PCR1_SAMPLERATE) >> 24U)

#define FM_PCR1_BAUDRATECNT (0xffffffU << 0U)
#define FV_PCR1_BAUDRATECNT(v) \
    (((v) << 0U) & FM_PCR1_BAUDRATECNT)
#define GFV_PCR1_BAUDRATECNT(v) \
    (((v) & FM_PCR1_BAUDRATECNT) >> 0U)

#define PCR2_OFF    0x88U

#define FM_PCR2_ADDRMSK (0xffU << 24U)
#define FV_PCR2_ADDRMSK(v) \
    (((v) << 24U) & FM_PCR2_ADDRMSK)
#define GFV_PCR2_ADDRMSK(v) \
    (((v) & FM_PCR2_ADDRMSK) >> 24U)

#define FM_PCR2_ADDRCHAR    (0xffU << 16U)
#define FV_PCR2_ADDRCHAR(v) \
    (((v) << 16U) & FM_PCR2_ADDRCHAR)
#define GFV_PCR2_ADDRCHAR(v) \
    (((v) & FM_PCR2_ADDRCHAR) >> 16U)

#define FM_PCR2_CHAR2   (0xffU << 8U)
#define FV_PCR2_CHAR2(v) \
    (((v) << 8U) & FM_PCR2_CHAR2)
#define GFV_PCR2_CHAR2(v) \
    (((v) & FM_PCR2_CHAR2) >> 8U)

#define FM_PCR2_CHAR1   (0xffU << 0U)
#define FV_PCR2_CHAR1(v) \
    (((v) << 0U) & FM_PCR2_CHAR1)
#define GFV_PCR2_CHAR1(v) \
    (((v) & FM_PCR2_CHAR1) >> 0U)

#define PCR3_OFF    0x8cU

#define FM_PCR3_DEDT    (0xffU << 24U)
#define FV_PCR3_DEDT(v) \
    (((v) << 24U) & FM_PCR3_DEDT)
#define GFV_PCR3_DEDT(v) \
    (((v) & FM_PCR3_DEDT) >> 24U)

#define FM_PCR3_DEAT    (0xffU << 16U)
#define FV_PCR3_DEAT(v) \
    (((v) << 16U) & FM_PCR3_DEAT)
#define GFV_PCR3_DEAT(v) \
    (((v) & FM_PCR3_DEAT) >> 16U)

#define FM_PCR3_RE2DE   (0xffU << 8U)
#define FV_PCR3_RE2DE(v) \
    (((v) << 8U) & FM_PCR3_RE2DE)
#define GFV_PCR3_RE2DE(v) \
    (((v) & FM_PCR3_RE2DE) >> 8U)

#define FM_PCR3_DE2RE   (0xffU << 0U)
#define FV_PCR3_DE2RE(v) \
    (((v) << 0U) & FM_PCR3_DE2RE)
#define GFV_PCR3_DE2RE(v) \
    (((v) & FM_PCR3_DE2RE) >> 0U)

#define PCR4_OFF    0x90U

#define FM_PCR4_RXTOCTL (0x7U << 20U)
#define FV_PCR4_RXTOCTL(v) \
    (((v) << 20U) & FM_PCR4_RXTOCTL)
#define GFV_PCR4_RXTOCTL(v) \
    (((v) & FM_PCR4_RXTOCTL) >> 20U)

#define BM_PCR4_BCLKOE  (0x01U << 19U)

#define FM_PCR4_CHARMATCHCTL    (0x7U << 16U)
#define FV_PCR4_CHARMATCHCTL(v) \
    (((v) << 16U) & FM_PCR4_CHARMATCHCTL)
#define GFV_PCR4_CHARMATCHCTL(v) \
    (((v) & FM_PCR4_CHARMATCHCTL) >> 16U)

#define FM_PCR4_TXIDLECTL   (0xfU << 12U)
#define FV_PCR4_TXIDLECTL(v) \
    (((v) << 12U) & FM_PCR4_TXIDLECTL)
#define GFV_PCR4_TXIDLECTL(v) \
    (((v) & FM_PCR4_TXIDLECTL) >> 12U)

#define FM_PCR4_TXBREAKCTL  (0xfU << 8U)
#define FV_PCR4_TXBREAKCTL(v) \
    (((v) << 8U) & FM_PCR4_TXBREAKCTL)
#define GFV_PCR4_TXBREAKCTL(v) \
    (((v) & FM_PCR4_TXBREAKCTL) >> 8U)

#define BM_PCR4_TXIDLE  (0x01U << 2U)

#define BM_PCR4_TXBREAK (0x01U << 1U)

#define BM_PCR4_TXADDR  (0x01U << 0U)

#define PCR5_OFF    0x94U

#define FM_PCR5_SIRRXPUL    (0xffU << 24U)
#define FV_PCR5_SIRRXPUL(v) \
    (((v) << 24U) & FM_PCR5_SIRRXPUL)
#define GFV_PCR5_SIRRXPUL(v) \
    (((v) & FM_PCR5_SIRRXPUL) >> 24U)

#define FM_PCR5_SIRTXPUL    (0xffU << 16U)
#define FV_PCR5_SIRTXPUL(v) \
    (((v) << 16U) & FM_PCR5_SIRTXPUL)
#define GFV_PCR5_SIRTXPUL(v) \
    (((v) & FM_PCR5_SIRTXPUL) >> 16U)

#define FM_PCR5_TXCHARINT   (0xffU << 0U)
#define FV_PCR5_TXCHARINT(v) \
    (((v) << 0U) & FM_PCR5_TXCHARINT)
#define GFV_PCR5_TXCHARINT(v) \
    (((v) & FM_PCR5_TXCHARINT) >> 0U)

#define PCR6_OFF    0x98U

#define BM_PCR6_CHKSUMTYP   (0x01U << 3U)

#define FM_PCR6_LINBREAKDEL (0x7U << 0U)
#define FV_PCR6_LINBREAKDEL(v) \
    (((v) << 0U) & FM_PCR6_LINBREAKDEL)
#define GFV_PCR6_LINBREAKDEL(v) \
    (((v) & FM_PCR6_LINBREAKDEL) >> 0U)

#define PCR7_OFF    0x9cU

#define FM_PCR7_PCMDTO  (0x1fU << 0U)
#define FV_PCR7_PCMDTO(v) \
    (((v) << 0U) & FM_PCR7_PCMDTO)
#define GFV_PCR7_PCMDTO(v) \
    (((v) & FM_PCR7_PCMDTO) >> 0U)

#define PCR8_OFF    0xa0U

#define FM_PCR8_RXFILTCTL   (0x7U << 18U)
#define FV_PCR8_RXFILTCTL(v) \
    (((v) << 18U) & FM_PCR8_RXFILTCTL)
#define GFV_PCR8_RXFILTCTL(v) \
    (((v) & FM_PCR8_RXFILTCTL) >> 18U)

#define BM_PCR8_RXSYNCEN    (0x01U << 17U)

#define BM_PCR8_RXPOL   (0x01U << 16U)

#define FM_PCR8_RXEDGESEL   (0x3U << 14U)
#define FV_PCR8_RXEDGESEL(v) \
    (((v) << 14U) & FM_PCR8_RXEDGESEL)
#define GFV_PCR8_RXEDGESEL(v) \
    (((v) & FM_PCR8_RXEDGESEL) >> 14U)

#define FM_PCR8_RXMODE  (0x3U << 12U)
#define FV_PCR8_RXMODE(v) \
    (((v) << 12U) & FM_PCR8_RXMODE)
#define GFV_PCR8_RXMODE(v) \
    (((v) & FM_PCR8_RXMODE) >> 12U)

#define FM_PCR8_RXSEL   (0xfU << 8U)
#define FV_PCR8_RXSEL(v) \
    (((v) << 8U) & FM_PCR8_RXSEL)
#define GFV_PCR8_RXSEL(v) \
    (((v) & FM_PCR8_RXSEL) >> 8U)

#define BM_PCR8_TXPOL   (0x01U << 7U)

#define FM_PCR8_TXMODE  (0x7U << 4U)
#define FV_PCR8_TXMODE(v) \
    (((v) << 4U) & FM_PCR8_TXMODE)
#define GFV_PCR8_TXMODE(v) \
    (((v) & FM_PCR8_TXMODE) >> 4U)

#define FM_PCR8_TXSEL   (0xfU << 0U)
#define FV_PCR8_TXSEL(v) \
    (((v) << 0U) & FM_PCR8_TXSEL)
#define GFV_PCR8_TXSEL(v) \
    (((v) & FM_PCR8_TXSEL) >> 0U)

#define PCR9_OFF    0xa4U

#define FM_PCR9_RXFILTCTL   (0x7U << 18U)
#define FV_PCR9_RXFILTCTL(v) \
    (((v) << 18U) & FM_PCR9_RXFILTCTL)
#define GFV_PCR9_RXFILTCTL(v) \
    (((v) & FM_PCR9_RXFILTCTL) >> 18U)

#define BM_PCR9_RXSYNCEN    (0x01U << 17U)

#define BM_PCR9_RXPOL   (0x01U << 16U)

#define FM_PCR9_RXEDGESEL   (0x3U << 14U)
#define FV_PCR9_RXEDGESEL(v) \
    (((v) << 14U) & FM_PCR9_RXEDGESEL)
#define GFV_PCR9_RXEDGESEL(v) \
    (((v) & FM_PCR9_RXEDGESEL) >> 14U)

#define FM_PCR9_RXMODE  (0x3U << 12U)
#define FV_PCR9_RXMODE(v) \
    (((v) << 12U) & FM_PCR9_RXMODE)
#define GFV_PCR9_RXMODE(v) \
    (((v) & FM_PCR9_RXMODE) >> 12U)

#define FM_PCR9_RXSEL   (0xfU << 8U)
#define FV_PCR9_RXSEL(v) \
    (((v) << 8U) & FM_PCR9_RXSEL)
#define GFV_PCR9_RXSEL(v) \
    (((v) & FM_PCR9_RXSEL) >> 8U)

#define BM_PCR9_TXPOL   (0x01U << 7U)

#define FM_PCR9_TXMODE  (0x7U << 4U)
#define FV_PCR9_TXMODE(v) \
    (((v) << 4U) & FM_PCR9_TXMODE)
#define GFV_PCR9_TXMODE(v) \
    (((v) & FM_PCR9_TXMODE) >> 4U)

#define FM_PCR9_TXSEL   (0xfU << 0U)
#define FV_PCR9_TXSEL(v) \
    (((v) << 0U) & FM_PCR9_TXSEL)
#define GFV_PCR9_TXSEL(v) \
    (((v) & FM_PCR9_TXSEL) >> 0U)

#define PCR10_OFF   0xa8U

#define FM_PCR10_RXFILTCTL  (0x7U << 18U)
#define FV_PCR10_RXFILTCTL(v) \
    (((v) << 18U) & FM_PCR10_RXFILTCTL)
#define GFV_PCR10_RXFILTCTL(v) \
    (((v) & FM_PCR10_RXFILTCTL) >> 18U)

#define BM_PCR10_RXSYNCEN   (0x01U << 17U)

#define BM_PCR10_RXPOL  (0x01U << 16U)

#define FM_PCR10_RXEDGESEL  (0x3U << 14U)
#define FV_PCR10_RXEDGESEL(v) \
    (((v) << 14U) & FM_PCR10_RXEDGESEL)
#define GFV_PCR10_RXEDGESEL(v) \
    (((v) & FM_PCR10_RXEDGESEL) >> 14U)

#define FM_PCR10_RXMODE (0x3U << 12U)
#define FV_PCR10_RXMODE(v) \
    (((v) << 12U) & FM_PCR10_RXMODE)
#define GFV_PCR10_RXMODE(v) \
    (((v) & FM_PCR10_RXMODE) >> 12U)

#define FM_PCR10_RXSEL  (0xfU << 8U)
#define FV_PCR10_RXSEL(v) \
    (((v) << 8U) & FM_PCR10_RXSEL)
#define GFV_PCR10_RXSEL(v) \
    (((v) & FM_PCR10_RXSEL) >> 8U)

#define BM_PCR10_TXPOL  (0x01U << 7U)

#define FM_PCR10_TXMODE (0x7U << 4U)
#define FV_PCR10_TXMODE(v) \
    (((v) << 4U) & FM_PCR10_TXMODE)
#define GFV_PCR10_TXMODE(v) \
    (((v) & FM_PCR10_TXMODE) >> 4U)

#define FM_PCR10_TXSEL  (0xfU << 0U)
#define FV_PCR10_TXSEL(v) \
    (((v) << 0U) & FM_PCR10_TXSEL)
#define GFV_PCR10_TXSEL(v) \
    (((v) & FM_PCR10_TXSEL) >> 0U)

#define PCR11_OFF   0xacU

#define FM_PCR11_RXFILTCTL  (0x7U << 18U)
#define FV_PCR11_RXFILTCTL(v) \
    (((v) << 18U) & FM_PCR11_RXFILTCTL)
#define GFV_PCR11_RXFILTCTL(v) \
    (((v) & FM_PCR11_RXFILTCTL) >> 18U)

#define BM_PCR11_RXSYNCEN   (0x01U << 17U)

#define BM_PCR11_RXPOL  (0x01U << 16U)

#define FM_PCR11_RXEDGESEL  (0x3U << 14U)
#define FV_PCR11_RXEDGESEL(v) \
    (((v) << 14U) & FM_PCR11_RXEDGESEL)
#define GFV_PCR11_RXEDGESEL(v) \
    (((v) & FM_PCR11_RXEDGESEL) >> 14U)

#define FM_PCR11_RXMODE (0x3U << 12U)
#define FV_PCR11_RXMODE(v) \
    (((v) << 12U) & FM_PCR11_RXMODE)
#define GFV_PCR11_RXMODE(v) \
    (((v) & FM_PCR11_RXMODE) >> 12U)

#define FM_PCR11_RXSEL  (0xfU << 8U)
#define FV_PCR11_RXSEL(v) \
    (((v) << 8U) & FM_PCR11_RXSEL)
#define GFV_PCR11_RXSEL(v) \
    (((v) & FM_PCR11_RXSEL) >> 8U)

#define BM_PCR11_TXPOL  (0x01U << 7U)

#define FM_PCR11_TXMODE (0x7U << 4U)
#define FV_PCR11_TXMODE(v) \
    (((v) << 4U) & FM_PCR11_TXMODE)
#define GFV_PCR11_TXMODE(v) \
    (((v) & FM_PCR11_TXMODE) >> 4U)

#define FM_PCR11_TXSEL  (0xfU << 0U)
#define FV_PCR11_TXSEL(v) \
    (((v) << 0U) & FM_PCR11_TXSEL)
#define GFV_PCR11_TXSEL(v) \
    (((v) & FM_PCR11_TXSEL) >> 0U)

#define PCR12_OFF   0xb0U

#define FM_PCR12_RSVD   (0xffffffffU << 0U)
#define FV_PCR12_RSVD(v) \
    (((v) << 0U) & FM_PCR12_RSVD)
#define GFV_PCR12_RSVD(v) \
    (((v) & FM_PCR12_RSVD) >> 0U)

#define PCR13_OFF   0xb4U

#define FM_PCR13_RSVD   (0xffffffffU << 0U)
#define FV_PCR13_RSVD(v) \
    (((v) << 0U) & FM_PCR13_RSVD)
#define GFV_PCR13_RSVD(v) \
    (((v) & FM_PCR13_RSVD) >> 0U)

#define PCR14_OFF   0xb8U

#define FM_PCR14_RSVD   (0xffffffffU << 0U)
#define FV_PCR14_RSVD(v) \
    (((v) << 0U) & FM_PCR14_RSVD)
#define GFV_PCR14_RSVD(v) \
    (((v) & FM_PCR14_RSVD) >> 0U)

#define PCR15_OFF   0xbcU

#define FM_PCR15_RSVD   (0xffffffffU << 0U)
#define FV_PCR15_RSVD(v) \
    (((v) << 0U) & FM_PCR15_RSVD)
#define GFV_PCR15_RSVD(v) \
    (((v) & FM_PCR15_RSVD) >> 0U)

#define REG_PARITY_ERR_INT_STAT_OFF 0xe0U

#define BM_REG_PARITY_ERR_INT_STAT_REG_PARITY_ERR   (0x01U << 0U)

#define REG_PARITY_ERR_INT_STAT_EN_OFF  0xe4U

#define BM_REG_PARITY_ERR_INT_STAT_EN_REG_PARITY_ERR    (0x01U << 0U)

#define REG_PARITY_ERR_INT_SIG_EN_OFF   0xe8U

#define BM_REG_PARITY_ERR_INT_SIG_EN_REG_PARITY_ERR (0x01U << 0U)

#define PSR0_OFF    0x100U

#define FM_PSR0_LIN_CHECKSUM    (0xffU << 24U)
#define FV_PSR0_LIN_CHECKSUM(v) \
    (((v) << 24U) & FM_PSR0_LIN_CHECKSUM)
#define GFV_PSR0_LIN_CHECKSUM(v) \
    (((v) & FM_PSR0_LIN_CHECKSUM) >> 24U)

#define FM_PSR0_PCMD_STATE  (0x3U << 22U)
#define FV_PSR0_PCMD_STATE(v) \
    (((v) << 22U) & FM_PSR0_PCMD_STATE)
#define GFV_PSR0_PCMD_STATE(v) \
    (((v) & FM_PSR0_PCMD_STATE) >> 22U)

#define BM_PSR0_MUTEMODE    (0x01U << 21U)

#define FM_PSR0_ABR_STATE   (0x7U << 18U)
#define FV_PSR0_ABR_STATE(v) \
    (((v) << 18U) & FM_PSR0_ABR_STATE)
#define GFV_PSR0_ABR_STATE(v) \
    (((v) & FM_PSR0_ABR_STATE) >> 18U)

#define FM_PSR0_RXBREAK_STATE   (0x3U << 16U)
#define FV_PSR0_RXBREAK_STATE(v) \
    (((v) << 16U) & FM_PSR0_RXBREAK_STATE)
#define GFV_PSR0_RXBREAK_STATE(v) \
    (((v) & FM_PSR0_RXBREAK_STATE) >> 16U)

#define FM_PSR0_IOTX_STATE  (0xfU << 12U)
#define FV_PSR0_IOTX_STATE(v) \
    (((v) << 12U) & FM_PSR0_IOTX_STATE)
#define GFV_PSR0_IOTX_STATE(v) \
    (((v) & FM_PSR0_IOTX_STATE) >> 12U)

#define FM_PSR0_IORX_STATE  (0xfU << 8U)
#define FV_PSR0_IORX_STATE(v) \
    (((v) << 8U) & FM_PSR0_IORX_STATE)
#define GFV_PSR0_IORX_STATE(v) \
    (((v) & FM_PSR0_IORX_STATE) >> 8U)

#define FM_PSR0_LIN_STATE   (0xfU << 4U)
#define FV_PSR0_LIN_STATE(v) \
    (((v) << 4U) & FM_PSR0_LIN_STATE)
#define GFV_PSR0_LIN_STATE(v) \
    (((v) & FM_PSR0_LIN_STATE) >> 4U)

#define FM_PSR0_FC_STATE    (0x7U << 0U)
#define FV_PSR0_FC_STATE(v) \
    (((v) << 0U) & FM_PSR0_FC_STATE)
#define GFV_PSR0_FC_STATE(v) \
    (((v) & FM_PSR0_FC_STATE) >> 0U)

#define PSR1_OFF    0x104U

#define FM_PSR1_ABRCHAR (0xffU << 24U)
#define FV_PSR1_ABRCHAR(v) \
    (((v) << 24U) & FM_PSR1_ABRCHAR)
#define GFV_PSR1_ABRCHAR(v) \
    (((v) & FM_PSR1_ABRCHAR) >> 24U)

#define FM_PSR1_AUTOBAUDRATE    (0xffffffU << 0U)
#define FV_PSR1_AUTOBAUDRATE(v) \
    (((v) << 0U) & FM_PSR1_AUTOBAUDRATE)
#define GFV_PSR1_AUTOBAUDRATE(v) \
    (((v) & FM_PSR1_AUTOBAUDRATE) >> 0U)

#define PSR2_OFF    0x108U

#define FM_PSR2_ABR_LOW (0x3ffffffU << 0U)
#define FV_PSR2_ABR_LOW(v) \
    (((v) << 0U) & FM_PSR2_ABR_LOW)
#define GFV_PSR2_ABR_LOW(v) \
    (((v) & FM_PSR2_ABR_LOW) >> 0U)

#define PSR3_OFF    0x10cU

#define FM_PSR3_ABR_HIGH    (0x3ffffffU << 0U)
#define FV_PSR3_ABR_HIGH(v) \
    (((v) << 0U) & FM_PSR3_ABR_HIGH)
#define GFV_PSR3_ABR_HIGH(v) \
    (((v) & FM_PSR3_ABR_HIGH) >> 0U)

#define PSR4_OFF    0x110U

#define FM_PSR4_LINPID  (0xffU << 0U)
#define FV_PSR4_LINPID(v) \
    (((v) << 0U) & FM_PSR4_LINPID)
#define GFV_PSR4_LINPID(v) \
    (((v) & FM_PSR4_LINPID) >> 0U)

#define PSR5_OFF    0x114U

#define FM_PSR5_RSVD    (0xffffffffU << 0U)
#define FV_PSR5_RSVD(v) \
    (((v) << 0U) & FM_PSR5_RSVD)
#define GFV_PSR5_RSVD(v) \
    (((v) & FM_PSR5_RSVD) >> 0U)

#define PSR6_OFF    0x118U

#define FM_PSR6_RSVD    (0xffffffffU << 0U)
#define FV_PSR6_RSVD(v) \
    (((v) << 0U) & FM_PSR6_RSVD)
#define GFV_PSR6_RSVD(v) \
    (((v) & FM_PSR6_RSVD) >> 0U)

#define PSR7_OFF    0x11cU

#define FM_PSR7_RSVD    (0xffffffffU << 0U)
#define FV_PSR7_RSVD(v) \
    (((v) << 0U) & FM_PSR7_RSVD)
#define GFV_PSR7_RSVD(v) \
    (((v) & FM_PSR7_RSVD) >> 0U)

#define TXDR_OFF    0x200U

#define RXDR_OFF    0x300U

#endif  /* __UART_REG_H__ */
