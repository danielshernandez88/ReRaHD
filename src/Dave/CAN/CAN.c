//****************************************************************************
// @Module        MultiCAN Controller 
// @Filename      CAN.c
// @Project       dave_project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon TC1797
//
// @Compiler      Hightec GNU 3.4.5
//
// @Codegenerator 1.0
//
// @Description   This file contains functions that use the CAN module.
//
//----------------------------------------------------------------------------
// @Date          15/09/2014 10:17:50
//
//****************************************************************************

// USER CODE BEGIN (CAN_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "Dave.h"

// USER CODE BEGIN (CAN_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

#define SetListCommand(Value) CAN_PANCTR.reg = Value; while (CAN_PANCTR.bits.BUSY);

// USER CODE BEGIN (CAN_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// Structure for a single MultiCAN object
// A total of 128 such object structures exists

struct stCanObj 
{
  uword  uwMOFCR;    // Function Control Register
  uword  uwMOFGPR;   // FIFO/Gateway Pointer Register
  uword  uwMOIPR;    // Interrupt Pointer Register
  uword  uwMOAMR;    // Acceptance Mask Register
  ubyte  ubData[8];  // Message Data 0..7
  uword  uwMOAR;     // Arbitration Register
  uword  uwMOCTR;    // Control Register
};

#define CAN_HWOBJ ((struct stCanObj volatile *) 0xF0005000)

// USER CODE BEGIN (CAN_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (CAN_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

static ubyte aubFIFOWritePtr[128];
static ubyte aubFIFOReadPtr[128];

// USER CODE BEGIN (CAN_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (CAN_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************
void CAN_viSRN0(void);
void CAN_viSRN1(void);
void CAN_viSRN2(void);

// USER CODE BEGIN (CAN_General,9)

// USER CODE END


//****************************************************************************
// @Function      void CAN_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the CAN function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (Init,1)

// USER CODE END

