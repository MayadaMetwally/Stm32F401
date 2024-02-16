/************************************************************************************************************
 *************************            File Name: LED_Cfg.h                           ************************
 *************************            Layer	   : HAL                                 ************************
 *************************            Module   : LED                                 ************************
 *************************            Version  : V 0.0                               ************************
 *************************            Created  : 2/16/2023                           ************************
 *************************            Author   : Mayada Metwally                     ************************
 **************Brief: This Source file defines the user configuration externs for LED driver*****************.
 ************************************************************************************************************/
#include "../../LIB/STD_TYPES.h"
#include"LED.h"
#include "../../MCAL/MGPIO/GPIO.h"
 const LEDSCfg_tstr LEDS[_LED_NUM]={
	[LED_GREEN]={.Port=GPIOA,.Pin=GPIO_PIN_0,.Connection=LED_ACTIVE_HIGH,.DefaultState=LED_OFF},
	[LED_RED]={.Port=GPIOA,.Pin=GPIO_PIN_1,.Connection=LED_ACTIVE_HIGH,.DefaultState=LED_OFF},
	[LED_YELLOW]={.Port=GPIOA,.Pin=GPIO_PIN_2,.Connection=LED_ACTIVE_HIGH,.DefaultState=LED_OFF}


};
