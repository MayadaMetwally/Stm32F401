/************************************************************************************************************
 *************************            File Name: SWITCH.c                             ************************
 *************************            Layer	   : HAL                                  ************************
 *************************            Module   : SWITCH                               ************************
 *************************            Version  : V 0.0                                ************************
 *************************            Created  : 2/16/2023                            ************************
 *************************            Author   : Mayada Metwally                      ************************
 *************************    Brief: This source file implements functions for LED driver********************.
 ************************************************************************************************************/

#include "STD_TYPES.h"
#include "HSWITCH/SWITCH.h"
#include "MGPIO/GPIO.h"
#include "MRCC/RCC.h"
extern const SWITCH_tstr SWITCH[_NUM_SWITCH];
tenu_ErrorStatus HSWITCH_Init(void)
{
	tenu_ErrorStatus Local_ErrorStatus=LBTY_OK;
	MRCC_ControlClockAHP1Peripheral(RCC_AHB1_GPIOB,RCC_ENABLE);
	MRCC_ControlClockAHP1Peripheral(RCC_AHB1_GPIOA,RCC_ENABLE);
	GPIO_Pin_tstr Switch_Pin;
	Switch_Pin.Speed=GPIO_SPEED_HIGH;
	for(u8 idk=0;idk<_NUM_SWITCH;idk++)
	{
		Switch_Pin.Mode=SWITCH[idk].MODE;
		Switch_Pin.Pin=SWITCH[idk].PIN;
		Switch_Pin.Port=SWITCH[idk].PORT;
		MGPIO_InitPin(&Switch_Pin);
	}
	return Local_ErrorStatus;
}


tenu_ErrorStatus HSWITCH_GetSwitchStatus(u8 Copy_SwitchName, u8 *ADD_SwitchStatus)
{
	tenu_ErrorStatus Local_ErrorStatus=LBTY_OK;
	u8 Local_Status=0;
	if(ADD_SwitchStatus==NULL||Copy_SwitchName>_NUM_SWITCH)
	{
		Local_ErrorStatus=LBTY_NOK;
	}
	Local_ErrorStatus=MGPIO_GetPinState(SWITCH[Copy_SwitchName].PORT,SWITCH[Copy_SwitchName].PIN,&Local_Status);
	*ADD_SwitchStatus=!(Local_Status^(SWITCH[Copy_SwitchName].MODE>>SWITCH_OFFSET_4));

	return Local_ErrorStatus;
}