void CAN_vInit(void)
{
ubyte i;

  // USER CODE BEGIN (Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Module Clock:
  ///  -----------------------------------------------------------------------

  ///  - the CAN module is stopped during sleep mode
  ///  - fractional divider mode is selected
  ///  - required CAN module clock is 30.00 MHz
  ///  - real CAN module clock is 30.00 MHz

  MAIN_vResetENDINIT();
  CAN_CLC.reg    = 0x00000000;   // load clock control register
  while ((CAN_CLC.reg & 0x00000002)==2);  //wait until module is enabled
  CAN_FDR.reg    = 0x00008300;   // load fractional divider register
  MAIN_vSetENDINIT();

  //   - wait until Panel has finished the initialisation
  while (CAN_PANCTR.bits.BUSY);

  ///  -----------------------------------------------------------------------
  ///  Configuration of CAN Node 0:
  ///  -----------------------------------------------------------------------

  ///  General Configuration of the Node 0:
  ///  - set INIT and CCE
  ///  - enable interrupt generation when a message transfer is completed
  ///  - transfer OK interrupt node pointer: MultiCAN SRN 0

  CAN_NCR0.reg   = 0x00000043;   // load node 0 control register
  CAN_NIPR0.reg  = 0x00000000;   // load node 0 interrupt pointer register

  ///  Configuration of the Node 0 Error Counter:
  ///  - the error warning threshold value (warning level) is 96

  CAN_NECNT0.reg  = 0x00600000;  // load node 0 error counter register


  CAN_NPCR0.reg  = 0x00000000;   // load node 0 port control register

  ///  Configuration of the used CAN Port Pins:
  ///  - P6.8 is used as  CAN node 0 input signal 1 ( RXDCAN0)
  ///  - the pull-up device is assigned
  ///  - output driver characteristic: strong driver, sharp edge

  P6_IOCR8.reg   = (P6_IOCR8.reg & ~0x000000F0) | 0x00000020; // load control 
                                                              // register

  ///  - P6.9 is used as  CAN node 0 output signal 1 ( TXDCAN0)
  ///  - the push/pull function is activated
  ///  - output driver characteristic: strong driver, sharp edge

  P6_IOCR8.reg   = (P6_IOCR8.reg & ~0x0000F000) | 0x00009000; // load control 
                                                              // register

  ///  Configuration of the Node 0 Baud Rate:
  ///  - required baud rate = 250000 baud
  ///  - real baud rate     = 250000 baud
  ///  - sample point       = 60.00 %
  ///  - there are 5 time quanta before sample point
  ///  - there are 4 time quanta after sample point
  ///  - the (re)synchronization jump width is 2 time quanta

  CAN_NBTR0.reg  = 0x0000344B;   // load  node 0 bit timing register

  ///  Configuration of the Frame Counter:
  ///  - Frame Counter Mode: the counter is incremented upon the reception 
  ///    and transmission of frames
  ///  - frame counter: 0x0000

  CAN_NFCR0.reg  = 0x00000000;   // load  node 0 frame counter register

  ///  -----------------------------------------------------------------------
  ///  Configuration of CAN Node 1:
  ///  -----------------------------------------------------------------------

  ///  General Configuration of the Node 1:
  ///  - set INIT and CCE

  CAN_NCR1.reg   = 0x00000041;   // load node 1 control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of CAN Node 2:
  ///  -----------------------------------------------------------------------

  ///  General Configuration of the Node 2:
  ///  - set INIT and CCE

  CAN_NCR2.reg   = 0x00000041;   // load node 2 control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of CAN Node 3:
  ///  -----------------------------------------------------------------------

  ///  General Configuration of the Node 3:
  ///  - set INIT and CCE

  CAN_NCR3.reg   = 0x00000041;   // load node 3 control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the CAN Message Object List Structure:
  ///  -----------------------------------------------------------------------
  ///  Allocate MOs for list 1:
  SetListCommand(0x01000002);  // MO0 for list 1
  SetListCommand(0x01010002);  // MO1 for list 1
  SetListCommand(0x01020002);  // MO2 for list 1
  SetListCommand(0x01030002);  // MO3 for list 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of the CAN Message Objects 0 - 127:
  ///  -----------------------------------------------------------------------
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 0:
  ///  -----------------------------------------------------------------------
  ///  - message object 0 is valid
  ///  - message object is used as transmit object
  ///  - this message object is assigned to list 1 (node 0)

  CAN_MOCTR0.reg  = 0x0EA80000;  // load MO0 control register

  ///  - this object is a STANDARD MESSAGE OBJECT
  ///  - 0 valid data bytes
  ///  - enable transmit interrupt; bit TXPND is set after successful 
  ///    transmission of a frame

  CAN_MOFCR0.reg  = 0x00020000;  // load MO0 function control register


  CAN_MOFGPR0.reg  = 0x00000000; // load MO0 FIFO/gateway pointer register

  ///  - only accept receive frames with matching IDE bit
  ///  - acceptance mask 11-bit: 0x7FF

  CAN_MOAMR0.reg  = 0x3FFFFFFF;  // load MO0 acceptance mask register

  ///  - priority class 3; transmit acceptance filtering is based on the list 
  ///    order (like class 1)
  ///  - standard 11-bit identifier
  ///  - identifier 11-bit:      0x101

  CAN_MOAR0.reg  = 0xC4040000;   // load MO0 arbitration register

  CAN_MODATAL0.reg  = 0x00000000; // load MO0 data register low
  CAN_MODATAH0.reg  = 0x00000000; // load MO0 data register high

  ///  - use message pending register 0 bit position 0
  ///  - transmit interrupt node pointer: MultiCAN SRN 1

  CAN_MOIPR0.reg  = 0x00000010;  // load MO0 interrupt pointer register
  CAN_MOCTR0.reg  = 0x00200000;  // set MSGVAL

  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 1:
  ///  -----------------------------------------------------------------------
  ///  - message object 1 is valid
  ///  - message object is used as transmit object
  ///  - this message object is assigned to list 1 (node 0)

  CAN_MOCTR1.reg  = 0x0EA80000;  // load MO1 control register

  ///  - this object is a STANDARD MESSAGE OBJECT
  ///  - 0 valid data bytes
  ///  - enable transmit interrupt; bit TXPND is set after successful 
  ///    transmission of a frame

  CAN_MOFCR1.reg  = 0x00020000;  // load MO1 function control register


  CAN_MOFGPR1.reg  = 0x00000000; // load MO1 FIFO/gateway pointer register

  ///  - only accept receive frames with matching IDE bit
  ///  - acceptance mask 11-bit: 0x7FF

  CAN_MOAMR1.reg  = 0x3FFFFFFF;  // load MO1 acceptance mask register

  ///  - priority class 3; transmit acceptance filtering is based on the list 
  ///    order (like class 1)
  ///  - standard 11-bit identifier
  ///  - identifier 11-bit:      0x102

  CAN_MOAR1.reg  = 0xC4080000;   // load MO1 arbitration register

  CAN_MODATAL1.reg  = 0x00000000; // load MO1 data register low
  CAN_MODATAH1.reg  = 0x00000000; // load MO1 data register high

  ///  - use message pending register 0 bit position 1
  ///  - transmit interrupt node pointer: MultiCAN SRN 0

  CAN_MOIPR1.reg  = 0x00000100;  // load MO1 interrupt pointer register
  CAN_MOCTR1.reg  = 0x00200000;  // set MSGVAL

  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 2:
  ///  -----------------------------------------------------------------------
  ///  - message object 2 is valid
  ///  - message object is used as receive object
  ///  - this message object is assigned to list 1 (node 0)

  CAN_MOCTR2.reg  = 0x00A00000;  // load MO2 control register

  ///  - this object is a STANDARD MESSAGE OBJECT
  ///  - 8 valid data bytes
  ///  - enable receive interrupt; bit RXPND is set after successful 
  ///    reception of a frame

  CAN_MOFCR2.reg  = 0x08010000;  // load MO2 function control register


  CAN_MOFGPR2.reg  = 0x00000000; // load MO2 FIFO/gateway pointer register

  ///  - only accept receive frames with matching IDE bit
  ///  - acceptance mask 11-bit: 0x7FF

  CAN_MOAMR2.reg  = 0x3FFFFFFF;  // load MO2 acceptance mask register

  ///  - priority class 3; transmit acceptance filtering is based on the list 
  ///    order (like class 1)
  ///  - standard 11-bit identifier
  ///  - identifier 11-bit:      0x121

  CAN_MOAR2.reg  = 0xC4840000;   // load MO2 arbitration register

  ///  - use message pending register 0 bit position 2
  ///  - receive interrupt node pointer: MultiCAN SRN 2

  CAN_MOIPR2.reg  = 0x00000202;  // load MO2 interrupt pointer register
  CAN_MOCTR2.reg  = 0x00200000;  // set MSGVAL

  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 3:
  ///  -----------------------------------------------------------------------
  ///  - message object 3 is valid
  ///  - message object is used as receive object
  ///  - this message object is assigned to list 1 (node 0)

  CAN_MOCTR3.reg  = 0x00A00000;  // load MO3 control register

  ///  - this object is a STANDARD MESSAGE OBJECT
  ///  - 0 valid data bytes
  ///  - enable receive interrupt; bit RXPND is set after successful 
  ///    reception of a frame

  CAN_MOFCR3.reg  = 0x00010000;  // load MO3 function control register


  CAN_MOFGPR3.reg  = 0x00000000; // load MO3 FIFO/gateway pointer register

  ///  - only accept receive frames with matching IDE bit
  ///  - acceptance mask 11-bit: 0x7FF

  CAN_MOAMR3.reg  = 0x3FFFFFFF;  // load MO3 acceptance mask register

  ///  - priority class 3; transmit acceptance filtering is based on the list 
  ///    order (like class 1)
  ///  - standard 11-bit identifier
  ///  - identifier 11-bit:      0x122

  CAN_MOAR3.reg  = 0xC4880000;   // load MO3 arbitration register

  ///  - use message pending register 0 bit position 3
  ///  - receive interrupt node pointer: MultiCAN SRN 2

  CAN_MOIPR3.reg  = 0x00000302;  // load MO3 interrupt pointer register
  CAN_MOCTR3.reg  = 0x00200000;  // set MSGVAL

  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 4:
  ///  -----------------------------------------------------------------------
  ///  - message object 4 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 5:
  ///  -----------------------------------------------------------------------
  ///  - message object 5 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 6:
  ///  -----------------------------------------------------------------------
  ///  - message object 6 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 7:
  ///  -----------------------------------------------------------------------
  ///  - message object 7 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 8:
  ///  -----------------------------------------------------------------------
  ///  - message object 8 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 9:
  ///  -----------------------------------------------------------------------
  ///  - message object 9 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 10:
  ///  -----------------------------------------------------------------------
  ///  - message object 10 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 11:
  ///  -----------------------------------------------------------------------
  ///  - message object 11 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 12:
  ///  -----------------------------------------------------------------------
  ///  - message object 12 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 13:
  ///  -----------------------------------------------------------------------
  ///  - message object 13 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 14:
  ///  -----------------------------------------------------------------------
  ///  - message object 14 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 15:
  ///  -----------------------------------------------------------------------
  ///  - message object 15 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 16:
  ///  -----------------------------------------------------------------------
  ///  - message object 16 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 17:
  ///  -----------------------------------------------------------------------
  ///  - message object 17 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 18:
  ///  -----------------------------------------------------------------------
  ///  - message object 18 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 19:
  ///  -----------------------------------------------------------------------
  ///  - message object 19 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 20:
  ///  -----------------------------------------------------------------------
  ///  - message object 20 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 21:
  ///  -----------------------------------------------------------------------
  ///  - message object 21 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 22:
  ///  -----------------------------------------------------------------------
  ///  - message object 22 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 23:
  ///  -----------------------------------------------------------------------
  ///  - message object 23 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 24:
  ///  -----------------------------------------------------------------------
  ///  - message object 24 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 25:
  ///  -----------------------------------------------------------------------
  ///  - message object 25 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 26:
  ///  -----------------------------------------------------------------------
  ///  - message object 26 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 27:
  ///  -----------------------------------------------------------------------
  ///  - message object 27 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 28:
  ///  -----------------------------------------------------------------------
  ///  - message object 28 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 29:
  ///  -----------------------------------------------------------------------
  ///  - message object 29 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 30:
  ///  -----------------------------------------------------------------------
  ///  - message object 30 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 31:
  ///  -----------------------------------------------------------------------
  ///  - message object 31 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 32:
  ///  -----------------------------------------------------------------------
  ///  - message object 32 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 33:
  ///  -----------------------------------------------------------------------
  ///  - message object 33 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 34:
  ///  -----------------------------------------------------------------------
  ///  - message object 34 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 35:
  ///  -----------------------------------------------------------------------
  ///  - message object 35 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 36:
  ///  -----------------------------------------------------------------------
  ///  - message object 36 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 37:
  ///  -----------------------------------------------------------------------
  ///  - message object 37 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 38:
  ///  -----------------------------------------------------------------------
  ///  - message object 38 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 39:
  ///  -----------------------------------------------------------------------
  ///  - message object 39 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 40:
  ///  -----------------------------------------------------------------------
  ///  - message object 40 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 41:
  ///  -----------------------------------------------------------------------
  ///  - message object 41 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 42:
  ///  -----------------------------------------------------------------------
  ///  - message object 42 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 43:
  ///  -----------------------------------------------------------------------
  ///  - message object 43 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 44:
  ///  -----------------------------------------------------------------------
  ///  - message object 44 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 45:
  ///  -----------------------------------------------------------------------
  ///  - message object 45 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 46:
  ///  -----------------------------------------------------------------------
  ///  - message object 46 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 47:
  ///  -----------------------------------------------------------------------
  ///  - message object 47 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 48:
  ///  -----------------------------------------------------------------------
  ///  - message object 48 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 49:
  ///  -----------------------------------------------------------------------
  ///  - message object 49 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 50:
  ///  -----------------------------------------------------------------------
  ///  - message object 50 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 51:
  ///  -----------------------------------------------------------------------
  ///  - message object 51 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 52:
  ///  -----------------------------------------------------------------------
  ///  - message object 52 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 53:
  ///  -----------------------------------------------------------------------
  ///  - message object 53 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 54:
  ///  -----------------------------------------------------------------------
  ///  - message object 54 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 55:
  ///  -----------------------------------------------------------------------
  ///  - message object 55 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 56:
  ///  -----------------------------------------------------------------------
  ///  - message object 56 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 57:
  ///  -----------------------------------------------------------------------
  ///  - message object 57 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 58:
  ///  -----------------------------------------------------------------------
  ///  - message object 58 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 59:
  ///  -----------------------------------------------------------------------
  ///  - message object 59 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 60:
  ///  -----------------------------------------------------------------------
  ///  - message object 60 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 61:
  ///  -----------------------------------------------------------------------
  ///  - message object 61 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 62:
  ///  -----------------------------------------------------------------------
  ///  - message object 62 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 63:
  ///  -----------------------------------------------------------------------
  ///  - message object 63 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 64:
  ///  -----------------------------------------------------------------------
  ///  - message object 64 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 65:
  ///  -----------------------------------------------------------------------
  ///  - message object 65 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 66:
  ///  -----------------------------------------------------------------------
  ///  - message object 66 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 67:
  ///  -----------------------------------------------------------------------
  ///  - message object 67 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 68:
  ///  -----------------------------------------------------------------------
  ///  - message object 68 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 69:
  ///  -----------------------------------------------------------------------
  ///  - message object 69 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 70:
  ///  -----------------------------------------------------------------------
  ///  - message object 70 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 71:
  ///  -----------------------------------------------------------------------
  ///  - message object 71 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 72:
  ///  -----------------------------------------------------------------------
  ///  - message object 72 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 73:
  ///  -----------------------------------------------------------------------
  ///  - message object 73 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 74:
  ///  -----------------------------------------------------------------------
  ///  - message object 74 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 75:
  ///  -----------------------------------------------------------------------
  ///  - message object 75 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 76:
  ///  -----------------------------------------------------------------------
  ///  - message object 76 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 77:
  ///  -----------------------------------------------------------------------
  ///  - message object 77 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 78:
  ///  -----------------------------------------------------------------------
  ///  - message object 78 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 79:
  ///  -----------------------------------------------------------------------
  ///  - message object 79 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 80:
  ///  -----------------------------------------------------------------------
  ///  - message object 80 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 81:
  ///  -----------------------------------------------------------------------
  ///  - message object 81 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 82:
  ///  -----------------------------------------------------------------------
  ///  - message object 82 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 83:
  ///  -----------------------------------------------------------------------
  ///  - message object 83 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 84:
  ///  -----------------------------------------------------------------------
  ///  - message object 84 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 85:
  ///  -----------------------------------------------------------------------
  ///  - message object 85 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 86:
  ///  -----------------------------------------------------------------------
  ///  - message object 86 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 87:
  ///  -----------------------------------------------------------------------
  ///  - message object 87 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 88:
  ///  -----------------------------------------------------------------------
  ///  - message object 88 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 89:
  ///  -----------------------------------------------------------------------
  ///  - message object 89 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 90:
  ///  -----------------------------------------------------------------------
  ///  - message object 90 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 91:
  ///  -----------------------------------------------------------------------
  ///  - message object 91 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 92:
  ///  -----------------------------------------------------------------------
  ///  - message object 92 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 93:
  ///  -----------------------------------------------------------------------
  ///  - message object 93 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 94:
  ///  -----------------------------------------------------------------------
  ///  - message object 94 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 95:
  ///  -----------------------------------------------------------------------
  ///  - message object 95 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 96:
  ///  -----------------------------------------------------------------------
  ///  - message object 96 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 97:
  ///  -----------------------------------------------------------------------
  ///  - message object 97 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 98:
  ///  -----------------------------------------------------------------------
  ///  - message object 98 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 99:
  ///  -----------------------------------------------------------------------
  ///  - message object 99 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 100:
  ///  -----------------------------------------------------------------------
  ///  - message object 100 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 101:
  ///  -----------------------------------------------------------------------
  ///  - message object 101 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 102:
  ///  -----------------------------------------------------------------------
  ///  - message object 102 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 103:
  ///  -----------------------------------------------------------------------
  ///  - message object 103 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 104:
  ///  -----------------------------------------------------------------------
  ///  - message object 104 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 105:
  ///  -----------------------------------------------------------------------
  ///  - message object 105 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 106:
  ///  -----------------------------------------------------------------------
  ///  - message object 106 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 107:
  ///  -----------------------------------------------------------------------
  ///  - message object 107 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 108:
  ///  -----------------------------------------------------------------------
  ///  - message object 108 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 109:
  ///  -----------------------------------------------------------------------
  ///  - message object 109 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 110:
  ///  -----------------------------------------------------------------------
  ///  - message object 110 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 111:
  ///  -----------------------------------------------------------------------
  ///  - message object 111 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 112:
  ///  -----------------------------------------------------------------------
  ///  - message object 112 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 113:
  ///  -----------------------------------------------------------------------
  ///  - message object 113 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 114:
  ///  -----------------------------------------------------------------------
  ///  - message object 114 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 115:
  ///  -----------------------------------------------------------------------
  ///  - message object 115 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 116:
  ///  -----------------------------------------------------------------------
  ///  - message object 116 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 117:
  ///  -----------------------------------------------------------------------
  ///  - message object 117 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 118:
  ///  -----------------------------------------------------------------------
  ///  - message object 118 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 119:
  ///  -----------------------------------------------------------------------
  ///  - message object 119 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 120:
  ///  -----------------------------------------------------------------------
  ///  - message object 120 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 121:
  ///  -----------------------------------------------------------------------
  ///  - message object 121 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 122:
  ///  -----------------------------------------------------------------------
  ///  - message object 122 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 123:
  ///  -----------------------------------------------------------------------
  ///  - message object 123 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 124:
  ///  -----------------------------------------------------------------------
  ///  - message object 124 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 125:
  ///  -----------------------------------------------------------------------
  ///  - message object 125 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 126:
  ///  -----------------------------------------------------------------------
  ///  - message object 126 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 127:
  ///  -----------------------------------------------------------------------
  ///  - message object 127 is not valid

  ///  -----------------------------------------------------------------------
  ///  Configuration of Service Request Nodes 0 - 15:
  ///  -----------------------------------------------------------------------
  ///  - SRN0 service request node configuration:
  ///  - SRN0 interrupt priority level (SRPN) = 2
  ///  - SRN0 CPU interrupt is selected

  CAN_SRC0.reg   = 0x00001002;   // set service request control register

  //   - install handler for CAN SRN 0 interrupt
  _install_int_handler(2, (void (*) (int)) CAN_viSRN0, 0);

  ///  - SRN1 service request node configuration:
  ///  - SRN1 interrupt priority level (SRPN) = 3
  ///  - SRN1 CPU interrupt is selected

  CAN_SRC1.reg   = 0x00001003;   // set service request control register

  //   - install handler for CAN SRN 1 interrupt
  _install_int_handler(3, (void (*) (int)) CAN_viSRN1, 0);

  ///  - SRN2 service request node configuration:
  ///  - SRN2 interrupt priority level (SRPN) = 4
  ///  - SRN2 CPU interrupt is selected

  CAN_SRC2.reg   = 0x00001004;   // set service request control register

  //   - install handler for CAN SRN 2 interrupt
  _install_int_handler(4, (void (*) (int)) CAN_viSRN2, 0);

  ///  -----------------------------------------------------------------------
  ///  Initialization of the FIFO Pointer:
  ///  -----------------------------------------------------------------------

  for (i = 0; i < 127; i++)
  {
    aubFIFOWritePtr[i] = (CAN_HWOBJ[i].uwMOFGPR & 0x000000ff);
    aubFIFOReadPtr[i]  = (CAN_HWOBJ[i].uwMOFGPR & 0x000000ff);
  }

  //   -----------------------------------------------------------------------
  //   Start the CAN Nodes:
  //   -----------------------------------------------------------------------
  CAN_NCR0.reg  &= ~0x00000041;  // reset INIT and CCE


  // USER CODE BEGIN (Init,3)

  // USER CODE END

} //  End of function CAN_vInit


