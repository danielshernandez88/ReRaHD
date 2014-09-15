//****************************************************************************
// @Module        Parallel Ports
// @Filename      IO.c
// @Project       dave_project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon TC1797
//
// @Compiler      Hightec GNU 3.4.5
//
// @Codegenerator 1.0
//
// @Description   This file contains all function prototypes and macros for 
//                the IO module.
//
//----------------------------------------------------------------------------
// @Date          14/09/2014 13:56:20
//
//****************************************************************************

// USER CODE BEGIN (IO_Header,1)

// USER CODE END



#ifndef _IO_H_
#define _IO_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (IO_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

#define IO_NO_PULL    0x00
#define IO_PULL_DOWN  0x01
#define IO_PULL_UP    0x02
#define IO_PUSH_PULL  0x08
#define IO_OPEN_DRAIN 0x0C

//----------------------------------------------------------------------------
// Defines for the parameter PinName
//----------------------------------------------------------------------------

#define IO_P0_0       P0_OUT.bits.P0
#define IO_P0_1       P0_OUT.bits.P1
#define IO_P0_2       P0_OUT.bits.P2
#define IO_P0_3       P0_OUT.bits.P3
#define IO_P0_4       P0_OUT.bits.P4
#define IO_P0_5       P0_OUT.bits.P5
#define IO_P0_6       P0_OUT.bits.P6
#define IO_P0_7       P0_OUT.bits.P7
#define IO_P0_8       P0_OUT.bits.P8
#define IO_P0_9       P0_OUT.bits.P9
#define IO_P0_10       P0_OUT.bits.P10
#define IO_P0_11       P0_OUT.bits.P11
#define IO_P0_12       P0_OUT.bits.P12
#define IO_P0_13       P0_OUT.bits.P13
#define IO_P0_14       P0_OUT.bits.P14
#define IO_P0_15       P0_OUT.bits.P15

#define IO_P1_0       P1_OUT.bits.P0
#define IO_P1_1       P1_OUT.bits.P1
#define IO_P1_2       P1_OUT.bits.P2
#define IO_P1_3       P1_OUT.bits.P3
#define IO_P1_4       P1_OUT.bits.P4
#define IO_P1_5       P1_OUT.bits.P5
#define IO_P1_6       P1_OUT.bits.P6
#define IO_P1_7       P1_OUT.bits.P7
#define IO_P1_8       P1_OUT.bits.P8
#define IO_P1_9       P1_OUT.bits.P9
#define IO_P1_10       P1_OUT.bits.P10
#define IO_P1_11       P1_OUT.bits.P11
#define IO_P1_12       P1_OUT.bits.P12
#define IO_P1_13       P1_OUT.bits.P13
#define IO_P1_14       P1_OUT.bits.P14
#define IO_P1_15       P1_OUT.bits.P15

#define IO_P2_2       P2_OUT.bits.P2
#define IO_P2_3       P2_OUT.bits.P3
#define IO_P2_4       P2_OUT.bits.P4
#define IO_P2_5       P2_OUT.bits.P5
#define IO_P2_6       P2_OUT.bits.P6
#define IO_P2_7       P2_OUT.bits.P7
#define IO_P2_8       P2_OUT.bits.P8
#define IO_P2_9       P2_OUT.bits.P9
#define IO_P2_10       P2_OUT.bits.P10
#define IO_P2_11       P2_OUT.bits.P11
#define IO_P2_12       P2_OUT.bits.P12
#define IO_P2_13       P2_OUT.bits.P13
#define IO_P2_14       P2_OUT.bits.P14
#define IO_P2_15       P2_OUT.bits.P15

#define IO_P3_0       P3_OUT.bits.P0
#define IO_P3_1       P3_OUT.bits.P1
#define IO_P3_2       P3_OUT.bits.P2
#define IO_P3_3       P3_OUT.bits.P3
#define IO_P3_4       P3_OUT.bits.P4
#define IO_P3_5       P3_OUT.bits.P5
#define IO_P3_6       P3_OUT.bits.P6
#define IO_P3_7       P3_OUT.bits.P7
#define IO_P3_8       P3_OUT.bits.P8
#define IO_P3_9       P3_OUT.bits.P9
#define IO_P3_10       P3_OUT.bits.P10
#define IO_P3_11       P3_OUT.bits.P11
#define IO_P3_12       P3_OUT.bits.P12
#define IO_P3_13       P3_OUT.bits.P13
#define IO_P3_14       P3_OUT.bits.P14
#define IO_P3_15       P3_OUT.bits.P15

#define IO_P4_0       P4_OUT.bits.P0
#define IO_P4_1       P4_OUT.bits.P1
#define IO_P4_2       P4_OUT.bits.P2
#define IO_P4_3       P4_OUT.bits.P3
#define IO_P4_4       P4_OUT.bits.P4
#define IO_P4_5       P4_OUT.bits.P5
#define IO_P4_6       P4_OUT.bits.P6
#define IO_P4_7       P4_OUT.bits.P7
#define IO_P4_8       P4_OUT.bits.P8
#define IO_P4_9       P4_OUT.bits.P9
#define IO_P4_10       P4_OUT.bits.P10
#define IO_P4_11       P4_OUT.bits.P11
#define IO_P4_12       P4_OUT.bits.P12
#define IO_P4_13       P4_OUT.bits.P13
#define IO_P4_14       P4_OUT.bits.P14
#define IO_P4_15       P4_OUT.bits.P15

#define IO_P5_0       P5_OUT.bits.P0
#define IO_P5_1       P5_OUT.bits.P1
#define IO_P5_2       P5_OUT.bits.P2
#define IO_P5_3       P5_OUT.bits.P3
#define IO_P5_4       P5_OUT.bits.P4
#define IO_P5_5       P5_OUT.bits.P5
#define IO_P5_6       P5_OUT.bits.P6
#define IO_P5_7       P5_OUT.bits.P7
#define IO_P5_8       P5_OUT.bits.P8
#define IO_P5_9       P5_OUT.bits.P9
#define IO_P5_10       P5_OUT.bits.P10
#define IO_P5_11       P5_OUT.bits.P11
#define IO_P5_12       P5_OUT.bits.P12
#define IO_P5_13       P5_OUT.bits.P13
#define IO_P5_14       P5_OUT.bits.P14
#define IO_P5_15       P5_OUT.bits.P15

#define IO_P6_4       P6_OUT.bits.P4
#define IO_P6_5       P6_OUT.bits.P5
#define IO_P6_6       P6_OUT.bits.P6
#define IO_P6_7       P6_OUT.bits.P7
#define IO_P6_8       P6_OUT.bits.P8
#define IO_P6_9       P6_OUT.bits.P9
#define IO_P6_10       P6_OUT.bits.P10
#define IO_P6_11       P6_OUT.bits.P11
#define IO_P6_12       P6_OUT.bits.P12
#define IO_P6_13       P6_OUT.bits.P13
#define IO_P6_14       P6_OUT.bits.P14
#define IO_P6_15       P6_OUT.bits.P15

#define IO_P7_0       P7_OUT.bits.P0
#define IO_P7_1       P7_OUT.bits.P1
#define IO_P7_2       P7_OUT.bits.P2
#define IO_P7_3       P7_OUT.bits.P3
#define IO_P7_4       P7_OUT.bits.P4
#define IO_P7_5       P7_OUT.bits.P5
#define IO_P7_6       P7_OUT.bits.P6
#define IO_P7_7       P7_OUT.bits.P7

#define IO_P8_0       P8_OUT.bits.P0
#define IO_P8_1       P8_OUT.bits.P1
#define IO_P8_2       P8_OUT.bits.P2
#define IO_P8_3       P8_OUT.bits.P3
#define IO_P8_4       P8_OUT.bits.P4
#define IO_P8_5       P8_OUT.bits.P5
#define IO_P8_6       P8_OUT.bits.P6
#define IO_P8_7       P8_OUT.bits.P7

#define IO_P9_0       P9_OUT.bits.P0
#define IO_P9_1       P9_OUT.bits.P1
#define IO_P9_2       P9_OUT.bits.P2
#define IO_P9_3       P9_OUT.bits.P3
#define IO_P9_4       P9_OUT.bits.P4
#define IO_P9_5       P9_OUT.bits.P5
#define IO_P9_6       P9_OUT.bits.P6
#define IO_P9_7       P9_OUT.bits.P7
#define IO_P9_8       P9_OUT.bits.P8
#define IO_P9_9       P9_OUT.bits.P9
#define IO_P9_10       P9_OUT.bits.P10
#define IO_P9_11       P9_OUT.bits.P11
#define IO_P9_12       P9_OUT.bits.P12
#define IO_P9_13       P9_OUT.bits.P13
#define IO_P9_14       P9_OUT.bits.P14

#define IO_P10_0       P10_OUT.bits.P0
#define IO_P10_1       P10_OUT.bits.P1
#define IO_P10_2       P10_OUT.bits.P2
#define IO_P10_3       P10_OUT.bits.P3
#define IO_P10_4       P10_OUT.bits.P4
#define IO_P10_5       P10_OUT.bits.P5

#define IO_P11_0       P11_OUT.bits.P0
#define IO_P11_1       P11_OUT.bits.P1
#define IO_P11_2       P11_OUT.bits.P2
#define IO_P11_3       P11_OUT.bits.P3
#define IO_P11_4       P11_OUT.bits.P4
#define IO_P11_5       P11_OUT.bits.P5
#define IO_P11_6       P11_OUT.bits.P6
#define IO_P11_7       P11_OUT.bits.P7
#define IO_P11_8       P11_OUT.bits.P8
#define IO_P11_9       P11_OUT.bits.P9
#define IO_P11_10       P11_OUT.bits.P10
#define IO_P11_11       P11_OUT.bits.P11
#define IO_P11_12       P11_OUT.bits.P12
#define IO_P11_13       P11_OUT.bits.P13
#define IO_P11_14       P11_OUT.bits.P14
#define IO_P11_15       P11_OUT.bits.P15

#define IO_P12_0       P12_OUT.bits.P0
#define IO_P12_1       P12_OUT.bits.P1
#define IO_P12_2       P12_OUT.bits.P2
#define IO_P12_3       P12_OUT.bits.P3
#define IO_P12_4       P12_OUT.bits.P4
#define IO_P12_5       P12_OUT.bits.P5
#define IO_P12_6       P12_OUT.bits.P6
#define IO_P12_7       P12_OUT.bits.P7

#define IO_P13_0       P13_OUT.bits.P0
#define IO_P13_1       P13_OUT.bits.P1
#define IO_P13_2       P13_OUT.bits.P2
#define IO_P13_3       P13_OUT.bits.P3
#define IO_P13_4       P13_OUT.bits.P4
#define IO_P13_5       P13_OUT.bits.P5
#define IO_P13_6       P13_OUT.bits.P6
#define IO_P13_7       P13_OUT.bits.P7
#define IO_P13_8       P13_OUT.bits.P8
#define IO_P13_9       P13_OUT.bits.P9
#define IO_P13_10       P13_OUT.bits.P10
#define IO_P13_11       P13_OUT.bits.P11
#define IO_P13_12       P13_OUT.bits.P12
#define IO_P13_13       P13_OUT.bits.P13
#define IO_P13_14       P13_OUT.bits.P14
#define IO_P13_15       P13_OUT.bits.P15

