#include "../LIB/STD_TYPES.h"
#include "../MCAL/MRCC/RCC.h"
#include "../MCAL/MGPIO/GPIO.h"
#include "../HAL/HLED/LED.h"
#include "../HAL/HSWITCH/SWITCH.h"


int main()
{
GPIO_Pin_tstr led;
u8 Local_var=0;
led.Mode=GPIO_MODE_OP_PP;
led.Port=GPIOB;
led.Pin=GPIO_PIN_7;
led.Speed=GPIO_SPEED_HIGH;
MRCC_ControlClockAHP1Peripheral(RCC_AHB1_GPIOB,RCC_ENABLE);
MGPIO_InitPin(&led);
MGPIO_SetPin(GPIOB,GPIO_PIN_0,GPIO_High);
MGPIO_GetPinState(GPIOB,GPIO_PIN_0,&Local_var);
MRCC_ControlClockAHP1Peripheral(RCC_AHB1_GPIOA,RCC_ENABLE);

  // Infinite loop
  while (1)
    {
       // Add your code here.
    }
  return 0;
}



// ----------------------------------------------------------------------------
