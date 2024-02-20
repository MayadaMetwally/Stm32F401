#include "STD_TYPES.h"
#include "MRCC/RCC_Private.h"
#include "MRCC/RCC_Reg.h"
#include "MRCC/RCC.h"


int main()
{
  // At this stage the system clock should have already been configured
  // at high speed.
	u8 Local_Clock=1;
	u8 Local_SYSClock=1;
	u8 Local_HSEReady=0;
	//u8 Local_HSIReady=0;
	u8 Local_PLLReady=0;

MRCC_SelectPLLPFactor(RCC_PLLP_8);
MRCC_SelectPLLNFactor(RCC_PLLN_MAX);
MRCC_SelectPLLMFactor(RCC_PLLM_MAX);
MRCC_SelectPLLPFactor(RCC_PLLP_4);
MRCC_SelectPLLNFactor(RCC_PLLN_MIN);
MRCC_SelectPLLMFactor(RCC_PLLM_MIN);
MRCC_SelectPLLPFactor(RCC_PLLP_6);
MRCC_EnablePeripheralClock(RCC_AHB1,RCC_AHB1_GPIOA);
MRCC_ControlClockAHP1Peripheral(RCC_AHB1_GPIOB,RCC_ENABLE);
MRCC_ControlClock(RCC_CLOCK_HSE_CRUSTAL,RCC_ENABLE);
MRCC_ControlClock(RCC_CLOCK_PLL,RCC_ENABLE);
MRCC_CheckHSEStatus(&Local_HSEReady);
MRCC_CheckPLLStatus(&Local_PLLReady);
MRCC_GetPLLInputClock(&Local_Clock);
MRCC_GetSystemClock(&Local_SYSClock);
MRCC_EnablePeripheralClock(RCC_AHB1,RCC_AHB1_GPIOA);

  // Infinite loop
  while (1)
    {
       // Add your code here.
    }
  return 0;
}



// ----------------------------------------------------------------------------