#define IO_P14_0       P14_OUT.bits.P0
#define IO_P14_1       P14_OUT.bits.P1
#define IO_P14_2       P14_OUT.bits.P2
#define IO_P14_3       P14_OUT.bits.P3
#define IO_P14_4       P14_OUT.bits.P4
#define IO_P14_5       P14_OUT.bits.P5
#define IO_P14_6       P14_OUT.bits.P6
#define IO_P14_7       P14_OUT.bits.P7
#define IO_P14_8       P14_OUT.bits.P8
#define IO_P14_9       P14_OUT.bits.P9
#define IO_P14_10       P14_OUT.bits.P10
#define IO_P14_11       P14_OUT.bits.P11
#define IO_P14_12       P14_OUT.bits.P12
#define IO_P14_13       P14_OUT.bits.P13
#define IO_P14_14       P14_OUT.bits.P14
#define IO_P14_15       P14_OUT.bits.P15

#define IO_P15_0       P15_OUT.bits.P0
#define IO_P15_1       P15_OUT.bits.P1
#define IO_P15_2       P15_OUT.bits.P2
#define IO_P15_3       P15_OUT.bits.P3
#define IO_P15_4       P15_OUT.bits.P4
#define IO_P15_5       P15_OUT.bits.P5
#define IO_P15_6       P15_OUT.bits.P6
#define IO_P15_7       P15_OUT.bits.P7
#define IO_P15_8       P15_OUT.bits.P8
#define IO_P15_9       P15_OUT.bits.P9
#define IO_P15_10       P15_OUT.bits.P10
#define IO_P15_11       P15_OUT.bits.P11
#define IO_P15_12       P15_OUT.bits.P12
#define IO_P15_13       P15_OUT.bits.P13
#define IO_P15_14       P15_OUT.bits.P14
#define IO_P15_15       P15_OUT.bits.P15

#define IO_P16_0       P16_OUT.bits.P0
#define IO_P16_1       P16_OUT.bits.P1
#define IO_P16_2       P16_OUT.bits.P2
#define IO_P16_3       P16_OUT.bits.P3


//----------------------------------------------------------------------------
// Defines used by DAvE
//----------------------------------------------------------------------------

#define INIO_P0_0       P0_IN.bits.P0
#define INIO_P0_1       P0_IN.bits.P1
#define INIO_P0_2       P0_IN.bits.P2
#define INIO_P0_3       P0_IN.bits.P3
#define INIO_P0_4       P0_IN.bits.P4
#define INIO_P0_5       P0_IN.bits.P5
#define INIO_P0_6       P0_IN.bits.P6
#define INIO_P0_7       P0_IN.bits.P7
#define INIO_P0_8       P0_IN.bits.P8
#define INIO_P0_9       P0_IN.bits.P9
#define INIO_P0_10       P0_IN.bits.P10
#define INIO_P0_11       P0_IN.bits.P11
#define INIO_P0_12       P0_IN.bits.P12
#define INIO_P0_13       P0_IN.bits.P13
#define INIO_P0_14       P0_IN.bits.P14
#define INIO_P0_15       P0_IN.bits.P15

#define SETIO_P0_0       P0_OMR.reg = 0x00000001
#define SETIO_P0_1       P0_OMR.reg = 0x00000002
#define SETIO_P0_2       P0_OMR.reg = 0x00000004
#define SETIO_P0_3       P0_OMR.reg = 0x00000008
#define SETIO_P0_4       P0_OMR.reg = 0x00000010
#define SETIO_P0_5       P0_OMR.reg = 0x00000020
#define SETIO_P0_6       P0_OMR.reg = 0x00000040
#define SETIO_P0_7       P0_OMR.reg = 0x00000080
#define SETIO_P0_8       P0_OMR.reg = 0x00000100
#define SETIO_P0_9       P0_OMR.reg = 0x00000200
#define SETIO_P0_10       P0_OMR.reg = 0x00000400
#define SETIO_P0_11       P0_OMR.reg = 0x00000800
#define SETIO_P0_12       P0_OMR.reg = 0x00001000
#define SETIO_P0_13       P0_OMR.reg = 0x00002000
#define SETIO_P0_14       P0_OMR.reg = 0x00004000
#define SETIO_P0_15       P0_OMR.reg = 0x00008000

#define RESETIO_P0_0       P0_OMR.reg = 0x00010000
#define RESETIO_P0_1       P0_OMR.reg = 0x00020000
#define RESETIO_P0_2       P0_OMR.reg = 0x00040000
#define RESETIO_P0_3       P0_OMR.reg = 0x00080000
#define RESETIO_P0_4       P0_OMR.reg = 0x00100000
#define RESETIO_P0_5       P0_OMR.reg = 0x00200000
#define RESETIO_P0_6       P0_OMR.reg = 0x00400000
#define RESETIO_P0_7       P0_OMR.reg = 0x00800000
#define RESETIO_P0_8       P0_OMR.reg = 0x01000000
#define RESETIO_P0_9       P0_OMR.reg = 0x02000000
#define RESETIO_P0_10       P0_OMR.reg = 0x04000000
#define RESETIO_P0_11       P0_OMR.reg = 0x08000000
#define RESETIO_P0_12       P0_OMR.reg = 0x10000000
#define RESETIO_P0_13       P0_OMR.reg = 0x20000000
#define RESETIO_P0_14       P0_OMR.reg = 0x40000000
#define RESETIO_P0_15       P0_OMR.reg = 0x80000000

#define TOGGLEIO_P0_0       P0_OMR.reg = 0x00010001
#define TOGGLEIO_P0_1       P0_OMR.reg = 0x00020002
#define TOGGLEIO_P0_2       P0_OMR.reg = 0x00040004
#define TOGGLEIO_P0_3       P0_OMR.reg = 0x00080008
#define TOGGLEIO_P0_4       P0_OMR.reg = 0x00100010
#define TOGGLEIO_P0_5       P0_OMR.reg = 0x00200020
#define TOGGLEIO_P0_6       P0_OMR.reg = 0x00400040
#define TOGGLEIO_P0_7       P0_OMR.reg = 0x00800080
#define TOGGLEIO_P0_8       P0_OMR.reg = 0x01000100
#define TOGGLEIO_P0_9       P0_OMR.reg = 0x02000200
#define TOGGLEIO_P0_10       P0_OMR.reg = 0x04000400
#define TOGGLEIO_P0_11       P0_OMR.reg = 0x08000800
#define TOGGLEIO_P0_12       P0_OMR.reg = 0x10001000
#define TOGGLEIO_P0_13       P0_OMR.reg = 0x20002000
#define TOGGLEIO_P0_14       P0_OMR.reg = 0x40004000
#define TOGGLEIO_P0_15       P0_OMR.reg = 0x80008000

#define CONTROLIO_P0_0(Mode)       P0_IOCR0.reg = (P0_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P0_1(Mode)       P0_IOCR0.reg = (P0_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P0_2(Mode)       P0_IOCR0.reg = (P0_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P0_3(Mode)       P0_IOCR0.reg = (P0_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P0_4(Mode)       P0_IOCR4.reg = (P0_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P0_5(Mode)       P0_IOCR4.reg = (P0_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P0_6(Mode)       P0_IOCR4.reg = (P0_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P0_7(Mode)       P0_IOCR4.reg = (P0_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P0_8(Mode)       P0_IOCR8.reg = (P0_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P0_9(Mode)       P0_IOCR8.reg = (P0_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P0_10(Mode)       P0_IOCR8.reg = (P0_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P0_11(Mode)       P0_IOCR8.reg = (P0_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P0_12(Mode)       P0_IOCR12.reg = (P0_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P0_13(Mode)       P0_IOCR12.reg = (P0_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P0_14(Mode)       P0_IOCR12.reg = (P0_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P0_15(Mode)       P0_IOCR12.reg = (P0_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P1_0       P1_IN.bits.P0
#define INIO_P1_1       P1_IN.bits.P1
#define INIO_P1_2       P1_IN.bits.P2
#define INIO_P1_3       P1_IN.bits.P3
#define INIO_P1_4       P1_IN.bits.P4
#define INIO_P1_5       P1_IN.bits.P5
#define INIO_P1_6       P1_IN.bits.P6
#define INIO_P1_7       P1_IN.bits.P7
#define INIO_P1_8       P1_IN.bits.P8
#define INIO_P1_9       P1_IN.bits.P9
#define INIO_P1_10       P1_IN.bits.P10
#define INIO_P1_11       P1_IN.bits.P11
#define INIO_P1_12       P1_IN.bits.P12
#define INIO_P1_13       P1_IN.bits.P13
#define INIO_P1_14       P1_IN.bits.P14
#define INIO_P1_15       P1_IN.bits.P15

#define SETIO_P1_0       P1_OMR.reg = 0x00000001
#define SETIO_P1_1       P1_OMR.reg = 0x00000002
#define SETIO_P1_2       P1_OMR.reg = 0x00000004
#define SETIO_P1_3       P1_OMR.reg = 0x00000008
#define SETIO_P1_4       P1_OMR.reg = 0x00000010
#define SETIO_P1_5       P1_OMR.reg = 0x00000020
#define SETIO_P1_6       P1_OMR.reg = 0x00000040
#define SETIO_P1_7       P1_OMR.reg = 0x00000080
#define SETIO_P1_8       P1_OMR.reg = 0x00000100
#define SETIO_P1_9       P1_OMR.reg = 0x00000200
#define SETIO_P1_10       P1_OMR.reg = 0x00000400
#define SETIO_P1_11       P1_OMR.reg = 0x00000800
#define SETIO_P1_12       P1_OMR.reg = 0x00001000
#define SETIO_P1_13       P1_OMR.reg = 0x00002000
#define SETIO_P1_14       P1_OMR.reg = 0x00004000
#define SETIO_P1_15       P1_OMR.reg = 0x00008000

#define RESETIO_P1_0       P1_OMR.reg = 0x00010000
#define RESETIO_P1_1       P1_OMR.reg = 0x00020000
#define RESETIO_P1_2       P1_OMR.reg = 0x00040000
#define RESETIO_P1_3       P1_OMR.reg = 0x00080000
#define RESETIO_P1_4       P1_OMR.reg = 0x00100000
#define RESETIO_P1_5       P1_OMR.reg = 0x00200000
#define RESETIO_P1_6       P1_OMR.reg = 0x00400000
#define RESETIO_P1_7       P1_OMR.reg = 0x00800000
#define RESETIO_P1_8       P1_OMR.reg = 0x01000000
#define RESETIO_P1_9       P1_OMR.reg = 0x02000000
#define RESETIO_P1_10       P1_OMR.reg = 0x04000000
#define RESETIO_P1_11       P1_OMR.reg = 0x08000000
#define RESETIO_P1_12       P1_OMR.reg = 0x10000000
#define RESETIO_P1_13       P1_OMR.reg = 0x20000000
#define RESETIO_P1_14       P1_OMR.reg = 0x40000000
#define RESETIO_P1_15       P1_OMR.reg = 0x80000000

#define TOGGLEIO_P1_0       P1_OMR.reg = 0x00010001
#define TOGGLEIO_P1_1       P1_OMR.reg = 0x00020002
#define TOGGLEIO_P1_2       P1_OMR.reg = 0x00040004
#define TOGGLEIO_P1_3       P1_OMR.reg = 0x00080008
#define TOGGLEIO_P1_4       P1_OMR.reg = 0x00100010
#define TOGGLEIO_P1_5       P1_OMR.reg = 0x00200020
#define TOGGLEIO_P1_6       P1_OMR.reg = 0x00400040
#define TOGGLEIO_P1_7       P1_OMR.reg = 0x00800080
#define TOGGLEIO_P1_8       P1_OMR.reg = 0x01000100
#define TOGGLEIO_P1_9       P1_OMR.reg = 0x02000200
#define TOGGLEIO_P1_10       P1_OMR.reg = 0x04000400
#define TOGGLEIO_P1_11       P1_OMR.reg = 0x08000800
#define TOGGLEIO_P1_12       P1_OMR.reg = 0x10001000
#define TOGGLEIO_P1_13       P1_OMR.reg = 0x20002000
#define TOGGLEIO_P1_14       P1_OMR.reg = 0x40004000
#define TOGGLEIO_P1_15       P1_OMR.reg = 0x80008000

