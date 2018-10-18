/*
 * led-blink-avr-atmega32.c
 *
 * Created: 10/18/2018 10:09:51 PM
 * Author : ashumeow
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF; //Makes PORTC as Output
	while(1) //infinite loop
	{
		PORTC = 0xFF; //Turns ON All LEDs
		_delay_ms(1000); //1 second delay
		PORTC= 0x00; //Turns OFF All LEDs
		_delay_ms(1000); //1 second delay
	}
}
//DDRC = 0xFF makes all pins on PORTC as output pins
//PORTC = 0xFF makes all pins on PORTC Logic High (5V)
//PORTC = 0x00 makes all pins on PORTC Logic Low (0V)
//_delay_ms(1000) provides 1000 milliseconds delay.
//while(1) makes an infinite loop
