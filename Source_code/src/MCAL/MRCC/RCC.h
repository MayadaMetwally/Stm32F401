/************************************************************************************************************
 *************************            File Name: RCC.h                               ************************
 *************************            Layer	   : MCAL                                ************************
 *************************            Module   : RCC                                 ************************
 *************************            Version  : V 0.0                               ************************
 *************************            Created  : 2/4/2023                            ************************
 *************************            Author   : Mayada Metwally                     ************************
 *************************    Brief: This header file defines  functions for RCC driver**********************.
 ************************************************************************************************************/

#ifndef MCAL_RCC_H_
#define MCAL_RCC_H_

/*--------------------------------------------- APIs Interfaces ------------------------------------------*/

/************************************Function Enable Peripheral Clock************************************/

/*
 *@brief      : Function to Enable Peripheral Clock based on the provided input.
 *@param[in1] : Copy_u8BusId, is a Bus ID (AHB1,AHB2,APB1,APB2)
 *@param[in2] : Copy_u8PerId is The pin number of the peripheral in reg
 *@return     : tenu_ErrorStatus indicating the success or failure of the Function.
 *@details	  : This function Enables Peripheral Clock based on input parameter type of bus and number
 *of peripheral pin in Register   .
 * @note	  : The function returns an error if user enters a number greater than ٌRCC_NUMBER_OF_PINS(31) .
 */
tenu_ErrorStatus MRCC_EnablePeripheralClock(u8 BusId,u8 PerId);

/************************************Function Disable Peripheral Clock************************************/
/*
 *@brief      : Function to Disable Peripheral Clock based on the provided input.
 *@param[in1] : Copy_u8BusId, is a Bus ID (AHB1,AHB2,APB1,APB2)
 *@param[in2] : Copy_u8PerId is The pin number of the peripheral in reg
 *@return     : tenu_ErrorStatus indicating the success or failure of the Function.
 *@details	  : This function Disables Peripheral Clock based on input parameter type of bus and number
 *of peripheral pin in Register   .
 * @note	  : The function returns an error if user enters a number greater than ٌRCC_NUMBER_OF_PINS(31) .
 */
tenu_ErrorStatus MRCC_DisablePeripheralClock(u8 BusId,u8 PerId);
/************************************Functions Control Peripheral Clock************************************/
tenu_ErrorStatus MRCC_ControlClockAHP1Peripheral(u32 AHB1Peripheral,u8 Status);
tenu_ErrorStatus MRCC_ControlClockAHP2Peripheral(u32 AHB2Peripheral,u8 Status);
tenu_ErrorStatus MRCC_ControlClockABP1Peripheral(u32 APB1Peripheral,u8 Status);
tenu_ErrorStatus MRCC_ControlClockABP2Peripheral(u32 APB2Peripheral,u8 Status);
/************************************Function Init System Clock************************************/
/* @brief	 : Initializes the System Clock based on the provided configuration.
 * @param[in]: Void.
 * @return	 : tenu_ErrorStatus indicating the success or failure of the initialization.
 * @details	 : This function initializes the System Clock based on the configuration provided in the @ref RCC_Cfg.h.
 * It configures the System Clock  and PLL input clock.
 * The initialization process follows the steps recommended in the RM0368 Reference Manual - stm32f401.
 * @note	 : The function returns an error if a Wrong Choice is provided as the configuration .
 */
tenu_ErrorStatus MRCC_InitSystemClock(void);

/******************************Function to Control Clock (Enable/Disable)*******************************/
tenu_ErrorStatus MRCC_ControlClock(u8 SystemName,u8 Status);
/******************************Function to CHECK Clock (Ready/Not Ready)*******************************/
tenu_ErrorStatus MRCC_CheckHSIStatus(u8 *Status);
tenu_ErrorStatus MRCC_CheckHSEStatus(u8 *Status);
tenu_ErrorStatus MRCC_CheckPLLStatus(u8 *Status);
/******************************Function to Select System Clock****************************************/
tenu_ErrorStatus MRCC_SelectSystemClock(u8 SystemClock);
/******************************Function to Get System Clock****************************************/
tenu_ErrorStatus MRCC_GetSystemClock(u8 *SystemClock);
/******************************Function to Get PLL INPUT Clock****************************************/
tenu_ErrorStatus MRCC_GetPLLInputClock(u8 *PLLInputClock);
/******************************Function to Select PLL INPUT Clock****************************************/
tenu_ErrorStatus MRCC_SelectPLLInputClock(u8 PLLInputClock);
/******************************Function to Select P factor for PLL****************************************/
tenu_ErrorStatus MRCC_SelectPLLPFactor(u32 PLLPFactor);
/******************************Function to Select M factor for PLL****************************************/
tenu_ErrorStatus MRCC_SelectPLLMFactor(u32 PLLMFactor);
/******************************Function to Select N factor for PLL****************************************/
tenu_ErrorStatus MRCC_SelectPLLNFactor(u32 PLLNFactor);


#endif /* MCAL_RCC_H_ */