#define CONTROLIO_P1_0(Mode)       P1_IOCR0.reg = (P1_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P1_1(Mode)       P1_IOCR0.reg = (P1_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P1_2(Mode)       P1_IOCR0.reg = (P1_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P1_3(Mode)       P1_IOCR0.reg = (P1_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P1_4(Mode)       P1_IOCR4.reg = (P1_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P1_5(Mode)       P1_IOCR4.reg = (P1_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P1_6(Mode)       P1_IOCR4.reg = (P1_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P1_7(Mode)       P1_IOCR4.reg = (P1_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P1_8(Mode)       P1_IOCR8.reg = (P1_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P1_9(Mode)       P1_IOCR8.reg = (P1_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P1_10(Mode)       P1_IOCR8.reg = (P1_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P1_11(Mode)       P1_IOCR8.reg = (P1_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P1_12(Mode)       P1_IOCR12.reg = (P1_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P1_13(Mode)       P1_IOCR12.reg = (P1_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P1_14(Mode)       P1_IOCR12.reg = (P1_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P1_15(Mode)       P1_IOCR12.reg = (P1_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P2_2       P2_IN.bits.P2
#define INIO_P2_3       P2_IN.bits.P3
#define INIO_P2_4       P2_IN.bits.P4
#define INIO_P2_5       P2_IN.bits.P5
#define INIO_P2_6       P2_IN.bits.P6
#define INIO_P2_7       P2_IN.bits.P7
#define INIO_P2_8       P2_IN.bits.P8
#define INIO_P2_9       P2_IN.bits.P9
#define INIO_P2_10       P2_IN.bits.P10
#define INIO_P2_11       P2_IN.bits.P11
#define INIO_P2_12       P2_IN.bits.P12
#define INIO_P2_13       P2_IN.bits.P13
#define INIO_P2_14       P2_IN.bits.P14
#define INIO_P2_15       P2_IN.bits.P15

#define SETIO_P2_2       P2_OMR.reg = 0x00000004
#define SETIO_P2_3       P2_OMR.reg = 0x00000008
#define SETIO_P2_4       P2_OMR.reg = 0x00000010
#define SETIO_P2_5       P2_OMR.reg = 0x00000020
#define SETIO_P2_6       P2_OMR.reg = 0x00000040
#define SETIO_P2_7       P2_OMR.reg = 0x00000080
#define SETIO_P2_8       P2_OMR.reg = 0x00000100
#define SETIO_P2_9       P2_OMR.reg = 0x00000200
#define SETIO_P2_10       P2_OMR.reg = 0x00000400
#define SETIO_P2_11       P2_OMR.reg = 0x00000800
#define SETIO_P2_12       P2_OMR.reg = 0x00001000
#define SETIO_P2_13       P2_OMR.reg = 0x00002000
#define SETIO_P2_14       P2_OMR.reg = 0x00004000
#define SETIO_P2_15       P2_OMR.reg = 0x00008000

#define RESETIO_P2_2       P2_OMR.reg = 0x00040000
#define RESETIO_P2_3       P2_OMR.reg = 0x00080000
#define RESETIO_P2_4       P2_OMR.reg = 0x00100000
#define RESETIO_P2_5       P2_OMR.reg = 0x00200000
#define RESETIO_P2_6       P2_OMR.reg = 0x00400000
#define RESETIO_P2_7       P2_OMR.reg = 0x00800000
#define RESETIO_P2_8       P2_OMR.reg = 0x01000000
#define RESETIO_P2_9       P2_OMR.reg = 0x02000000
#define RESETIO_P2_10       P2_OMR.reg = 0x04000000
#define RESETIO_P2_11       P2_OMR.reg = 0x08000000
#define RESETIO_P2_12       P2_OMR.reg = 0x10000000
#define RESETIO_P2_13       P2_OMR.reg = 0x20000000
#define RESETIO_P2_14       P2_OMR.reg = 0x40000000
#define RESETIO_P2_15       P2_OMR.reg = 0x80000000

#define TOGGLEIO_P2_2       P2_OMR.reg = 0x00040004
#define TOGGLEIO_P2_3       P2_OMR.reg = 0x00080008
#define TOGGLEIO_P2_4       P2_OMR.reg = 0x00100010
#define TOGGLEIO_P2_5       P2_OMR.reg = 0x00200020
#define TOGGLEIO_P2_6       P2_OMR.reg = 0x00400040
#define TOGGLEIO_P2_7       P2_OMR.reg = 0x00800080
#define TOGGLEIO_P2_8       P2_OMR.reg = 0x01000100
#define TOGGLEIO_P2_9       P2_OMR.reg = 0x02000200
#define TOGGLEIO_P2_10       P2_OMR.reg = 0x04000400
#define TOGGLEIO_P2_11       P2_OMR.reg = 0x08000800
#define TOGGLEIO_P2_12       P2_OMR.reg = 0x10001000
#define TOGGLEIO_P2_13       P2_OMR.reg = 0x20002000
#define TOGGLEIO_P2_14       P2_OMR.reg = 0x40004000
#define TOGGLEIO_P2_15       P2_OMR.reg = 0x80008000

#define CONTROLIO_P2_2(Mode)       P2_IOCR0.reg = (P2_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P2_3(Mode)       P2_IOCR0.reg = (P2_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P2_4(Mode)       P2_IOCR4.reg = (P2_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P2_5(Mode)       P2_IOCR4.reg = (P2_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P2_6(Mode)       P2_IOCR4.reg = (P2_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P2_7(Mode)       P2_IOCR4.reg = (P2_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P2_8(Mode)       P2_IOCR8.reg = (P2_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P2_9(Mode)       P2_IOCR8.reg = (P2_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P2_10(Mode)       P2_IOCR8.reg = (P2_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P2_11(Mode)       P2_IOCR8.reg = (P2_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P2_12(Mode)       P2_IOCR12.reg = (P2_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P2_13(Mode)       P2_IOCR12.reg = (P2_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P2_14(Mode)       P2_IOCR12.reg = (P2_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P2_15(Mode)       P2_IOCR12.reg = (P2_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P3_0       P3_IN.bits.P0
#define INIO_P3_1       P3_IN.bits.P1
#define INIO_P3_2       P3_IN.bits.P2
#define INIO_P3_3       P3_IN.bits.P3
#define INIO_P3_4       P3_IN.bits.P4
#define INIO_P3_5       P3_IN.bits.P5
#define INIO_P3_6       P3_IN.bits.P6
#define INIO_P3_7       P3_IN.bits.P7
#define INIO_P3_8       P3_IN.bits.P8
#define INIO_P3_9       P3_IN.bits.P9
#define INIO_P3_10       P3_IN.bits.P10
#define INIO_P3_11       P3_IN.bits.P11
#define INIO_P3_12       P3_IN.bits.P12
#define INIO_P3_13       P3_IN.bits.P13
#define INIO_P3_14       P3_IN.bits.P14
#define INIO_P3_15       P3_IN.bits.P15

#define SETIO_P3_0       P3_OMR.reg = 0x00000001
#define SETIO_P3_1       P3_OMR.reg = 0x00000002
#define SETIO_P3_2       P3_OMR.reg = 0x00000004
#define SETIO_P3_3       P3_OMR.reg = 0x00000008
#define SETIO_P3_4       P3_OMR.reg = 0x00000010
#define SETIO_P3_5       P3_OMR.reg = 0x00000020
#define SETIO_P3_6       P3_OMR.reg = 0x00000040
#define SETIO_P3_7       P3_OMR.reg = 0x00000080
#define SETIO_P3_8       P3_OMR.reg = 0x00000100
#define SETIO_P3_9       P3_OMR.reg = 0x00000200
#define SETIO_P3_10       P3_OMR.reg = 0x00000400
#define SETIO_P3_11       P3_OMR.reg = 0x00000800
#define SETIO_P3_12       P3_OMR.reg = 0x00001000
#define SETIO_P3_13       P3_OMR.reg = 0x00002000
#define SETIO_P3_14       P3_OMR.reg = 0x00004000
#define SETIO_P3_15       P3_OMR.reg = 0x00008000

#define RESETIO_P3_0       P3_OMR.reg = 0x00010000
#define RESETIO_P3_1       P3_OMR.reg = 0x00020000
#define RESETIO_P3_2       P3_OMR.reg = 0x00040000
#define RESETIO_P3_3       P3_OMR.reg = 0x00080000
#define RESETIO_P3_4       P3_OMR.reg = 0x00100000
#define RESETIO_P3_5       P3_OMR.reg = 0x00200000
#define RESETIO_P3_6       P3_OMR.reg = 0x00400000
#define RESETIO_P3_7       P3_OMR.reg = 0x00800000
#define RESETIO_P3_8       P3_OMR.reg = 0x01000000
#define RESETIO_P3_9       P3_OMR.reg = 0x02000000
#define RESETIO_P3_10       P3_OMR.reg = 0x04000000
#define RESETIO_P3_11       P3_OMR.reg = 0x08000000
#define RESETIO_P3_12       P3_OMR.reg = 0x10000000
#define RESETIO_P3_13       P3_OMR.reg = 0x20000000
#define RESETIO_P3_14       P3_OMR.reg = 0x40000000
#define RESETIO_P3_15       P3_OMR.reg = 0x80000000

#define TOGGLEIO_P3_0       P3_OMR.reg = 0x00010001
#define TOGGLEIO_P3_1       P3_OMR.reg = 0x00020002
#define TOGGLEIO_P3_2       P3_OMR.reg = 0x00040004
#define TOGGLEIO_P3_3       P3_OMR.reg = 0x00080008
#define TOGGLEIO_P3_4       P3_OMR.reg = 0x00100010
#define TOGGLEIO_P3_5       P3_OMR.reg = 0x00200020
#define TOGGLEIO_P3_6       P3_OMR.reg = 0x00400040
#define TOGGLEIO_P3_7       P3_OMR.reg = 0x00800080
#define TOGGLEIO_P3_8       P3_OMR.reg = 0x01000100
#define TOGGLEIO_P3_9       P3_OMR.reg = 0x02000200
#define TOGGLEIO_P3_10       P3_OMR.reg = 0x04000400
#define TOGGLEIO_P3_11       P3_OMR.reg = 0x08000800
#define TOGGLEIO_P3_12       P3_OMR.reg = 0x10001000
#define TOGGLEIO_P3_13       P3_OMR.reg = 0x20002000
#define TOGGLEIO_P3_14       P3_OMR.reg = 0x40004000
#define TOGGLEIO_P3_15       P3_OMR.reg = 0x80008000