//****************************************************************************
// @Function      void CAN_vGetMsgObj(ubyte ubObjNr, CAN_SWObj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function fills the forwarded SW message object with 
//                the content of the chosen HW message object.
//                
//                The structure of the SW message object is defined in the 
//                header file CAN.h (see CAN_SWObj).
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be read (0-127)
// @Parameters    *pstObj: 
//                Pointer on a message object to be filled by this function
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (GetMsgObj,1)

// USER CODE END

void CAN_vGetMsgObj(ubyte ubObjNr, CAN_SWObj *pstObj)
{
  ubyte i;

  // get DLC
  pstObj->usMOCfg  = (CAN_HWOBJ[ubObjNr].uwMOFCR & 0x0f000000) >> 24;
  for(i = 0; i < pstObj->usMOCfg; i++)
  {
    pstObj->ubData[i] = CAN_HWOBJ[ubObjNr].ubData[i];
  }

  pstObj->usMOCfg  = (pstObj->usMOCfg << 4);    // shift DLC
  if(CAN_HWOBJ[ubObjNr].uwMOCTR & 0x00000800)   // if transmit object
  {
    pstObj->usMOCfg  = pstObj->usMOCfg | 0x08;  // set DIR
  }

  if(CAN_HWOBJ[ubObjNr].uwMOAR & 0x20000000)    // extended identifier
  {
    pstObj->uwID     = CAN_HWOBJ[ubObjNr].uwMOAR & 0x1fffffff;
    pstObj->uwMask   = CAN_HWOBJ[ubObjNr].uwMOAMR & 0x1fffffff;
    pstObj->usMOCfg  = pstObj->usMOCfg | 0x04;  // set IDE
  }
  else                                          // standard identifier 
  {
    pstObj->uwID   = (CAN_HWOBJ[ubObjNr].uwMOAR & 0x1fffffff) >> 18;
    pstObj->uwMask = (CAN_HWOBJ[ubObjNr].uwMOAMR & 0x1fffffff) >> 18;
  }

  pstObj->usCounter = (CAN_HWOBJ[ubObjNr].uwMOIPR & 0xffff0000) >> 16;

} //  End of function CAN_vGetMsgObj


