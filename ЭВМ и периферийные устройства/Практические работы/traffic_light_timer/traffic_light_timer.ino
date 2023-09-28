#include "pico.h"
#include "hardware/timer.h"

struct repeating_timer timer;
volatile int i = 2;

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  add_repeating_timer_ms(3000, my_timer, nullptr, &timer);
}

bool my_timer(struct repeating_timer *t) {
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);

  i = (i + 1) % 3;
  digitalWrite(i, HIGH);
  return true;
}

void loop() {}