#define CONTROLIO_P3_0(Mode)       P3_IOCR0.reg = (P3_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P3_1(Mode)       P3_IOCR0.reg = (P3_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P3_2(Mode)       P3_IOCR0.reg = (P3_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P3_3(Mode)       P3_IOCR0.reg = (P3_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P3_4(Mode)       P3_IOCR4.reg = (P3_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P3_5(Mode)       P3_IOCR4.reg = (P3_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P3_6(Mode)       P3_IOCR4.reg = (P3_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P3_7(Mode)       P3_IOCR4.reg = (P3_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P3_8(Mode)       P3_IOCR8.reg = (P3_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P3_9(Mode)       P3_IOCR8.reg = (P3_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P3_10(Mode)       P3_IOCR8.reg = (P3_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P3_11(Mode)       P3_IOCR8.reg = (P3_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P3_12(Mode)       P3_IOCR12.reg = (P3_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P3_13(Mode)       P3_IOCR12.reg = (P3_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P3_14(Mode)       P3_IOCR12.reg = (P3_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P3_15(Mode)       P3_IOCR12.reg = (P3_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P4_0       P4_IN.bits.P0
#define INIO_P4_1       P4_IN.bits.P1
#define INIO_P4_2       P4_IN.bits.P2
#define INIO_P4_3       P4_IN.bits.P3
#define INIO_P4_4       P4_IN.bits.P4
#define INIO_P4_5       P4_IN.bits.P5
#define INIO_P4_6       P4_IN.bits.P6
#define INIO_P4_7       P4_IN.bits.P7
#define INIO_P4_8       P4_IN.bits.P8
#define INIO_P4_9       P4_IN.bits.P9
#define INIO_P4_10       P4_IN.bits.P10
#define INIO_P4_11       P4_IN.bits.P11
#define INIO_P4_12       P4_IN.bits.P12
#define INIO_P4_13       P4_IN.bits.P13
#define INIO_P4_14       P4_IN.bits.P14
#define INIO_P4_15       P4_IN.bits.P15

#define SETIO_P4_0       P4_OMR.reg = 0x00000001
#define SETIO_P4_1       P4_OMR.reg = 0x00000002
#define SETIO_P4_2       P4_OMR.reg = 0x00000004
#define SETIO_P4_3       P4_OMR.reg = 0x00000008
#define SETIO_P4_4       P4_OMR.reg = 0x00000010
#define SETIO_P4_5       P4_OMR.reg = 0x00000020
#define SETIO_P4_6       P4_OMR.reg = 0x00000040
#define SETIO_P4_7       P4_OMR.reg = 0x00000080
#define SETIO_P4_8       P4_OMR.reg = 0x00000100
#define SETIO_P4_9       P4_OMR.reg = 0x00000200
#define SETIO_P4_10       P4_OMR.reg = 0x00000400
#define SETIO_P4_11       P4_OMR.reg = 0x00000800
#define SETIO_P4_12       P4_OMR.reg = 0x00001000
#define SETIO_P4_13       P4_OMR.reg = 0x00002000
#define SETIO_P4_14       P4_OMR.reg = 0x00004000
#define SETIO_P4_15       P4_OMR.reg = 0x00008000

#define RESETIO_P4_0       P4_OMR.reg = 0x00010000
#define RESETIO_P4_1       P4_OMR.reg = 0x00020000
#define RESETIO_P4_2       P4_OMR.reg = 0x00040000
#define RESETIO_P4_3       P4_OMR.reg = 0x00080000
#define RESETIO_P4_4       P4_OMR.reg = 0x00100000
#define RESETIO_P4_5       P4_OMR.reg = 0x00200000
#define RESETIO_P4_6       P4_OMR.reg = 0x00400000
#define RESETIO_P4_7       P4_OMR.reg = 0x00800000
#define RESETIO_P4_8       P4_OMR.reg = 0x01000000
#define RESETIO_P4_9       P4_OMR.reg = 0x02000000
#define RESETIO_P4_10       P4_OMR.reg = 0x04000000
#define RESETIO_P4_11       P4_OMR.reg = 0x08000000
#define RESETIO_P4_12       P4_OMR.reg = 0x10000000
#define RESETIO_P4_13       P4_OMR.reg = 0x20000000
#define RESETIO_P4_14       P4_OMR.reg = 0x40000000
#define RESETIO_P4_15       P4_OMR.reg = 0x80000000

#define TOGGLEIO_P4_0       P4_OMR.reg = 0x00010001
#define TOGGLEIO_P4_1       P4_OMR.reg = 0x00020002
#define TOGGLEIO_P4_2       P4_OMR.reg = 0x00040004
#define TOGGLEIO_P4_3       P4_OMR.reg = 0x00080008
#define TOGGLEIO_P4_4       P4_OMR.reg = 0x00100010
#define TOGGLEIO_P4_5       P4_OMR.reg = 0x00200020
#define TOGGLEIO_P4_6       P4_OMR.reg = 0x00400040
#define TOGGLEIO_P4_7       P4_OMR.reg = 0x00800080
#define TOGGLEIO_P4_8       P4_OMR.reg = 0x01000100
#define TOGGLEIO_P4_9       P4_OMR.reg = 0x02000200
#define TOGGLEIO_P4_10       P4_OMR.reg = 0x04000400
#define TOGGLEIO_P4_11       P4_OMR.reg = 0x08000800
#define TOGGLEIO_P4_12       P4_OMR.reg = 0x10001000
#define TOGGLEIO_P4_13       P4_OMR.reg = 0x20002000
#define TOGGLEIO_P4_14       P4_OMR.reg = 0x40004000
#define TOGGLEIO_P4_15       P4_OMR.reg = 0x80008000

#define CONTROLIO_P4_0(Mode)       P4_IOCR0.reg = (P4_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P4_1(Mode)       P4_IOCR0.reg = (P4_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P4_2(Mode)       P4_IOCR0.reg = (P4_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P4_3(Mode)       P4_IOCR0.reg = (P4_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P4_4(Mode)       P4_IOCR4.reg = (P4_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P4_5(Mode)       P4_IOCR4.reg = (P4_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P4_6(Mode)       P4_IOCR4.reg = (P4_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P4_7(Mode)       P4_IOCR4.reg = (P4_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P4_8(Mode)       P4_IOCR8.reg = (P4_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P4_9(Mode)       P4_IOCR8.reg = (P4_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P4_10(Mode)       P4_IOCR8.reg = (P4_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P4_11(Mode)       P4_IOCR8.reg = (P4_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P4_12(Mode)       P4_IOCR12.reg = (P4_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P4_13(Mode)       P4_IOCR12.reg = (P4_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P4_14(Mode)       P4_IOCR12.reg = (P4_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P4_15(Mode)       P4_IOCR12.reg = (P4_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P5_0       P5_IN.bits.P0
#define INIO_P5_1       P5_IN.bits.P1
#define INIO_P5_2       P5_IN.bits.P2
#define INIO_P5_3       P5_IN.bits.P3
#define INIO_P5_4       P5_IN.bits.P4
#define INIO_P5_5       P5_IN.bits.P5
#define INIO_P5_6       P5_IN.bits.P6
#define INIO_P5_7       P5_IN.bits.P7
#define INIO_P5_8       P5_IN.bits.P8
#define INIO_P5_9       P5_IN.bits.P9
#define INIO_P5_10       P5_IN.bits.P10
#define INIO_P5_11       P5_IN.bits.P11
#define INIO_P5_12       P5_IN.bits.P12
#define INIO_P5_13       P5_IN.bits.P13
#define INIO_P5_14       P5_IN.bits.P14
#define INIO_P5_15       P5_IN.bits.P15

#define SETIO_P5_0       P5_OMR.reg = 0x00000001
#define SETIO_P5_1       P5_OMR.reg = 0x00000002
#define SETIO_P5_2       P5_OMR.reg = 0x00000004
#define SETIO_P5_3       P5_OMR.reg = 0x00000008
#define SETIO_P5_4       P5_OMR.reg = 0x00000010
#define SETIO_P5_5       P5_OMR.reg = 0x00000020
#define SETIO_P5_6       P5_OMR.reg = 0x00000040
#define SETIO_P5_7       P5_OMR.reg = 0x00000080
#define SETIO_P5_8       P5_OMR.reg = 0x00000100
#define SETIO_P5_9       P5_OMR.reg = 0x00000200
#define SETIO_P5_10       P5_OMR.reg = 0x00000400
#define SETIO_P5_11       P5_OMR.reg = 0x00000800
#define SETIO_P5_12       P5_OMR.reg = 0x00001000
#define SETIO_P5_13       P5_OMR.reg = 0x00002000
#define SETIO_P5_14       P5_OMR.reg = 0x00004000
#define SETIO_P5_15       P5_OMR.reg = 0x00008000

#define RESETIO_P5_0       P5_OMR.reg = 0x00010000
#define RESETIO_P5_1       P5_OMR.reg = 0x00020000
#define RESETIO_P5_2       P5_OMR.reg = 0x00040000
#define RESETIO_P5_3       P5_OMR.reg = 0x00080000
#define RESETIO_P5_4       P5_OMR.reg = 0x00100000
#define RESETIO_P5_5       P5_OMR.reg = 0x00200000
#define RESETIO_P5_6       P5_OMR.reg = 0x00400000
#define RESETIO_P5_7       P5_OMR.reg = 0x00800000
#define RESETIO_P5_8       P5_OMR.reg = 0x01000000
#define RESETIO_P5_9       P5_OMR.reg = 0x02000000
#define RESETIO_P5_10       P5_OMR.reg = 0x04000000
#define RESETIO_P5_11       P5_OMR.reg = 0x08000000
#define RESETIO_P5_12       P5_OMR.reg = 0x10000000
#define RESETIO_P5_13       P5_OMR.reg = 0x20000000
#define RESETIO_P5_14       P5_OMR.reg = 0x40000000
#define RESETIO_P5_15       P5_OMR.reg = 0x80000000

#define TOGGLEIO_P5_0       P5_OMR.reg = 0x00010001
#define TOGGLEIO_P5_1       P5_OMR.reg = 0x00020002
#define TOGGLEIO_P5_2       P5_OMR.reg = 0x00040004
#define TOGGLEIO_P5_3       P5_OMR.reg = 0x00080008
#define TOGGLEIO_P5_4       P5_OMR.reg = 0x00100010
#define TOGGLEIO_P5_5       P5_OMR.reg = 0x00200020
#define TOGGLEIO_P5_6       P5_OMR.reg = 0x00400040
#define TOGGLEIO_P5_7       P5_OMR.reg = 0x00800080
#define TOGGLEIO_P5_8       P5_OMR.reg = 0x01000100
#define TOGGLEIO_P5_9       P5_OMR.reg = 0x02000200
#define TOGGLEIO_P5_10       P5_OMR.reg = 0x04000400
#define TOGGLEIO_P5_11       P5_OMR.reg = 0x08000800
#define TOGGLEIO_P5_12       P5_OMR.reg = 0x10001000
#define TOGGLEIO_P5_13       P5_OMR.reg = 0x20002000
#define TOGGLEIO_P5_14       P5_OMR.reg = 0x40004000
#define TOGGLEIO_P5_15       P5_OMR.reg = 0x80008000