//****************************************************************************
// @Function      ubyte CAN_ubRequestMsgObj(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   If a TRANSMIT OBJECT is to be reconfigured it must first be 
//                accessed. The access to the transmit object is exclusive. 
//                This function checks whether the choosen message object is 
//                still executing a transmit request, or if the object can be 
//                accessed exclusively.
//                After the message object is reserved, it can be 
//                reconfigured by using the function CAN_vConfigMsgObj or 
//                CAN_vLoadData.
//                Both functions enable access to the object for the CAN 
//                controller. 
//                By calling the function CAN_vTransmit transfering of data 
//                is started.
//
//----------------------------------------------------------------------------
// @Returnvalue   0 message object is busy (a transfer is active), else 1
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (RequestMsgObj,1)

// USER CODE END

ubyte CAN_ubRequestMsgObj(ubyte ubObjNr)
{
  ubyte ubReturn;

  ubReturn = 0;
  if((CAN_HWOBJ[ubObjNr].uwMOCTR & 0x00000100) == 0x00000000)  // if reset TXRQ 
  {
    CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00000020;                   // reset MSGVAL 
    ubReturn = 1;
  }
  return(ubReturn);

} //  End of function CAN_ubRequestMsgObj


//****************************************************************************
// @Function      ubyte CAN_ubNewData(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function checks whether the selected RECEIVE OBJECT 
//                has received a new message. If so the function returns the 
//                value '1'.
//
//----------------------------------------------------------------------------
// @Returnvalue   1 the message object has received a new message, else 0
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (NewData,1)

