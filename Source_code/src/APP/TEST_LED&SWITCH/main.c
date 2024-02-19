#include "../LIB/STD_TYPES.h"
#include "../MCAL/MRCC/RCC.h"
#include "../MCAL/MGPIO/GPIO.h"
#include "../HAL/HLED/LED.h"
#include "../HAL/HSWITCH/SWITCH.h"


int main()
{
HLED_Init();
HSWITCH_Init();

u8 Local_var=0;

MRCC_ControlClockAHP1Peripheral(RCC_AHB1_GPIOA,RCC_ENABLE);

  // Infinite loop
  while (1)
    {
       // Add your code here.
	  HSWITCH_GetSwitchStatus(SWITCH_01,&Local_var);
			  if(Local_var==SWITCH_PRESSED)
			  {
				  HLED_SetStatus(LED_RED,LED_ON);
			  }
			  else
			  {
				  HLED_SetStatus(LED_RED,LED_OFF);
			  }
    }
  return 0;
}



// ----------------------------------------------------------------------------