#define CONTROLIO_P5_0(Mode)       P5_IOCR0.reg = (P5_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P5_1(Mode)       P5_IOCR0.reg = (P5_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P5_2(Mode)       P5_IOCR0.reg = (P5_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P5_3(Mode)       P5_IOCR0.reg = (P5_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P5_4(Mode)       P5_IOCR4.reg = (P5_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P5_5(Mode)       P5_IOCR4.reg = (P5_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P5_6(Mode)       P5_IOCR4.reg = (P5_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P5_7(Mode)       P5_IOCR4.reg = (P5_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P5_8(Mode)       P5_IOCR8.reg = (P5_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P5_9(Mode)       P5_IOCR8.reg = (P5_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P5_10(Mode)       P5_IOCR8.reg = (P5_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P5_11(Mode)       P5_IOCR8.reg = (P5_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P5_12(Mode)       P5_IOCR12.reg = (P5_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P5_13(Mode)       P5_IOCR12.reg = (P5_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P5_14(Mode)       P5_IOCR12.reg = (P5_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P5_15(Mode)       P5_IOCR12.reg = (P5_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P6_4       P6_IN.bits.P4
#define INIO_P6_5       P6_IN.bits.P5
#define INIO_P6_6       P6_IN.bits.P6
#define INIO_P6_7       P6_IN.bits.P7
#define INIO_P6_8       P6_IN.bits.P8
#define INIO_P6_9       P6_IN.bits.P9
#define INIO_P6_10       P6_IN.bits.P10
#define INIO_P6_11       P6_IN.bits.P11
#define INIO_P6_12       P6_IN.bits.P12
#define INIO_P6_13       P6_IN.bits.P13
#define INIO_P6_14       P6_IN.bits.P14
#define INIO_P6_15       P6_IN.bits.P15

#define SETIO_P6_4       P6_OMR.reg = 0x00000010
#define SETIO_P6_5       P6_OMR.reg = 0x00000020
#define SETIO_P6_6       P6_OMR.reg = 0x00000040
#define SETIO_P6_7       P6_OMR.reg = 0x00000080
#define SETIO_P6_8       P6_OMR.reg = 0x00000100
#define SETIO_P6_9       P6_OMR.reg = 0x00000200
#define SETIO_P6_10       P6_OMR.reg = 0x00000400
#define SETIO_P6_11       P6_OMR.reg = 0x00000800
#define SETIO_P6_12       P6_OMR.reg = 0x00001000
#define SETIO_P6_13       P6_OMR.reg = 0x00002000
#define SETIO_P6_14       P6_OMR.reg = 0x00004000
#define SETIO_P6_15       P6_OMR.reg = 0x00008000

#define RESETIO_P6_4       P6_OMR.reg = 0x00100000
#define RESETIO_P6_5       P6_OMR.reg = 0x00200000
#define RESETIO_P6_6       P6_OMR.reg = 0x00400000
#define RESETIO_P6_7       P6_OMR.reg = 0x00800000
#define RESETIO_P6_8       P6_OMR.reg = 0x01000000
#define RESETIO_P6_9       P6_OMR.reg = 0x02000000
#define RESETIO_P6_10       P6_OMR.reg = 0x04000000
#define RESETIO_P6_11       P6_OMR.reg = 0x08000000
#define RESETIO_P6_12       P6_OMR.reg = 0x10000000
#define RESETIO_P6_13       P6_OMR.reg = 0x20000000
#define RESETIO_P6_14       P6_OMR.reg = 0x40000000
#define RESETIO_P6_15       P6_OMR.reg = 0x80000000

#define TOGGLEIO_P6_4       P6_OMR.reg = 0x00100010
#define TOGGLEIO_P6_5       P6_OMR.reg = 0x00200020
#define TOGGLEIO_P6_6       P6_OMR.reg = 0x00400040
#define TOGGLEIO_P6_7       P6_OMR.reg = 0x00800080
#define TOGGLEIO_P6_8       P6_OMR.reg = 0x01000100
#define TOGGLEIO_P6_9       P6_OMR.reg = 0x02000200
#define TOGGLEIO_P6_10       P6_OMR.reg = 0x04000400
#define TOGGLEIO_P6_11       P6_OMR.reg = 0x08000800
#define TOGGLEIO_P6_12       P6_OMR.reg = 0x10001000
#define TOGGLEIO_P6_13       P6_OMR.reg = 0x20002000
#define TOGGLEIO_P6_14       P6_OMR.reg = 0x40004000
#define TOGGLEIO_P6_15       P6_OMR.reg = 0x80008000

#define CONTROLIO_P6_4(Mode)       P6_IOCR4.reg = (P6_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P6_5(Mode)       P6_IOCR4.reg = (P6_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P6_6(Mode)       P6_IOCR4.reg = (P6_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P6_7(Mode)       P6_IOCR4.reg = (P6_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P6_8(Mode)       P6_IOCR8.reg = (P6_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P6_9(Mode)       P6_IOCR8.reg = (P6_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P6_10(Mode)       P6_IOCR8.reg = (P6_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P6_11(Mode)       P6_IOCR8.reg = (P6_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P6_12(Mode)       P6_IOCR12.reg = (P6_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P6_13(Mode)       P6_IOCR12.reg = (P6_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P6_14(Mode)       P6_IOCR12.reg = (P6_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P6_15(Mode)       P6_IOCR12.reg = (P6_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P7_0       P7_IN.bits.P0
#define INIO_P7_1       P7_IN.bits.P1
#define INIO_P7_2       P7_IN.bits.P2
#define INIO_P7_3       P7_IN.bits.P3
#define INIO_P7_4       P7_IN.bits.P4
#define INIO_P7_5       P7_IN.bits.P5
#define INIO_P7_6       P7_IN.bits.P6
#define INIO_P7_7       P7_IN.bits.P7

#define SETIO_P7_0       P7_OMR.reg = 0x00000001
#define SETIO_P7_1       P7_OMR.reg = 0x00000002
#define SETIO_P7_2       P7_OMR.reg = 0x00000004
#define SETIO_P7_3       P7_OMR.reg = 0x00000008
#define SETIO_P7_4       P7_OMR.reg = 0x00000010
#define SETIO_P7_5       P7_OMR.reg = 0x00000020
#define SETIO_P7_6       P7_OMR.reg = 0x00000040
#define SETIO_P7_7       P7_OMR.reg = 0x00000080

#define RESETIO_P7_0       P7_OMR.reg = 0x00010000
#define RESETIO_P7_1       P7_OMR.reg = 0x00020000
#define RESETIO_P7_2       P7_OMR.reg = 0x00040000
#define RESETIO_P7_3       P7_OMR.reg = 0x00080000
#define RESETIO_P7_4       P7_OMR.reg = 0x00100000
#define RESETIO_P7_5       P7_OMR.reg = 0x00200000
#define RESETIO_P7_6       P7_OMR.reg = 0x00400000
#define RESETIO_P7_7       P7_OMR.reg = 0x00800000

#define TOGGLEIO_P7_0       P7_OMR.reg = 0x00010001
#define TOGGLEIO_P7_1       P7_OMR.reg = 0x00020002
#define TOGGLEIO_P7_2       P7_OMR.reg = 0x00040004
#define TOGGLEIO_P7_3       P7_OMR.reg = 0x00080008
#define TOGGLEIO_P7_4       P7_OMR.reg = 0x00100010
#define TOGGLEIO_P7_5       P7_OMR.reg = 0x00200020
#define TOGGLEIO_P7_6       P7_OMR.reg = 0x00400040
#define TOGGLEIO_P7_7       P7_OMR.reg = 0x00800080

#define CONTROLIO_P7_0(Mode)       P7_IOCR0.reg = (P7_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P7_1(Mode)       P7_IOCR0.reg = (P7_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P7_2(Mode)       P7_IOCR0.reg = (P7_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P7_3(Mode)       P7_IOCR0.reg = (P7_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P7_4(Mode)       P7_IOCR4.reg = (P7_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P7_5(Mode)       P7_IOCR4.reg = (P7_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P7_6(Mode)       P7_IOCR4.reg = (P7_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P7_7(Mode)       P7_IOCR4.reg = (P7_IOCR4.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P8_0       P8_IN.bits.P0
#define INIO_P8_1       P8_IN.bits.P1
#define INIO_P8_2       P8_IN.bits.P2
#define INIO_P8_3       P8_IN.bits.P3
#define INIO_P8_4       P8_IN.bits.P4
#define INIO_P8_5       P8_IN.bits.P5
#define INIO_P8_6       P8_IN.bits.P6
#define INIO_P8_7       P8_IN.bits.P7

#define SETIO_P8_0       P8_OMR.reg = 0x00000001
#define SETIO_P8_1       P8_OMR.reg = 0x00000002
#define SETIO_P8_2       P8_OMR.reg = 0x00000004
#define SETIO_P8_3       P8_OMR.reg = 0x00000008
#define SETIO_P8_4       P8_OMR.reg = 0x00000010
#define SETIO_P8_5       P8_OMR.reg = 0x00000020
#define SETIO_P8_6       P8_OMR.reg = 0x00000040
#define SETIO_P8_7       P8_OMR.reg = 0x00000080

#define RESETIO_P8_0       P8_OMR.reg = 0x00010000
#define RESETIO_P8_1       P8_OMR.reg = 0x00020000
#define RESETIO_P8_2       P8_OMR.reg = 0x00040000
#define RESETIO_P8_3       P8_OMR.reg = 0x00080000
#define RESETIO_P8_4       P8_OMR.reg = 0x00100000
#define RESETIO_P8_5       P8_OMR.reg = 0x00200000
#define RESETIO_P8_6       P8_OMR.reg = 0x00400000
#define RESETIO_P8_7       P8_OMR.reg = 0x00800000

#define TOGGLEIO_P8_0       P8_OMR.reg = 0x00010001
#define TOGGLEIO_P8_1       P8_OMR.reg = 0x00020002
#define TOGGLEIO_P8_2       P8_OMR.reg = 0x00040004
#define TOGGLEIO_P8_3       P8_OMR.reg = 0x00080008
#define TOGGLEIO_P8_4       P8_OMR.reg = 0x00100010
#define TOGGLEIO_P8_5       P8_OMR.reg = 0x00200020
#define TOGGLEIO_P8_6       P8_OMR.reg = 0x00400040
#define TOGGLEIO_P8_7       P8_OMR.reg = 0x00800080

#define CONTROLIO_P8_0(Mode)       P8_IOCR0.reg = (P8_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P8_1(Mode)       P8_IOCR0.reg = (P8_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P8_2(Mode)       P8_IOCR0.reg = (P8_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P8_3(Mode)       P8_IOCR0.reg = (P8_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P8_4(Mode)       P8_IOCR4.reg = (P8_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P8_5(Mode)       P8_IOCR4.reg = (P8_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P8_6(Mode)       P8_IOCR4.reg = (P8_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P8_7(Mode)       P8_IOCR4.reg = (P8_IOCR4.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P9_0       P9_IN.bits.P0
#define INIO_P9_1       P9_IN.bits.P1
#define INIO_P9_2       P9_IN.bits.P2
#define INIO_P9_3       P9_IN.bits.P3
#define INIO_P9_4       P9_IN.bits.P4
#define INIO_P9_5       P9_IN.bits.P5
#define INIO_P9_6       P9_IN.bits.P6
#define INIO_P9_7       P9_IN.bits.P7
#define INIO_P9_8       P9_IN.bits.P8
#define INIO_P9_9       P9_IN.bits.P9
#define INIO_P9_10       P9_IN.bits.P10
#define INIO_P9_11       P9_IN.bits.P11
#define INIO_P9_12       P9_IN.bits.P12
#define INIO_P9_13       P9_IN.bits.P13
#define INIO_P9_14       P9_IN.bits.P14

