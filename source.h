/*
 * source.h
 *
 *	 Created on: 14 lis 2013
 *      Author: michal
 *
 *   Notes: Makra do Arduino_Mega
 */

#ifndef SOURCE_H_
#define SOURCE_H_

#define LED_DDR DDRA
#define LED_PORT PORTA
#define LED1 (1<<PA0)		// pin 22
#define LED2 (1<<PA1)		// pin 23
#define LED3 (1<<PA2)		// pin 24
#define LED4 (1<<PA3)		// pin 25
#define LED5 (1<<PA4)		// pin 26
#define LED6 (1<<PA5)		// pin 27
#define LED7 (1<<PA6)		// pin 28
#define LED8 (1<<PA7)		// pin 29

#define KEY_DDR DDRC
#define KEY_PORT PORTC
#define KEY_PIN PINC
#define KEY1 PC0		//pin 37
#define KEY2 PC1		//pin 36
#define KEY3 PC2		//pin 34

#define key1_stan (!(PINC & KEY1))
#define key2_stan (!(PINC & KEY2))
#define key3_stan (!(PINC & KEY3))

#endif /* SOURCE_H_ */
