//PWM_LED
#include <avr/io.h>
#include <avr/iom2560.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "source.h"

void PWM_Init(void);
void LED_Init(void);
void KEY_Init(void);

int main() {

	PWM_Init();
	LED_Init();
	KEY_Init();

	while (1) {

		uint8_t i,j;

		LED_PORT = 0x00;

		if (key2_stan) {

			for (i = 0; i < 255; i++) {		//petla na rozjasnianie
				OCR0A = i;
				_delay_ms(5);
			}

			LED_PORT = 0xFF;
		}

		else	{
			for(i=j; j; j--)		{
			OCR0A=j;
			 _delay_ms(5);
		    }
		}


	}
}

void PWM_Init(void) {
	TCCR0A |= (1 << WGM01) | (1 << WGM00) | (1 << WGM02);//Timer0  Fast PWM
	// TCCR0A |= (1<<COM0A0) | (1<<COM0A1);      // Clear OC0 at top
	TCCR0A |= (1 << COM0A1);		// Set OC0 at TOP (HIGH avitve)
	TCCR0B |= (1 << CS00);      // preskaler = 1
}

void LED_Init(void) {
	DDRB |= 0xFF;
	LED_DDR = 0xFF;
}

void KEY_Init(void) {
	KEY_DDR = 0x00;
	KEY_PORT = 0xFF;
}

