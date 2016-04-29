/*
 * WS2811_Pixels.c
 *
 * Created: 09/06/2014 08:30:10 ب.ظ
 *  Author: LightIran
 */ 

#define F_CPU 8000000

#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "light_ws2812.h"

//struct cRGB led[2];
struct cRGB led[3];

int main(void)
{
	
	while(1)
	{
		for(int i=0,j=255;i<255;i++,j--)
		{
			led[0].r = i;
			led[0].g = 0;
			led[0].b = j;
			led[1].r = j;
			led[1].g = 0;
			led[1].b = i;
			led[2].r = 0;
			led[2].g = 0;
			led[2].b = 255;
			//ws2812_setleds(led,2);
			ws2812_setleds(led,3);
			_delay_us(50);		
		}
	}
}