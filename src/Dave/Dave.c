/*
 * Dave.c
 *
 *  Created on: Sep 14, 2014
 *      Author: Daniel
 */

/* Include Files */
#include "Dave.h"


/* Function Declaration */

//****************************************************************************
// @Function      void MAIN_vWriteWDTCON0(uword uwValue)
//
//----------------------------------------------------------------------------
// @Description   This function writes the parameter uwValue to the WDT_CON0
//                register which is password protected.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    uwValue:
//                Value for the WDTCON0 register
//
//----------------------------------------------------------------------------
// @Date          14/09/2014
//
//****************************************************************************

// USER CODE BEGIN (WriteWDTCON0,1)



void MAIN_vWriteWDTCON0(uword uwValue)
{
  uword uwDummy;

  uwDummy        = WDT_CON0.reg;
  uwDummy |=  0x000000F0;       //  set HWPW1 = 1111b

  if(WDT_CON1.bits.DR)
  {
    uwDummy |=  0x00000008;     //  set HWPW0 = WDTDR
  }
  else
  {
    uwDummy &= ~0x00000008;     //  set HWPW0 = WDTDR
  }
  if(WDT_CON1.bits.IR)
  {
    uwDummy |=  0x00000004;     //  set HWPW0 = WDTIR
  }
  else
  {
    uwDummy &= ~0x00000004;     //  set HWPW0 = WDTIR
  }

  uwDummy &= ~0x00000002;       //  set WDTLCK = 0
  WDT_CON0.reg =  uwDummy;          //  unlock access

  uwValue  |=  0x000000F2;      //  set HWPW1 = 1111b and WDTLCK = 1
  uwValue  &= ~0x0000000C;      //  set HWPW0 = 00b
  WDT_CON0.reg  =  uwValue;         //  write access and lock

} //  End of function MAIN_vWriteWDTCON0

// USER CODE END