// USER CODE END

ubyte CAN_ubNewData(ubyte ubObjNr)
{
  ubyte ubReturn;

  ubReturn = 0;
  if((CAN_HWOBJ[ubObjNr].uwMOCTR & 0x00000008))    // if NEWDAT 
  {
    ubReturn = 1;
  }
  return(ubReturn);

} //  End of function CAN_ubNewData


//****************************************************************************
// @Function      void CAN_vTransmit(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function triggers the CAN controller to send the 
//                selected message.
//                If the selected message object is a TRANSMIT OBJECT then 
//                this function triggers the sending of a data frame. If 
//                however the selected message object is a RECEIVE OBJECT 
//                this function triggers the sending of a remote frame.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (Transmit,1)

// USER CODE END

void CAN_vTransmit(ubyte ubObjNr)
{
  CAN_HWOBJ[ubObjNr].uwMOCTR = 0x07000000;  // set TXRQ,TXEN0,TXEN1

} //  End of function CAN_vTransmit


//****************************************************************************
// @Function      void CAN_vConfigMsgObj(ubyte ubObjNr, CAN_SWObj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function sets up the message objects. This includes 
//                the 8 data bytes, the identifier (11- or 29-bit), the 
//                acceptance mask (11- or 29-bit), the data number (0-8 
//                bytes), the frame counter value and the EDE-bit (standard 
//                or extended identifier).  The direction bit (DIR) can not 
//                be changed. 
//                The message is not sent; for this the function 
//                CAN_vTransmit must be called.
//                
//                The structure of the SW message object is defined in the 
//                header file CAN.h (see CAN_SWObj).
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be configured (0-127)
// @Parameters    *pstObj: 
//                Pointer on a message object
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (ConfigMsgObj,1)

// USER CODE END

void CAN_vConfigMsgObj(ubyte ubObjNr, CAN_SWObj *pstObj)
{
  ubyte i;

  CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00000020;     // reset MSGVAL

  if(pstObj->usMOCfg & 0x0004)                 // extended identifier
  {
    CAN_HWOBJ[ubObjNr].uwMOAR  &= ~0x3fffffff;
    CAN_HWOBJ[ubObjNr].uwMOAR  |= 0x20000000 | pstObj->uwID ;
    CAN_HWOBJ[ubObjNr].uwMOAMR &= ~0x1fffffff;
    CAN_HWOBJ[ubObjNr].uwMOAMR |= pstObj->uwMask ;
  }
  else                                         // standard identifier
  {
    CAN_HWOBJ[ubObjNr].uwMOAR  &= ~0x3fffffff;
    CAN_HWOBJ[ubObjNr].uwMOAR  |= pstObj->uwID << 18 ;
    CAN_HWOBJ[ubObjNr].uwMOAMR &= ~0x1fffffff;
    CAN_HWOBJ[ubObjNr].uwMOAMR |= pstObj->uwMask << 18 ;
  }

  CAN_HWOBJ[ubObjNr].uwMOIPR &= ~0xffff0000;
  CAN_HWOBJ[ubObjNr].uwMOIPR |= pstObj->usCounter << 16;

  CAN_HWOBJ[ubObjNr].uwMOFCR  = (CAN_HWOBJ[ubObjNr].uwMOFCR & ~0x0f000000) | ((pstObj->usMOCfg & 0x00f0) << 20);

  if(CAN_HWOBJ[ubObjNr].uwMOCTR & 0x00000800)  // if transmit direction
  {
    for(i = 0; i < (pstObj->usMOCfg & 0x00f0) >> 4; i++)
    {
      CAN_HWOBJ[ubObjNr].ubData[i] = pstObj->ubData[i];
    }
    CAN_HWOBJ[ubObjNr].uwMOCTR  = 0x06280040;  // set NEWDAT, reset RTSEL, 
  }                                            // set MSGVAL, set TXEN0, TXEN1
  else                                         // if receive direction
  {
    CAN_HWOBJ[ubObjNr].uwMOCTR  = 0x00200040;  // reset RTSEL, set MSGVAL
  }

} //  End of function CAN_vConfigMsgObj


