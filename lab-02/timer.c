#include <avr/io.h>

#include "timer.h"

void timer_init() {
	TCCR0A |= (1 << WGM01)|(1 << WGM00);
  TCCR0B |= (0 << WGM02);
  TCCR0B |= (0 << CS02)|(1 << CS01)|(1 << CS00);
  TCCR0A |= (1 << COM0A1)|(0 << COM0A0);

  //OCR0A = 77
  //TCNT0 = 0
}
