
#define F_CPU 20000000
#define ledCount 8
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdint.h>
#include "WS2812B.h"
#include <avr/xmega.h>


int main(void)
{

	_PROTECTED_WRITE(CLKCTRL.MCLKCTRLB, 0x00);
	WsInit;

	int i;
	while(1)
	{
		for (i = 0; i < ledCount; i++) WsSendPixel(0, 255, 0);
		_delay_ms(1000);
		for (i = 0; i < ledCount; i++) WsSendPixel(255, 0, 0);
				_delay_ms(1000);
				for (i = 0; i < ledCount; i++) WsSendPixel(0, 0, 255);
					_delay_ms(1000);
						for (i = 0; i < ledCount; i++) WsSendPixel(255, 255, 255);
						_delay_ms(1000);		
		WsClear(ledCount);
		_delay_ms(1000);

	
	}
	
}
