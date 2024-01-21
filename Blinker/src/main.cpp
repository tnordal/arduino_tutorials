#include <Arduino.h>

int pin = 13;
int pause = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delay(pause);
  digitalWrite(pin, LOW);
  delay(pause);
}