//****************************************************************************
// @Function      void CAN_vLoadData(ubyte ubObjNr, ubyte *pubData) 
//
//----------------------------------------------------------------------------
// @Description   If a hardware TRANSMIT OBJECT has to be loaded with data 
//                but not with a new identifier, this function may be used 
//                instead of the function CAN_vConfigMsgObj. The message 
//                object should be accessed by calling the function 
//                CAN_ubRequestMsgObj before calling this function. This 
//                prevents the CAN controller from working with invalid data.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be configured (0-127)
// @Parameters    *pubData: 
//                Pointer on a data buffer
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (LoadData,1)

// USER CODE END

void CAN_vLoadData(ubyte ubObjNr, ubyte *pubData)
{
  ubyte i;

  CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00080000;       // set NEWDAT

  for(i = 0; i < (CAN_HWOBJ[ubObjNr].uwMOFCR & 0x0f000000) >> 24; i++)
  {
    CAN_HWOBJ[ubObjNr].ubData[i] = *(pubData++);
  }

  CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00200040;       // reset RTSEL, set MSGVAL

} //  End of function CAN_vLoadData


//****************************************************************************
// @Function      ubyte CAN_ubMsgLost(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   If a RECEIVE OBJECT receives new data before the old object 
//                has been read, the old object is lost. The CAN controller 
//                indicates this by setting the message lost bit (MSGLST). 
//                This function returns the status of this bit. 
//                
//                Note:
//                This function resets the message lost bit (MSGLST).
//
//----------------------------------------------------------------------------
// @Returnvalue   1 the message object has lost a message, else 0
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (MsgLost,1)

// USER CODE END

ubyte CAN_ubMsgLost(ubyte ubObjNr)
{
  ubyte ubReturn;

  ubReturn = 0;
  if(CAN_HWOBJ[ubObjNr].uwMOCTR & 0x00000010)  // if set MSGLST 
  {
    CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00000010;   // reset MSGLST 
    ubReturn = 1;
  }
  return(ubReturn);

} //  End of function CAN_ubMsgLost


//****************************************************************************
// @Function      ubyte CAN_ubDelMsgObj(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function marks the selected message object as not 
//                valid. This means that this object cannot be sent or 
//                receive data. If the selected object is busy (meaning the 
//                object is transmitting a message or has received a new 
//                message) this function returns the value "0" and the object 
//                is not deleted.
//
//----------------------------------------------------------------------------
// @Returnvalue   1 the message object was deleted, else 0
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (DelMsgObj,1)

// USER CODE END

ubyte CAN_ubDelMsgObj(ubyte ubObjNr)
{
  ubyte ubReturn;

  ubReturn = 0;
  if(!(CAN_HWOBJ[ubObjNr].uwMOCTR & 0x00000108)) // if set TXRQ or NEWDAT
  {
    CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00000020;     // reset MSGVAL
    ubReturn = 1;
  }
  return(ubReturn);

} //  End of function CAN_ubDelMsgObj


//****************************************************************************
// @Function      void CAN_vReleaseObj(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function resets the NEWDAT flag of the selected 
//                RECEIVE OBJECT, so that the CAN controller have access to 
//                it. This function must be called if the function 
//                CAN_ubNewData detects, that new data are present in the 
//                message object and the actual data have been read by 
//                calling the function CAN_vGetMsgObj. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (ReleaseObj,1)

// USER CODE END

void CAN_vReleaseObj(ubyte ubObjNr)
{
  CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00000008;     // reset NEWDAT

} //  End of function CAN_vReleaseObj


//****************************************************************************
// @Function      void CAN_vSetMSGVAL(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function sets the MSGVAL flag of the selected object. 
//                This is only necessary if the single data transfer mode 
//                (SDT) for the selected object is enabled. If SDT is set to 
//                '1', the CAN controller automatically resets bit MSGVAL 
//                after receiving or tranmission of a frame.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-127)
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (SetMSGVAL,1)

// USER CODE END

void CAN_vSetMSGVAL(ubyte ubObjNr)
{
  CAN_HWOBJ[ubObjNr].uwMOCTR = 0x00200000;     // set MSGVAL

} //  End of function CAN_vSetMSGVAL


//****************************************************************************
// @Function      ubyte CAN_ubWriteFIFO(ubyte ubObjNr, CAN_SWObj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function sets up the next free TRANSMIT message object 
//                which is part of a FIFO. This includes the 8 data bytes, 
//                the identifier (11- or 29-bit) and the data number (0-8 
//                bytes). The direction bit (DIR) and the EDE-bit can not be 
//                changed. The acceptance mask register and the Frame Counter 
//                remains unchanged. This function checks whether the choosen 
//                message object is still executing a transmit request, or if 
//                the object can be accessed exclusively. 
//                The structure of the SW message object is defined in the 
//                header file CAN.h (see CAN_SWObj).
//                Note: 
//                This function can only used for TRANSMIT objects which are 
//                configured for FIFO base functionality. 
//
//----------------------------------------------------------------------------
// @Returnvalue   0: message object is busy (a transfer is active); 1: the 
//                message object was configured and the transmite is 
//                requested; 2: this is not a FIFO base object
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the FIFO base object
// @Parameters    *pstObj: 
//                Pointer on a message object
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (WriteFIFO,1)

// USER CODE END