#define SETIO_P9_0       P9_OMR.reg = 0x00000001
#define SETIO_P9_1       P9_OMR.reg = 0x00000002
#define SETIO_P9_2       P9_OMR.reg = 0x00000004
#define SETIO_P9_3       P9_OMR.reg = 0x00000008
#define SETIO_P9_4       P9_OMR.reg = 0x00000010
#define SETIO_P9_5       P9_OMR.reg = 0x00000020
#define SETIO_P9_6       P9_OMR.reg = 0x00000040
#define SETIO_P9_7       P9_OMR.reg = 0x00000080
#define SETIO_P9_8       P9_OMR.reg = 0x00000100
#define SETIO_P9_9       P9_OMR.reg = 0x00000200
#define SETIO_P9_10       P9_OMR.reg = 0x00000400
#define SETIO_P9_11       P9_OMR.reg = 0x00000800
#define SETIO_P9_12       P9_OMR.reg = 0x00001000
#define SETIO_P9_13       P9_OMR.reg = 0x00002000
#define SETIO_P9_14       P9_OMR.reg = 0x00004000

#define RESETIO_P9_0       P9_OMR.reg = 0x00010000
#define RESETIO_P9_1       P9_OMR.reg = 0x00020000
#define RESETIO_P9_2       P9_OMR.reg = 0x00040000
#define RESETIO_P9_3       P9_OMR.reg = 0x00080000
#define RESETIO_P9_4       P9_OMR.reg = 0x00100000
#define RESETIO_P9_5       P9_OMR.reg = 0x00200000
#define RESETIO_P9_6       P9_OMR.reg = 0x00400000
#define RESETIO_P9_7       P9_OMR.reg = 0x00800000
#define RESETIO_P9_8       P9_OMR.reg = 0x01000000
#define RESETIO_P9_9       P9_OMR.reg = 0x02000000
#define RESETIO_P9_10       P9_OMR.reg = 0x04000000
#define RESETIO_P9_11       P9_OMR.reg = 0x08000000
#define RESETIO_P9_12       P9_OMR.reg = 0x10000000
#define RESETIO_P9_13       P9_OMR.reg = 0x20000000
#define RESETIO_P9_14       P9_OMR.reg = 0x40000000

#define TOGGLEIO_P9_0       P9_OMR.reg = 0x00010001
#define TOGGLEIO_P9_1       P9_OMR.reg = 0x00020002
#define TOGGLEIO_P9_2       P9_OMR.reg = 0x00040004
#define TOGGLEIO_P9_3       P9_OMR.reg = 0x00080008
#define TOGGLEIO_P9_4       P9_OMR.reg = 0x00100010
#define TOGGLEIO_P9_5       P9_OMR.reg = 0x00200020
#define TOGGLEIO_P9_6       P9_OMR.reg = 0x00400040
#define TOGGLEIO_P9_7       P9_OMR.reg = 0x00800080
#define TOGGLEIO_P9_8       P9_OMR.reg = 0x01000100
#define TOGGLEIO_P9_9       P9_OMR.reg = 0x02000200
#define TOGGLEIO_P9_10       P9_OMR.reg = 0x04000400
#define TOGGLEIO_P9_11       P9_OMR.reg = 0x08000800
#define TOGGLEIO_P9_12       P9_OMR.reg = 0x10001000
#define TOGGLEIO_P9_13       P9_OMR.reg = 0x20002000
#define TOGGLEIO_P9_14       P9_OMR.reg = 0x40004000

#define CONTROLIO_P9_0(Mode)       P9_IOCR0.reg = (P9_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P9_1(Mode)       P9_IOCR0.reg = (P9_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P9_2(Mode)       P9_IOCR0.reg = (P9_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P9_3(Mode)       P9_IOCR0.reg = (P9_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P9_4(Mode)       P9_IOCR4.reg = (P9_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P9_5(Mode)       P9_IOCR4.reg = (P9_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P9_6(Mode)       P9_IOCR4.reg = (P9_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P9_7(Mode)       P9_IOCR4.reg = (P9_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P9_8(Mode)       P9_IOCR8.reg = (P9_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P9_9(Mode)       P9_IOCR8.reg = (P9_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P9_10(Mode)       P9_IOCR8.reg = (P9_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P9_11(Mode)       P9_IOCR8.reg = (P9_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P9_12(Mode)       P9_IOCR12.reg = (P9_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P9_13(Mode)       P9_IOCR12.reg = (P9_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P9_14(Mode)       P9_IOCR12.reg = (P9_IOCR12.reg & ~0x00F00000) | (Mode << 20)

#define INIO_P10_0       P10_IN.bits.P0
#define INIO_P10_1       P10_IN.bits.P1
#define INIO_P10_2       P10_IN.bits.P2
#define INIO_P10_3       P10_IN.bits.P3
#define INIO_P10_4       P10_IN.bits.P4
#define INIO_P10_5       P10_IN.bits.P5

#define SETIO_P10_0       P10_OMR.reg = 0x00000001
#define SETIO_P10_1       P10_OMR.reg = 0x00000002
#define SETIO_P10_2       P10_OMR.reg = 0x00000004
#define SETIO_P10_3       P10_OMR.reg = 0x00000008
#define SETIO_P10_4       P10_OMR.reg = 0x00000010
#define SETIO_P10_5       P10_OMR.reg = 0x00000020

#define RESETIO_P10_0       P10_OMR.reg = 0x00010000
#define RESETIO_P10_1       P10_OMR.reg = 0x00020000
#define RESETIO_P10_2       P10_OMR.reg = 0x00040000
#define RESETIO_P10_3       P10_OMR.reg = 0x00080000
#define RESETIO_P10_4       P10_OMR.reg = 0x00100000
#define RESETIO_P10_5       P10_OMR.reg = 0x00200000

#define TOGGLEIO_P10_0       P10_OMR.reg = 0x00010001
#define TOGGLEIO_P10_1       P10_OMR.reg = 0x00020002
#define TOGGLEIO_P10_2       P10_OMR.reg = 0x00040004
#define TOGGLEIO_P10_3       P10_OMR.reg = 0x00080008
#define TOGGLEIO_P10_4       P10_OMR.reg = 0x00100010
#define TOGGLEIO_P10_5       P10_OMR.reg = 0x00200020

#define CONTROLIO_P10_0(Mode)       P10_IOCR0.reg = (P10_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P10_1(Mode)       P10_IOCR0.reg = (P10_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P10_2(Mode)       P10_IOCR0.reg = (P10_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P10_3(Mode)       P10_IOCR0.reg = (P10_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P10_4(Mode)       P10_IOCR4.reg = (P10_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P10_5(Mode)       P10_IOCR4.reg = (P10_IOCR4.reg & ~0x0000F000) | (Mode << 12)

#define INIO_P11_0       P11_IN.bits.P0
#define INIO_P11_1       P11_IN.bits.P1
#define INIO_P11_2       P11_IN.bits.P2
#define INIO_P11_3       P11_IN.bits.P3
#define INIO_P11_4       P11_IN.bits.P4
#define INIO_P11_5       P11_IN.bits.P5
#define INIO_P11_6       P11_IN.bits.P6
#define INIO_P11_7       P11_IN.bits.P7
#define INIO_P11_8       P11_IN.bits.P8
#define INIO_P11_9       P11_IN.bits.P9
#define INIO_P11_10       P11_IN.bits.P10
#define INIO_P11_11       P11_IN.bits.P11
#define INIO_P11_12       P11_IN.bits.P12
#define INIO_P11_13       P11_IN.bits.P13
#define INIO_P11_14       P11_IN.bits.P14
#define INIO_P11_15       P11_IN.bits.P15

#define SETIO_P11_0       P11_OMR.reg = 0x00000001
#define SETIO_P11_1       P11_OMR.reg = 0x00000002
#define SETIO_P11_2       P11_OMR.reg = 0x00000004
#define SETIO_P11_3       P11_OMR.reg = 0x00000008
#define SETIO_P11_4       P11_OMR.reg = 0x00000010
#define SETIO_P11_5       P11_OMR.reg = 0x00000020
#define SETIO_P11_6       P11_OMR.reg = 0x00000040
#define SETIO_P11_7       P11_OMR.reg = 0x00000080
#define SETIO_P11_8       P11_OMR.reg = 0x00000100
#define SETIO_P11_9       P11_OMR.reg = 0x00000200
#define SETIO_P11_10       P11_OMR.reg = 0x00000400
#define SETIO_P11_11       P11_OMR.reg = 0x00000800
#define SETIO_P11_12       P11_OMR.reg = 0x00001000
#define SETIO_P11_13       P11_OMR.reg = 0x00002000
#define SETIO_P11_14       P11_OMR.reg = 0x00004000
#define SETIO_P11_15       P11_OMR.reg = 0x00008000

#define RESETIO_P11_0       P11_OMR.reg = 0x00010000
#define RESETIO_P11_1       P11_OMR.reg = 0x00020000
#define RESETIO_P11_2       P11_OMR.reg = 0x00040000
#define RESETIO_P11_3       P11_OMR.reg = 0x00080000
#define RESETIO_P11_4       P11_OMR.reg = 0x00100000
#define RESETIO_P11_5       P11_OMR.reg = 0x00200000
#define RESETIO_P11_6       P11_OMR.reg = 0x00400000
#define RESETIO_P11_7       P11_OMR.reg = 0x00800000
#define RESETIO_P11_8       P11_OMR.reg = 0x01000000
#define RESETIO_P11_9       P11_OMR.reg = 0x02000000
#define RESETIO_P11_10       P11_OMR.reg = 0x04000000
#define RESETIO_P11_11       P11_OMR.reg = 0x08000000
#define RESETIO_P11_12       P11_OMR.reg = 0x10000000
#define RESETIO_P11_13       P11_OMR.reg = 0x20000000
#define RESETIO_P11_14       P11_OMR.reg = 0x40000000
#define RESETIO_P11_15       P11_OMR.reg = 0x80000000

#define TOGGLEIO_P11_0       P11_OMR.reg = 0x00010001
#define TOGGLEIO_P11_1       P11_OMR.reg = 0x00020002
#define TOGGLEIO_P11_2       P11_OMR.reg = 0x00040004
#define TOGGLEIO_P11_3       P11_OMR.reg = 0x00080008
#define TOGGLEIO_P11_4       P11_OMR.reg = 0x00100010
#define TOGGLEIO_P11_5       P11_OMR.reg = 0x00200020
#define TOGGLEIO_P11_6       P11_OMR.reg = 0x00400040
#define TOGGLEIO_P11_7       P11_OMR.reg = 0x00800080
#define TOGGLEIO_P11_8       P11_OMR.reg = 0x01000100
#define TOGGLEIO_P11_9       P11_OMR.reg = 0x02000200
#define TOGGLEIO_P11_10       P11_OMR.reg = 0x04000400
#define TOGGLEIO_P11_11       P11_OMR.reg = 0x08000800
#define TOGGLEIO_P11_12       P11_OMR.reg = 0x10001000
#define TOGGLEIO_P11_13       P11_OMR.reg = 0x20002000
#define TOGGLEIO_P11_14       P11_OMR.reg = 0x40004000
#define TOGGLEIO_P11_15       P11_OMR.reg = 0x80008000

