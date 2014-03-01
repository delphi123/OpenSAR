/*
* Configuration of module: Adc (Adc_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.0
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "Adc.h"

Adc_GroupStatus AdcGroupStatus[ADC_NBR_OF_GROUPS];
	


const Adc_HWConfigurationType AdcHWUnitConfiguration[] =
{
	{
		.convTime = ADC_CONVERSION_TIME_16_CLOCKS,
		.resolution = ADC_RESOLUTION_8_BIT,
		.adcPrescale = ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_30,
	},
};

const Adc_ChannelType Adc_MainGroupChannelList[ADC_NBR_OF_MAINGROUP_CHANNELS] =
{	
	ADC_CH2,
};

Adc_ValueGroupType Adc_MainGroupBuffer [sizeof(Adc_MainGroupChannelList)/sizeof(Adc_MainGroupChannelList[0])];

const Adc_GroupDefType AdcGroupConfiguration [] =
{
	{
		.conversionMode 	= ADC_CONV_MODE_CONTINUOUS,
		.triggerSrc 		= ADC_TRIGG_SRC_HW,
		.groupCallback 		= NULL,
		.channelList 		= Adc_MainGroupChannelList,
		.resultBuffer       = Adc_MainGroupBuffer,		
		.numberOfChannels   = sizeof(Adc_MainGroupChannelList)/sizeof(Adc_MainGroupChannelList[0]),
		.status             = &AdcGroupStatus[0],		
	},
};

const Adc_ConfigType AdcConfig[] =
{
  {
   .hwConfigPtr      = AdcHWUnitConfiguration,
   .groupConfigPtr   = AdcGroupConfiguration,
   .nbrOfGroups      = ADC_NBR_OF_GROUPS,
  }
};

