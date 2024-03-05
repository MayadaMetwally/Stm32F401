#include "STD_TYPES.h"
#include "MRCC/RCC.h"
#include "MGPIO/GPIO.h"
#include "HLED/LED.h"
#include "HSWITCH/SWITCH.h"
#include "MNVIC/MNVIC.h"

void EXTI1_IRQHandler(void)
{
	u8 Local_status=2;
	u8 Local_status2=3;
	HLED_SetStatus(LED_RED,LED_ON);
	MNVIC_SetPanding(NVIC_IRQ_EXTI0);
	MNVIC_GetActiveStatus(NVIC_IRQ_EXTI0,&Local_status);
	MNVIC_GetActiveStatus(NVIC_IRQ_EXTI1,&Local_status2);
	HLED_SetStatus(LED_YELLOW,LED_ON);

}

void EXTI0_IRQHandler(void)
{
	u8 Local_status=2;
	u8 Local_status2=3;

	HLED_SetStatus(LED_GREEN,LED_ON);
	MNVIC_GetActiveStatus(NVIC_IRQ_EXTI0,&Local_status);
	MNVIC_GetActiveStatus(NVIC_IRQ_EXTI1,&Local_status2);

}

int main()
{

HLED_Init();
MNVIC_Init();


MNVIC_SetPriority(NVIC_IRQ_DMA1_STREAM0,0b0001);
MNVIC_SetPriority(NVIC_IRQ_DMA1_STREAM2,0b0111);

MNVIC_EnableInterrupt(NVIC_IRQ_EXTI0);

MNVIC_SetPanding(NVIC_IRQ_EXTI1);
MNVIC_EnableInterrupt(NVIC_IRQ_EXTI1);

MNVIC_DisableInterrupt(NVIC_IRQ_ADC);


  // Infinite loop
  while (1)
    {
       // Add your code here.

    }
  return 0;
}


// ----------------------------------------------------------------------------
