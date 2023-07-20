#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

void num0() {
  lc.clearDisplay(0);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00101000);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00101000);
  lc.setRow(0,7,B00111000);
  delay(500);
}

void loop() { 
num0();
}
