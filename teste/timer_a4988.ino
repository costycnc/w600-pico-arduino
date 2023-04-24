#include <MsTimer.h>
#include "Arduino.h"

bool stare=TRUE

void time_test_f(void)
{
  stare=!stare	
  digitalWrite(PB_18, stare);
}

void setup() {
  pinMode(PB_18, OUTPUT); 
  MsTimer1::set(1, time_test_f);
  MsTimer1::start();
  }
  
  void loop() {
}