#define CONTROLIO_P11_0(Mode)       P11_IOCR0.reg = (P11_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P11_1(Mode)       P11_IOCR0.reg = (P11_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P11_2(Mode)       P11_IOCR0.reg = (P11_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P11_3(Mode)       P11_IOCR0.reg = (P11_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P11_4(Mode)       P11_IOCR4.reg = (P11_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P11_5(Mode)       P11_IOCR4.reg = (P11_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P11_6(Mode)       P11_IOCR4.reg = (P11_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P11_7(Mode)       P11_IOCR4.reg = (P11_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P11_8(Mode)       P11_IOCR8.reg = (P11_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P11_9(Mode)       P11_IOCR8.reg = (P11_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P11_10(Mode)       P11_IOCR8.reg = (P11_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P11_11(Mode)       P11_IOCR8.reg = (P11_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P11_12(Mode)       P11_IOCR12.reg = (P11_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P11_13(Mode)       P11_IOCR12.reg = (P11_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P11_14(Mode)       P11_IOCR12.reg = (P11_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P11_15(Mode)       P11_IOCR12.reg = (P11_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P12_0       P12_IN.bits.P0
#define INIO_P12_1       P12_IN.bits.P1
#define INIO_P12_2       P12_IN.bits.P2
#define INIO_P12_3       P12_IN.bits.P3
#define INIO_P12_4       P12_IN.bits.P4
#define INIO_P12_5       P12_IN.bits.P5
#define INIO_P12_6       P12_IN.bits.P6
#define INIO_P12_7       P12_IN.bits.P7

#define SETIO_P12_0       P12_OMR.reg = 0x00000001
#define SETIO_P12_1       P12_OMR.reg = 0x00000002
#define SETIO_P12_2       P12_OMR.reg = 0x00000004
#define SETIO_P12_3       P12_OMR.reg = 0x00000008
#define SETIO_P12_4       P12_OMR.reg = 0x00000010
#define SETIO_P12_5       P12_OMR.reg = 0x00000020
#define SETIO_P12_6       P12_OMR.reg = 0x00000040
#define SETIO_P12_7       P12_OMR.reg = 0x00000080

#define RESETIO_P12_0       P12_OMR.reg = 0x00010000
#define RESETIO_P12_1       P12_OMR.reg = 0x00020000
#define RESETIO_P12_2       P12_OMR.reg = 0x00040000
#define RESETIO_P12_3       P12_OMR.reg = 0x00080000
#define RESETIO_P12_4       P12_OMR.reg = 0x00100000
#define RESETIO_P12_5       P12_OMR.reg = 0x00200000
#define RESETIO_P12_6       P12_OMR.reg = 0x00400000
#define RESETIO_P12_7       P12_OMR.reg = 0x00800000

#define TOGGLEIO_P12_0       P12_OMR.reg = 0x00010001
#define TOGGLEIO_P12_1       P12_OMR.reg = 0x00020002
#define TOGGLEIO_P12_2       P12_OMR.reg = 0x00040004
#define TOGGLEIO_P12_3       P12_OMR.reg = 0x00080008
#define TOGGLEIO_P12_4       P12_OMR.reg = 0x00100010
#define TOGGLEIO_P12_5       P12_OMR.reg = 0x00200020
#define TOGGLEIO_P12_6       P12_OMR.reg = 0x00400040
#define TOGGLEIO_P12_7       P12_OMR.reg = 0x00800080

#define CONTROLIO_P12_0(Mode)       P12_IOCR0.reg = (P12_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P12_1(Mode)       P12_IOCR0.reg = (P12_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P12_2(Mode)       P12_IOCR0.reg = (P12_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P12_3(Mode)       P12_IOCR0.reg = (P12_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P12_4(Mode)       P12_IOCR4.reg = (P12_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P12_5(Mode)       P12_IOCR4.reg = (P12_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P12_6(Mode)       P12_IOCR4.reg = (P12_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P12_7(Mode)       P12_IOCR4.reg = (P12_IOCR4.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P13_0       P13_IN.bits.P0
#define INIO_P13_1       P13_IN.bits.P1
#define INIO_P13_2       P13_IN.bits.P2
#define INIO_P13_3       P13_IN.bits.P3
#define INIO_P13_4       P13_IN.bits.P4
#define INIO_P13_5       P13_IN.bits.P5
#define INIO_P13_6       P13_IN.bits.P6
#define INIO_P13_7       P13_IN.bits.P7
#define INIO_P13_8       P13_IN.bits.P8
#define INIO_P13_9       P13_IN.bits.P9
#define INIO_P13_10       P13_IN.bits.P10
#define INIO_P13_11       P13_IN.bits.P11
#define INIO_P13_12       P13_IN.bits.P12
#define INIO_P13_13       P13_IN.bits.P13
#define INIO_P13_14       P13_IN.bits.P14
#define INIO_P13_15       P13_IN.bits.P15

#define SETIO_P13_0       P13_OMR.reg = 0x00000001
#define SETIO_P13_1       P13_OMR.reg = 0x00000002
#define SETIO_P13_2       P13_OMR.reg = 0x00000004
#define SETIO_P13_3       P13_OMR.reg = 0x00000008
#define SETIO_P13_4       P13_OMR.reg = 0x00000010
#define SETIO_P13_5       P13_OMR.reg = 0x00000020
#define SETIO_P13_6       P13_OMR.reg = 0x00000040
#define SETIO_P13_7       P13_OMR.reg = 0x00000080
#define SETIO_P13_8       P13_OMR.reg = 0x00000100
#define SETIO_P13_9       P13_OMR.reg = 0x00000200
#define SETIO_P13_10       P13_OMR.reg = 0x00000400
#define SETIO_P13_11       P13_OMR.reg = 0x00000800
#define SETIO_P13_12       P13_OMR.reg = 0x00001000
#define SETIO_P13_13       P13_OMR.reg = 0x00002000
#define SETIO_P13_14       P13_OMR.reg = 0x00004000
#define SETIO_P13_15       P13_OMR.reg = 0x00008000

#define RESETIO_P13_0       P13_OMR.reg = 0x00010000
#define RESETIO_P13_1       P13_OMR.reg = 0x00020000
#define RESETIO_P13_2       P13_OMR.reg = 0x00040000
#define RESETIO_P13_3       P13_OMR.reg = 0x00080000
#define RESETIO_P13_4       P13_OMR.reg = 0x00100000
#define RESETIO_P13_5       P13_OMR.reg = 0x00200000
#define RESETIO_P13_6       P13_OMR.reg = 0x00400000
#define RESETIO_P13_7       P13_OMR.reg = 0x00800000
#define RESETIO_P13_8       P13_OMR.reg = 0x01000000
#define RESETIO_P13_9       P13_OMR.reg = 0x02000000
#define RESETIO_P13_10       P13_OMR.reg = 0x04000000
#define RESETIO_P13_11       P13_OMR.reg = 0x08000000
#define RESETIO_P13_12       P13_OMR.reg = 0x10000000
#define RESETIO_P13_13       P13_OMR.reg = 0x20000000
#define RESETIO_P13_14       P13_OMR.reg = 0x40000000
#define RESETIO_P13_15       P13_OMR.reg = 0x80000000

#define TOGGLEIO_P13_0       P13_OMR.reg = 0x00010001
#define TOGGLEIO_P13_1       P13_OMR.reg = 0x00020002
#define TOGGLEIO_P13_2       P13_OMR.reg = 0x00040004
#define TOGGLEIO_P13_3       P13_OMR.reg = 0x00080008
#define TOGGLEIO_P13_4       P13_OMR.reg = 0x00100010
#define TOGGLEIO_P13_5       P13_OMR.reg = 0x00200020
#define TOGGLEIO_P13_6       P13_OMR.reg = 0x00400040
#define TOGGLEIO_P13_7       P13_OMR.reg = 0x00800080
#define TOGGLEIO_P13_8       P13_OMR.reg = 0x01000100
#define TOGGLEIO_P13_9       P13_OMR.reg = 0x02000200
#define TOGGLEIO_P13_10       P13_OMR.reg = 0x04000400
#define TOGGLEIO_P13_11       P13_OMR.reg = 0x08000800
#define TOGGLEIO_P13_12       P13_OMR.reg = 0x10001000
#define TOGGLEIO_P13_13       P13_OMR.reg = 0x20002000
#define TOGGLEIO_P13_14       P13_OMR.reg = 0x40004000
#define TOGGLEIO_P13_15       P13_OMR.reg = 0x80008000

#define CONTROLIO_P13_0(Mode)       P13_IOCR0.reg = (P13_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P13_1(Mode)       P13_IOCR0.reg = (P13_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P13_2(Mode)       P13_IOCR0.reg = (P13_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P13_3(Mode)       P13_IOCR0.reg = (P13_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P13_4(Mode)       P13_IOCR4.reg = (P13_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P13_5(Mode)       P13_IOCR4.reg = (P13_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P13_6(Mode)       P13_IOCR4.reg = (P13_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P13_7(Mode)       P13_IOCR4.reg = (P13_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P13_8(Mode)       P13_IOCR8.reg = (P13_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P13_9(Mode)       P13_IOCR8.reg = (P13_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P13_10(Mode)       P13_IOCR8.reg = (P13_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P13_11(Mode)       P13_IOCR8.reg = (P13_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P13_12(Mode)       P13_IOCR12.reg = (P13_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P13_13(Mode)       P13_IOCR12.reg = (P13_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P13_14(Mode)       P13_IOCR12.reg = (P13_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P13_15(Mode)       P13_IOCR12.reg = (P13_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P14_0       P14_IN.bits.P0
#define INIO_P14_1       P14_IN.bits.P1
#define INIO_P14_2       P14_IN.bits.P2
#define INIO_P14_3       P14_IN.bits.P3
#define INIO_P14_4       P14_IN.bits.P4
#define INIO_P14_5       P14_IN.bits.P5
#define INIO_P14_6       P14_IN.bits.P6
#define INIO_P14_7       P14_IN.bits.P7
#define INIO_P14_8       P14_IN.bits.P8
#define INIO_P14_9       P14_IN.bits.P9
#define INIO_P14_10       P14_IN.bits.P10
#define INIO_P14_11       P14_IN.bits.P11
#define INIO_P14_12       P14_IN.bits.P12
#define INIO_P14_13       P14_IN.bits.P13
#define INIO_P14_14       P14_IN.bits.P14
#define INIO_P14_15       P14_IN.bits.P15

#define SETIO_P14_0       P14_OMR.reg = 0x00000001
#define SETIO_P14_1       P14_OMR.reg = 0x00000002
#define SETIO_P14_2       P14_OMR.reg = 0x00000004
#define SETIO_P14_3       P14_OMR.reg = 0x00000008
#define SETIO_P14_4       P14_OMR.reg = 0x00000010
#define SETIO_P14_5       P14_OMR.reg = 0x00000020
#define SETIO_P14_6       P14_OMR.reg = 0x00000040
#define SETIO_P14_7       P14_OMR.reg = 0x00000080
#define SETIO_P14_8       P14_OMR.reg = 0x00000100
#define SETIO_P14_9       P14_OMR.reg = 0x00000200
#define SETIO_P14_10       P14_OMR.reg = 0x00000400
#define SETIO_P14_11       P14_OMR.reg = 0x00000800
#define SETIO_P14_12       P14_OMR.reg = 0x00001000
#define SETIO_P14_13       P14_OMR.reg = 0x00002000
#define SETIO_P14_14       P14_OMR.reg = 0x00004000
#define SETIO_P14_15       P14_OMR.reg = 0x00008000

