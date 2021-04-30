#include "activity1.h"

int activity1(void)
{
DDRB |=(1<<PB0);
DDRD&=~(1<<PD2);
PORTD|=(1<<PD2);
DDRD&=~(1<<PD3);
PORTD|=(1<<PD3);

   if(BUTTON_ON && HEATER_ON)//the satisfying condition for the sensor to start working.
        {
        LED_ON;
        _delay_ms (2);
        return 1;
        }
        else{
        LED_OFF;
        _delay_ms (20);

        }
return 0;
}
