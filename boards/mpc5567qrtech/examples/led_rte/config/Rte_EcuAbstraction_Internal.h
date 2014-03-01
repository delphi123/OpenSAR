/*
* Configuration of module: Rte (Rte_EcuAbstraction_Internal.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5567
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_EcuAbstraction.h */

#ifndef RTE_ECUABSTRACTION_H
#define RTE_ECUABSTRACTION_H

#include "Rte_Type.h"

#define RTE_E_DigitalOutput_E_NOT_OK 1

Std_ReturnType DigitalOutput_Set(IoHwAb_SignalType SignalId,
		const DigitalLevel value);

Std_ReturnType DigitalOutput_ReadBack(IoHwAb_SignalType SignalId,
		DigitalLevel* value);

#endif