#define RESETIO_P14_0       P14_OMR.reg = 0x00010000
#define RESETIO_P14_1       P14_OMR.reg = 0x00020000
#define RESETIO_P14_2       P14_OMR.reg = 0x00040000
#define RESETIO_P14_3       P14_OMR.reg = 0x00080000
#define RESETIO_P14_4       P14_OMR.reg = 0x00100000
#define RESETIO_P14_5       P14_OMR.reg = 0x00200000
#define RESETIO_P14_6       P14_OMR.reg = 0x00400000
#define RESETIO_P14_7       P14_OMR.reg = 0x00800000
#define RESETIO_P14_8       P14_OMR.reg = 0x01000000
#define RESETIO_P14_9       P14_OMR.reg = 0x02000000
#define RESETIO_P14_10       P14_OMR.reg = 0x04000000
#define RESETIO_P14_11       P14_OMR.reg = 0x08000000
#define RESETIO_P14_12       P14_OMR.reg = 0x10000000
#define RESETIO_P14_13       P14_OMR.reg = 0x20000000
#define RESETIO_P14_14       P14_OMR.reg = 0x40000000
#define RESETIO_P14_15       P14_OMR.reg = 0x80000000

#define TOGGLEIO_P14_0       P14_OMR.reg = 0x00010001
#define TOGGLEIO_P14_1       P14_OMR.reg = 0x00020002
#define TOGGLEIO_P14_2       P14_OMR.reg = 0x00040004
#define TOGGLEIO_P14_3       P14_OMR.reg = 0x00080008
#define TOGGLEIO_P14_4       P14_OMR.reg = 0x00100010
#define TOGGLEIO_P14_5       P14_OMR.reg = 0x00200020
#define TOGGLEIO_P14_6       P14_OMR.reg = 0x00400040
#define TOGGLEIO_P14_7       P14_OMR.reg = 0x00800080
#define TOGGLEIO_P14_8       P14_OMR.reg = 0x01000100
#define TOGGLEIO_P14_9       P14_OMR.reg = 0x02000200
#define TOGGLEIO_P14_10       P14_OMR.reg = 0x04000400
#define TOGGLEIO_P14_11       P14_OMR.reg = 0x08000800
#define TOGGLEIO_P14_12       P14_OMR.reg = 0x10001000
#define TOGGLEIO_P14_13       P14_OMR.reg = 0x20002000
#define TOGGLEIO_P14_14       P14_OMR.reg = 0x40004000
#define TOGGLEIO_P14_15       P14_OMR.reg = 0x80008000

#define CONTROLIO_P14_0(Mode)       P14_IOCR0.reg = (P14_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P14_1(Mode)       P14_IOCR0.reg = (P14_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P14_2(Mode)       P14_IOCR0.reg = (P14_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P14_3(Mode)       P14_IOCR0.reg = (P14_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P14_4(Mode)       P14_IOCR4.reg = (P14_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P14_5(Mode)       P14_IOCR4.reg = (P14_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P14_6(Mode)       P14_IOCR4.reg = (P14_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P14_7(Mode)       P14_IOCR4.reg = (P14_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P14_8(Mode)       P14_IOCR8.reg = (P14_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P14_9(Mode)       P14_IOCR8.reg = (P14_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P14_10(Mode)       P14_IOCR8.reg = (P14_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P14_11(Mode)       P14_IOCR8.reg = (P14_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P14_12(Mode)       P14_IOCR12.reg = (P14_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P14_13(Mode)       P14_IOCR12.reg = (P14_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P14_14(Mode)       P14_IOCR12.reg = (P14_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P14_15(Mode)       P14_IOCR12.reg = (P14_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P15_0       P15_IN.bits.P0
#define INIO_P15_1       P15_IN.bits.P1
#define INIO_P15_2       P15_IN.bits.P2
#define INIO_P15_3       P15_IN.bits.P3
#define INIO_P15_4       P15_IN.bits.P4
#define INIO_P15_5       P15_IN.bits.P5
#define INIO_P15_6       P15_IN.bits.P6
#define INIO_P15_7       P15_IN.bits.P7
#define INIO_P15_8       P15_IN.bits.P8
#define INIO_P15_9       P15_IN.bits.P9
#define INIO_P15_10       P15_IN.bits.P10
#define INIO_P15_11       P15_IN.bits.P11
#define INIO_P15_12       P15_IN.bits.P12
#define INIO_P15_13       P15_IN.bits.P13
#define INIO_P15_14       P15_IN.bits.P14
#define INIO_P15_15       P15_IN.bits.P15

#define SETIO_P15_0       P15_OMR.reg = 0x00000001
#define SETIO_P15_1       P15_OMR.reg = 0x00000002
#define SETIO_P15_2       P15_OMR.reg = 0x00000004
#define SETIO_P15_3       P15_OMR.reg = 0x00000008
#define SETIO_P15_4       P15_OMR.reg = 0x00000010
#define SETIO_P15_5       P15_OMR.reg = 0x00000020
#define SETIO_P15_6       P15_OMR.reg = 0x00000040
#define SETIO_P15_7       P15_OMR.reg = 0x00000080
#define SETIO_P15_8       P15_OMR.reg = 0x00000100
#define SETIO_P15_9       P15_OMR.reg = 0x00000200
#define SETIO_P15_10       P15_OMR.reg = 0x00000400
#define SETIO_P15_11       P15_OMR.reg = 0x00000800
#define SETIO_P15_12       P15_OMR.reg = 0x00001000
#define SETIO_P15_13       P15_OMR.reg = 0x00002000
#define SETIO_P15_14       P15_OMR.reg = 0x00004000
#define SETIO_P15_15       P15_OMR.reg = 0x00008000

#define RESETIO_P15_0       P15_OMR.reg = 0x00010000
#define RESETIO_P15_1       P15_OMR.reg = 0x00020000
#define RESETIO_P15_2       P15_OMR.reg = 0x00040000
#define RESETIO_P15_3       P15_OMR.reg = 0x00080000
#define RESETIO_P15_4       P15_OMR.reg = 0x00100000
#define RESETIO_P15_5       P15_OMR.reg = 0x00200000
#define RESETIO_P15_6       P15_OMR.reg = 0x00400000
#define RESETIO_P15_7       P15_OMR.reg = 0x00800000
#define RESETIO_P15_8       P15_OMR.reg = 0x01000000
#define RESETIO_P15_9       P15_OMR.reg = 0x02000000
#define RESETIO_P15_10       P15_OMR.reg = 0x04000000
#define RESETIO_P15_11       P15_OMR.reg = 0x08000000
#define RESETIO_P15_12       P15_OMR.reg = 0x10000000
#define RESETIO_P15_13       P15_OMR.reg = 0x20000000
#define RESETIO_P15_14       P15_OMR.reg = 0x40000000
#define RESETIO_P15_15       P15_OMR.reg = 0x80000000

#define TOGGLEIO_P15_0       P15_OMR.reg = 0x00010001
#define TOGGLEIO_P15_1       P15_OMR.reg = 0x00020002
#define TOGGLEIO_P15_2       P15_OMR.reg = 0x00040004
#define TOGGLEIO_P15_3       P15_OMR.reg = 0x00080008
#define TOGGLEIO_P15_4       P15_OMR.reg = 0x00100010
#define TOGGLEIO_P15_5       P15_OMR.reg = 0x00200020
#define TOGGLEIO_P15_6       P15_OMR.reg = 0x00400040
#define TOGGLEIO_P15_7       P15_OMR.reg = 0x00800080
#define TOGGLEIO_P15_8       P15_OMR.reg = 0x01000100
#define TOGGLEIO_P15_9       P15_OMR.reg = 0x02000200
#define TOGGLEIO_P15_10       P15_OMR.reg = 0x04000400
#define TOGGLEIO_P15_11       P15_OMR.reg = 0x08000800
#define TOGGLEIO_P15_12       P15_OMR.reg = 0x10001000
#define TOGGLEIO_P15_13       P15_OMR.reg = 0x20002000
#define TOGGLEIO_P15_14       P15_OMR.reg = 0x40004000
#define TOGGLEIO_P15_15       P15_OMR.reg = 0x80008000

#define CONTROLIO_P15_0(Mode)       P15_IOCR0.reg = (P15_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P15_1(Mode)       P15_IOCR0.reg = (P15_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P15_2(Mode)       P15_IOCR0.reg = (P15_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P15_3(Mode)       P15_IOCR0.reg = (P15_IOCR0.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P15_4(Mode)       P15_IOCR4.reg = (P15_IOCR4.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P15_5(Mode)       P15_IOCR4.reg = (P15_IOCR4.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P15_6(Mode)       P15_IOCR4.reg = (P15_IOCR4.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P15_7(Mode)       P15_IOCR4.reg = (P15_IOCR4.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P15_8(Mode)       P15_IOCR8.reg = (P15_IOCR8.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P15_9(Mode)       P15_IOCR8.reg = (P15_IOCR8.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P15_10(Mode)       P15_IOCR8.reg = (P15_IOCR8.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P15_11(Mode)       P15_IOCR8.reg = (P15_IOCR8.reg & ~0xF0000000) | (Mode << 28)
#define CONTROLIO_P15_12(Mode)       P15_IOCR12.reg = (P15_IOCR12.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P15_13(Mode)       P15_IOCR12.reg = (P15_IOCR12.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P15_14(Mode)       P15_IOCR12.reg = (P15_IOCR12.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P15_15(Mode)       P15_IOCR12.reg = (P15_IOCR12.reg & ~0xF0000000) | (Mode << 28)

#define INIO_P16_0       P16_IN.bits.P0
#define INIO_P16_1       P16_IN.bits.P1
#define INIO_P16_2       P16_IN.bits.P2
#define INIO_P16_3       P16_IN.bits.P3

#define SETIO_P16_0       P16_OMR.reg = 0x00000001
#define SETIO_P16_1       P16_OMR.reg = 0x00000002
#define SETIO_P16_2       P16_OMR.reg = 0x00000004
#define SETIO_P16_3       P16_OMR.reg = 0x00000008

#define RESETIO_P16_0       P16_OMR.reg = 0x00010000
#define RESETIO_P16_1       P16_OMR.reg = 0x00020000
#define RESETIO_P16_2       P16_OMR.reg = 0x00040000
#define RESETIO_P16_3       P16_OMR.reg = 0x00080000

#define TOGGLEIO_P16_0       P16_OMR.reg = 0x00010001
#define TOGGLEIO_P16_1       P16_OMR.reg = 0x00020002
#define TOGGLEIO_P16_2       P16_OMR.reg = 0x00040004
#define TOGGLEIO_P16_3       P16_OMR.reg = 0x00080008

#define CONTROLIO_P16_0(Mode)       P16_IOCR0.reg = (P16_IOCR0.reg & ~0x000000F0) | (Mode << 4)
#define CONTROLIO_P16_1(Mode)       P16_IOCR0.reg = (P16_IOCR0.reg & ~0x0000F000) | (Mode << 12)
#define CONTROLIO_P16_2(Mode)       P16_IOCR0.reg = (P16_IOCR0.reg & ~0x00F00000) | (Mode << 20)
#define CONTROLIO_P16_3(Mode)       P16_IOCR0.reg = (P16_IOCR0.reg & ~0xF0000000) | (Mode << 28)

// USER CODE BEGIN (IO_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

extern void IO_vInit(void);


// USER CODE BEGIN (IO_Header,8)

// USER CODE END


//****************************************************************************
// @Macro         IO_vTogglePin(PinName) 
//
//----------------------------------------------------------------------------
// @Description   This marco toggles the chosen portpin. 
//                Note:
//                See the 'Defines for the parameter PinName' section in this 
//                header file for the available definitions for the parameter 
//                PinName.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    PinName: 
//                Pin to be toggled
//
//----------------------------------------------------------------------------
// @Date          14/09/2014
//
//****************************************************************************

#define IO_vTogglePin(PinName) TOGGLE##PinName


// USER CODE BEGIN (IO_Header,9)

// USER CODE END


#endif  // ifndef _IO_H_
