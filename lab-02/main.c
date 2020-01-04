#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#include <stdio.h>

#include "led.h"
#include "serial.h"
#include "timer.h"

void main (void) {
	uart_init();
	timer_init();
	LED_init();

	while (1) {
		OCR0A = 20;
		_delay_ms(100);
		OCR0A = 50;
		_delay_ms(100);
		OCR0A = 120;
		_delay_ms(100);
		OCR0A = 180;
		_delay_ms(100);
		OCR0A = 250;
		_delay_ms(100);
	}
}
