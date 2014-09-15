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
// @Description   This file contains functions that use the IO module.
//
//----------------------------------------------------------------------------
// @Date          14/09/2014 13:56:20
//
//****************************************************************************

// USER CODE BEGIN (IO_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************



// USER CODE BEGIN (IO_General,2)
#include "IO.h"
#include "Dave.h"
// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (IO_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (IO_General,9)

// USER CODE END


//****************************************************************************
// @Function      void IO_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//                Note:
//                Alternate outputs are set in their own initialization 
//                function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          14/09/2014
//
//****************************************************************************

// USER CODE BEGIN (IO_Function,1)

// USER CODE END

void IO_vInit(void)
{
  // USER CODE BEGIN (IO_Function,2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P0 is used

  P0_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P0_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P0_IOCR0.reg   = 0x20202020;   // load port control register 0
  P0_IOCR4.reg   = 0x20202020;   // load port control register 4
  P0_IOCR8.reg   = 0x20202020;   // load port control register 8
  P0_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P1 is used

  P1_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P1_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P1_IOCR0.reg   = 0x20202020;   // load port control register 0
  P1_IOCR4.reg   = 0x20202020;   // load port control register 4
  P1_IOCR8.reg   = 0x20202020;   // load port control register 8
  P1_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P2:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P2 is used

  P2_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P2_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P2_IOCR0.reg   = 0x20202020;   // load port control register 0
  P2_IOCR4.reg   = 0x20202020;   // load port control register 4
  P2_IOCR8.reg   = 0x20202020;   // load port control register 8
  P2_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P3:
  ///  -----------------------------------------------------------------------
  ///  P3.0:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - output driver characteristic: medium driver
  ///  P3.1:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - output driver characteristic: medium driver
  ///  P3.2:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - output driver characteristic: medium driver

  P3_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P3_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P3_IOCR0.reg   = 0x20808080;   // load port control register 0
  P3_IOCR4.reg   = 0x20202020;   // load port control register 4
  P3_IOCR8.reg   = 0x20202020;   // load port control register 8
  P3_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P4:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P4 is used

  P4_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P4_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P4_IOCR0.reg   = 0x20202020;   // load port control register 0
  P4_IOCR4.reg   = 0x20202020;   // load port control register 4
  P4_IOCR8.reg   = 0x20202020;   // load port control register 8
  P4_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P5:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P5 is used

  P5_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P5_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P5_IOCR0.reg   = 0x20202020;   // load port control register 0
  P5_IOCR4.reg   = 0x20202020;   // load port control register 4
  P5_IOCR8.reg   = 0x20202020;   // load port control register 8
  P5_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P6:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P6 is used

  P6_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P6_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P6_IOCR0.reg   = 0x20202020;   // load port control register 0
  P6_IOCR4.reg   = 0x20202020;   // load port control register 4
  P6_IOCR8.reg   = 0x20202020;   // load port control register 8
  P6_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P7:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P7 is used

  P7_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P7_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P7_IOCR0.reg   = 0x20202020;   // load port control register 0
  P7_IOCR4.reg   = 0x20202020;   // load port control register 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P8:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P8 is used

  P8_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P8_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P8_IOCR0.reg   = 0x20202020;   // load port control register 0
  P8_IOCR4.reg   = 0x20202020;   // load port control register 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P9:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P9 is used

  P9_OMR.reg     = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P9_PDR.reg     = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P9_IOCR0.reg   = 0x20202020;   // load port control register 0
  P9_IOCR4.reg   = 0x20202020;   // load port control register 4
  P9_IOCR8.reg   = 0x20202020;   // load port control register 8
  P9_IOCR12.reg  = 0x20202020;   // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P10:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P10 is used

  P10_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P10_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P10_IOCR0.reg  = 0x20202020;   // load port control register 0
  P10_IOCR4.reg  = 0x20202020;   // load port control register 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P11:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P11 is used

  P11_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P11_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P11_IOCR0.reg  = 0x20202020;   // load port control register 0
  P11_IOCR4.reg  = 0x20202020;   // load port control register 4
  P11_IOCR8.reg  = 0x20202020;   // load port control register 8
  P11_IOCR12.reg  = 0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P12:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P12 is used

  P12_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P12_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P12_IOCR0.reg  = 0x20202020;   // load port control register 0
  P12_IOCR4.reg  = 0x20202020;   // load port control register 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P13:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P13 is used

  P13_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P13_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P13_IOCR0.reg  = 0x20202020;   // load port control register 0
  P13_IOCR4.reg  = 0x20202020;   // load port control register 4
  P13_IOCR8.reg  = 0x20202020;   // load port control register 8
  P13_IOCR12.reg  = 0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P14:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P14 is used

  P14_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P14_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P14_IOCR0.reg  = 0x20202020;   // load port control register 0
  P14_IOCR4.reg  = 0x20202020;   // load port control register 4
  P14_IOCR8.reg  = 0x20202020;   // load port control register 8
  P14_IOCR12.reg  = 0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P15:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P15 is used

  P15_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P15_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P15_IOCR0.reg  = 0x20202020;   // load port control register 0
  P15_IOCR4.reg  = 0x20202020;   // load port control register 4
  P15_IOCR8.reg  = 0x20202020;   // load port control register 8
  P15_IOCR12.reg  = 0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P16:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P16 is used

  P16_OMR.reg    = 0x00000000;   // load data output register
  MAIN_vResetENDINIT();
  P16_PDR.reg    = 0x00000000;   // load pad driver mode register
  MAIN_vSetENDINIT();
  P16_IOCR0.reg  = 0x20202020;   // load port control register 0
  P16_IOCR4.reg  = 0x20202020;   // load port control register 4


  // USER CODE BEGIN (IO_Function,3)

  // USER CODE END

} //  End of function IO_vInit




// USER CODE BEGIN (IO_General,10)

// USER CODE END

