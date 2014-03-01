/*
* Configuration of module: Rte (Rte_Blinker.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_Blinker.c */
#include <string.h>
#include "Os.h"
#include "Rte_Blinker.h"
#include "Rte_Data.h"
#include "Rte_EcuAbstraction.h"

Std_ReturnType Rte_Call_Blinker_LED_Port_Set(const DigitalLevel value) {
	return Rte_DigitalOutput_Set(0, value);
}