ubyte CAN_ubWriteFIFO(ubyte ubObjNr, CAN_SWObj *pstObj)
{
  ubyte i,j;
  ubyte ubReturn;

  ubReturn = 2;

  if((CAN_HWOBJ[ubObjNr].uwMOFCR & 0x0000000f) == 0x00000002)  // if transmit FIFO base object 
  {
    j = aubFIFOWritePtr[ubObjNr];

    ubReturn = 0;
    if((CAN_HWOBJ[j].uwMOCTR & 0x00000100) == 0x00000000) // if reset TXRQ 
    {
      if(j == (CAN_HWOBJ[j].uwMOCTR & 0xff000000) >> 24)  // last MO in a list
      {
        // WritePtr = BOT of the base object
        aubFIFOWritePtr[ubObjNr] = (CAN_HWOBJ[ubObjNr].uwMOFGPR & 0x000000ff);
      }
      else
      {
        // WritePtr = PNEXT of the current selected slave
        aubFIFOWritePtr[ubObjNr] = (CAN_HWOBJ[j].uwMOCTR & 0xff000000) >> 24;
      }

      CAN_HWOBJ[j].uwMOCTR = 0x00000008;                  // reset NEWDAT 

      if(CAN_HWOBJ[j].uwMOAR & 0x20000000)                // extended identifier
      {
        CAN_HWOBJ[j].uwMOAR  &= ~0x3fffffff;
        CAN_HWOBJ[j].uwMOAR  |= 0x20000000 | pstObj->uwID;
      }
      else                                                // if standard identifier
      {
        CAN_HWOBJ[j].uwMOAR  &= ~0x3fffffff;
        CAN_HWOBJ[j].uwMOAR  |= pstObj->uwID << 18 ;
      }

      CAN_HWOBJ[j].uwMOFCR  = (CAN_HWOBJ[j].uwMOFCR & ~0x0f000000) | ((pstObj->usMOCfg & 0x00f0) << 20);

      for(i = 0; i < (pstObj->usMOCfg & 0x00f0) >> 4; i++)
      {
        CAN_HWOBJ[j].ubData[i] = pstObj->ubData[i];
      }
      CAN_HWOBJ[j].uwMOCTR  = 0x01280000;                 // set TXRQ, NEWDAT, MSGVAL 
                                              
      ubReturn = 1;
    }
  }
  return(ubReturn);

} //  End of function CAN_ubWriteFIFO


//****************************************************************************
// @Function      ubyte CAN_ubReadFIFO(ubyte ubObjNr, CAN_SWObj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function reads the next RECEIVE message object which 
//                is part of a FIFO. It checks whether the selected RECEIVE 
//                OBJECT has received a new message. If so the forwarded SW 
//                message object is filled with the content of the HW message 
//                object and the functions returns the value "1". The 
//                structure of the SW message object is defined in the header 
//                file CAN.h (see CAN_SWObj).
//                Note: 
//                This function can only used for RECEIVE objects which are 
//                configured for FIFO base functionality. 
//                Be sure that no interrupt is enabled for the FIFO objects. 
//
//----------------------------------------------------------------------------
// @Returnvalue   0: the message object has not received a new message; 1: 
//                the message object has received a new message; 2: this is 
//                not a FIFO base object; 3: a previous message was lost; 4: 
//                the received message is corrupted
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the FIFO base object
// @Parameters    *pstObj: 
//                Pointer on a message object to be filled by this function
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (ReadFIFO,1)

// USER CODE END

ubyte CAN_ubReadFIFO(ubyte ubObjNr, CAN_SWObj *pstObj)
{
  ubyte i,j;
  ubyte ubReturn;

  ubReturn = 2;

  if((CAN_HWOBJ[ubObjNr].uwMOFCR & 0x0000000f) == 0x00000001)  // if receive FIFO base object 
  {
    j = aubFIFOReadPtr[ubObjNr];

    ubReturn = 0;
    if(CAN_HWOBJ[j].uwMOCTR & 0x00000008)                 // if NEWDAT 
    {
      CAN_HWOBJ[j].uwMOCTR = 0x00000008;                  // clear NEWDAT

      if(j == (CAN_HWOBJ[j].uwMOCTR & 0xff000000) >> 24)  // last MO in a list
      {
        // ReadPtr = BOT of the base object
        aubFIFOReadPtr[ubObjNr] = (CAN_HWOBJ[ubObjNr].uwMOFGPR & 0x000000ff);
      }
      else
      {
        // ReadPtr = PNEXT of the current selected slave
        aubFIFOReadPtr[ubObjNr] = (CAN_HWOBJ[j].uwMOCTR & 0xff000000) >> 24;
      }

      // check if the previous message was lost 
      if(CAN_HWOBJ[j].uwMOCTR & 0x00000010)               // if set MSGLST 
      {
        CAN_HWOBJ[j].uwMOCTR = 0x00000010;                // reset MSGLST 
        return(3);
      }

      pstObj->usMOCfg  = (CAN_HWOBJ[j].uwMOFCR & 0x0f000000) >> 24;
      for(i = 0; i < pstObj->usMOCfg; i++)
      {
        pstObj->ubData[i] = CAN_HWOBJ[j].ubData[i];
      }

      pstObj->usMOCfg  = (pstObj->usMOCfg << 4);
      if(CAN_HWOBJ[j].uwMOCTR & 0x00000800)               // transmit object
      {
        pstObj->usMOCfg  = pstObj->usMOCfg | 0x08;
      }

      if(CAN_HWOBJ[j].uwMOAR & 0x20000000)                // extended identifier
      {
        pstObj->uwID     = CAN_HWOBJ[j].uwMOAR & 0x1fffffff;
        pstObj->usMOCfg  = pstObj->usMOCfg | 0x04;
      }
      else                                                // standard identifier 
      {
        pstObj->uwID   = (CAN_HWOBJ[j].uwMOAR & 0x1fffffff) >> 18;
      }

      pstObj->usCounter = (CAN_HWOBJ[j].uwMOIPR & 0xffff0000) >> 16;

      // check if the message was corrupted 
      if(CAN_HWOBJ[j].uwMOCTR & 0x00000008)               // if NEWDAT 
      {
        CAN_HWOBJ[j].uwMOCTR = 0x00000008;                // clear NEWDAT
        return(4);
      }
      ubReturn = 1;
    }
  }
  return(ubReturn);

} //  End of function CAN_ubReadFIFO


//****************************************************************************
// @Function      void CAN_viSRN0(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the interrupt service routine for the Service 
//                Request Node 0 of the MultiCAN module. 
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (SRN0,1)

// USER CODE END

