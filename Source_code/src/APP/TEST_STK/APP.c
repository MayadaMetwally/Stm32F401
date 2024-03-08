#include "STD_TYPES.h"
#include "MRCC/RCC.h"
#include "HLED/LED.h"
#include "HSWITCH/SWITCH.h"
#include "MNVIC/MNVIC.h"
#include "STK/STK.h"
#include "APP.h"



int main()
{
	//u32 Local_Rtime=0;
	//u32 Local_Ltime=0;

    MSTK_Init();
    HLED_Init();

    MSTK_SetIntervalPeriodicMS(2000,toggle);

      /*MSTK_SetBusyWaitMS(1000);
      MSTK_GetElapsedTimeMS(&Local_Ltime);
      MSTK_GetRemainingTimeMS(&Local_Rtime);
	  HLED_SetStatus(LED_RED,LED_ON);
	  MSTK_SetBusyWaitMS(1000);
	  HLED_SetStatus(LED_GREEN,LED_ON);*/



  // Infinite loop
  while (1)
    {
	  /*MSTK_SetBusyWaitMS(1000);
	  HLED_SetStatus(LED_RED,LED_ON);
	  MSTK_SetBusyWaitMS(1000);
	  HLED_SetStatus(LED_GREEN,LED_ON);
	  MSTK_SetBusyWaitMS(1000);
	  HLED_SetStatus(LED_GREEN,LED_OFF);
	  HLED_SetStatus(LED_RED,LED_OFF);*/
       // Add your code here.



    }
  return 0;
}

void toggle (void){
HLED_Toggle(LED_YELLOW);


}


// ----------------------------------------------------------------------------
