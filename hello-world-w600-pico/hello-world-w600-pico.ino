#include <Arduino.h>

#define PIN_A0 (WM_IO_PA_00) //onboard led w600-pico

void setup() {
  pinMode(PIN_A0, OUTPUT);
}

void loop() {
Serial.println("Hello World!");
digitalWrite(PIN_A0, HIGH);
delay(1000);
digitalWrite(PIN_A0, LOW);
delay(1000);

}