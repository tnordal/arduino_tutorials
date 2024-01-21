#include <Arduino.h>

#define analogPin A2
#define blinkPin 13
#define lightOnPin 7
#define lightOffPin 6

int lightOff = 200;
int lightOn = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  pinMode(blinkPin, OUTPUT);
  pinMode(lightOnPin, OUTPUT);
  pinMode(lightOffPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(analogPin);
  digitalWrite(blinkPin, HIGH);
  Serial.println(value);
  delay(value);
  digitalWrite(blinkPin, LOW);
  delay(value);
  if (value >lightOn)
  {
    digitalWrite(lightOnPin, HIGH);
    digitalWrite(lightOffPin, LOW);
  }
  else {
    digitalWrite(lightOnPin, LOW);
    digitalWrite(lightOffPin, HIGH);
  }
  
}
