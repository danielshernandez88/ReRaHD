//****************************************************************************
// @Module        MultiCAN Controller 
// @Filename      CAN.h
// @Project       dave_project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon TC1797
//
// @Compiler      Hightec GNU 3.4.5
//
// @Codegenerator 1.0
//
// @Description   This file contains all function prototypes and macros for 
//                the CAN module.
//
//----------------------------------------------------------------------------
// @Date          15/09/2014 10:17:50
//
//****************************************************************************

// USER CODE BEGIN (CAN_Header,1)

// USER CODE END



#ifndef _CAN_H_
#define _CAN_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (CAN_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (CAN_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (CAN_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

///  -------------------------------------------------------------------------
///  @Definition of a structure for the CAN data
///  -------------------------------------------------------------------------

// The following data type serves as a software message object. Each access to
// a hardware message object has to be made by forward a pointer to a software
// message object (CAN_SWObj). The data type has the following fields:
//
// usMOCfg:
// this byte contains the "Data Lenght Code" (DLC), the 
// "Extended Identifier" (IDE) and the "Message Direction" (DIR).
//
//
//         7     6     5      4    3     2     1     0
//      |------------------------------------------------|
//      |        DLC            | DIR | IDE |      |     |
//      |------------------------------------------------|
//
// uwID: 
// this field is four bytes long and contains either the 11-bit identifier 
// or the 29-bit identifier
//
// uwMask: 
// this field is four bytes long and contains either the 11-bit mask 
// or the 29-bit mask
//
// ubData[8]:
// 8 bytes containing the data of a frame
//
// usCounter:
// this field is two bytes long and contains the counter value 
//

typedef struct
  {
     ushort usMOCfg;    // message object configuration register
     uword  uwID;       // standard (11-bit)/extended (29-bit) identifier
     uword  uwMask;     // standard (11-bit)/extended (29-bit) mask
     ubyte  ubData[8];  // 8-bit data bytes
     ushort usCounter;  // frame counter
  }CAN_SWObj;

// USER CODE BEGIN (CAN_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void CAN_vInit(void);
void CAN_vGetMsgObj(ubyte ubObjNr, CAN_SWObj *pstObj);
ubyte CAN_ubRequestMsgObj(ubyte ubObjNr);
ubyte CAN_ubNewData(ubyte ubObjNr);
void CAN_vTransmit(ubyte ubObjNr);
void CAN_vConfigMsgObj(ubyte ubObjNr, CAN_SWObj *pstObj);
void CAN_vLoadData(ubyte ubObjNr, ubyte *pubData);
ubyte CAN_ubMsgLost(ubyte ubObjNr);
ubyte CAN_ubDelMsgObj(ubyte ubObjNr);
void CAN_vReleaseObj(ubyte ubObjNr);
void CAN_vSetMSGVAL(ubyte ubObjNr);
ubyte CAN_ubWriteFIFO(ubyte ubObjNr, CAN_SWObj *pstObj);
ubyte CAN_ubReadFIFO(ubyte ubObjNr, CAN_SWObj *pstObj);


// USER CODE BEGIN (CAN_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

#define CAN_SRN0INT    0x02
#define CAN_SRN1INT    0x03
#define CAN_SRN2INT    0x04

// USER CODE BEGIN (CAN_Header,9)

// USER CODE END


#endif  // ifndef _CAN_H_