void CAN_viSRN0(void)
{

  uword uwNSR0;

  // USER CODE BEGIN (SRN0,2)

  // USER CODE END


  //   -----------------------------------------------------------------------
  //   Interrupts of CAN node 0
  //   -----------------------------------------------------------------------

  uwNSR0 = CAN_NSR0.reg;
  if (uwNSR0 & 0x00000008)  // if TXOK
  {
      // Indicates that a message has been transmitted successfully
      // (error free and acknowledged by at least another node).

      CAN_NSR0.reg      = 0x00000337;    // reset TXOK

      // USER CODE BEGIN (SRN0_NODE0,7)

      // USER CODE END
  }

  if (uwNSR0 & 0x00000010)  // if RXOK
  {
      // Indicates that a message has been received successfully.

      CAN_NSR0.reg      = 0x0000032F;    // reset RXOK

      // USER CODE BEGIN (SRN0_NODE0,8)

      // USER CODE END
  }


      CAN_MSIMASK.reg  = 0x00000002; // set message index mask register
  while (CAN_MSID0.reg != 0x00000020)
  {
    switch(CAN_MSID0.reg){

    case 1: // message object 1 interrupt 
    
      if(CAN_MOCTR1.stat.TXPND)        // if message object 1 transmit interrupt
      {

        // The transmission of the last message object
        // was successful.

        // USER CODE BEGIN (SRN0_OBJ1,5)

        // USER CODE END

        CAN_MOCTR1.reg = CAN_MOCTRm_CTR_RESNEWDAT_MASK;        // reset NEWDAT

       CAN_MOCTR1.reg = CAN_MOCTRm_CTR_RESTXPND_MASK;         // reset TXPND

      }  // End of TXPND1

       CAN_MSPND0.reg =  ~0x00000002; // reset PND bit

      // USER CODE BEGIN (SRN0_OBJ1,7)

      // USER CODE END

      break;

    default:

      // USER CODE BEGIN (SRN0,3)

      // USER CODE END

      break;

    }  // end switch 

    // USER CODE BEGIN (SRN0,7)

    // USER CODE END

  }  // end of while CAN_MSID


  // USER CODE BEGIN (SRN0,15)

  // USER CODE END

} //  End of function CAN_viSRN0


//****************************************************************************
// @Function      void CAN_viSRN1(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the interrupt service routine for the Service 
//                Request Node 1 of the MultiCAN module. 
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (SRN1,1)

// USER CODE END

void CAN_viSRN1(void)
{


  // USER CODE BEGIN (SRN1,2)

  // USER CODE END

      CAN_MSIMASK.reg  = 0x00000001; // set message index mask register
  while (CAN_MSID0.reg != 0x00000020)
  {
    switch(CAN_MSID0.reg){

    case 0: // message object 0 interrupt 
    
      if(CAN_MOCTR0.stat.TXPND)        // if message object 0 transmit interrupt
      {

        // The transmission of the last message object
        // was successful.

        // USER CODE BEGIN (SRN1_OBJ0,5)

        // USER CODE END

        CAN_MOCTR0.reg = CAN_MOCTRm_CTR_RESNEWDAT_MASK;        // reset NEWDAT

       CAN_MOCTR0.reg = CAN_MOCTRm_CTR_RESTXPND_MASK;         // reset TXPND

      }  // End of TXPND0

       CAN_MSPND0.reg =  ~0x00000001; // reset PND bit

      // USER CODE BEGIN (SRN1_OBJ0,7)

      // USER CODE END

      break;

    default:

      // USER CODE BEGIN (SRN1,3)

      // USER CODE END

      break;

    }  // end switch 

    // USER CODE BEGIN (SRN1,7)

    // USER CODE END

  }  // end of while CAN_MSID


  // USER CODE BEGIN (SRN1,15)

  // USER CODE END

} //  End of function CAN_viSRN1


//****************************************************************************
// @Function      void CAN_viSRN2(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the interrupt service routine for the Service 
//                Request Node 2 of the MultiCAN module. 
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          15/09/2014
//
//****************************************************************************

// USER CODE BEGIN (SRN2,1)

// USER CODE END

void CAN_viSRN2(void)
{


  // USER CODE BEGIN (SRN2,2)

  // USER CODE END

      CAN_MSIMASK.reg  = 0x0000000C; // set message index mask register
  while (CAN_MSID0.reg != 0x00000020)
  {
    switch(CAN_MSID0.reg){

    case 2: // message object 2 interrupt 
    
      if(CAN_MOCTR2.stat.RXPND)      // if message object 2 receive interrupt
      {

        if(CAN_MOCTR2.stat.NEWDAT)     // if NEWDAT is set
        {

          if (CAN_MOCTR2.stat.MSGLST)  // if MSGLST is set
          {
            // Indicates that the CAN controller has stored a new 
            // message into this object, while NEWDAT was still set,
            // ie. the previously stored message is lost.

            CAN_MOCTR2.reg = CAN_MOCTRm_CTR_RESMSGLST_MASK;    // reset MSGLST

            // USER CODE BEGIN (SRN2_OBJ2,1)

            // USER CODE END
          }
          else
          {
            // The CAN controller has stored a new message
            // into this object.

            // USER CODE BEGIN (SRN2_OBJ2,2)

            // USER CODE END
          }

          CAN_MOCTR2.reg = CAN_MOCTRm_CTR_RESNEWDAT_MASK;      // reset NEWDAT
        }

       CAN_MOCTR2.reg = CAN_MOCTRm_CTR_RESRXPND_MASK;         // reset RXPND
      }  // End of RXPND2


       CAN_MSPND0.reg =  ~0x00000004; // reset PND bit

      // USER CODE BEGIN (SRN2_OBJ2,7)

      // USER CODE END

      break;


    case 3: // message object 3 interrupt 
    
      if(CAN_MOCTR3.stat.RXPND)      // if message object 3 receive interrupt
      {

        if(CAN_MOCTR3.stat.NEWDAT)     // if NEWDAT is set
        {

          if (CAN_MOCTR3.stat.MSGLST)  // if MSGLST is set
          {
            // Indicates that the CAN controller has stored a new 
            // message into this object, while NEWDAT was still set,
            // ie. the previously stored message is lost.

            CAN_MOCTR3.reg = CAN_MOCTRm_CTR_RESMSGLST_MASK;    // reset MSGLST

            // USER CODE BEGIN (SRN2_OBJ3,1)

            // USER CODE END
          }
          else
          {
            // The CAN controller has stored a new message
            // into this object.

            // USER CODE BEGIN (SRN2_OBJ3,2)

            // USER CODE END
          }

          CAN_MOCTR3.reg = CAN_MOCTRm_CTR_RESNEWDAT_MASK;      // reset NEWDAT
        }

       CAN_MOCTR3.reg = CAN_MOCTRm_CTR_RESRXPND_MASK;         // reset RXPND
      }  // End of RXPND3


       CAN_MSPND0.reg =  ~0x00000008; // reset PND bit

      // USER CODE BEGIN (SRN2_OBJ3,7)

      // USER CODE END

      break;

    default:

      // USER CODE BEGIN (SRN2,3)

      // USER CODE END

      break;

    }  // end switch 

    // USER CODE BEGIN (SRN2,7)

    // USER CODE END

  }  // end of while CAN_MSID


  // USER CODE BEGIN (SRN2,15)

  // USER CODE END

} //  End of function CAN_viSRN2



// USER CODE BEGIN (CAN_General,10)

// USER CODE END

