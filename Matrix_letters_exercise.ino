#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

void A() {
  lc.clearDisplay(0);
  lc.setRow(0,3,B00111111);
  lc.setRow(0,4,B01000100);
  lc.setRow(0,5,B01000100);
  lc.setRow(0,6,B01000100);
  lc.setRow(0,7,B00111111);
  delay(500);
}

void r() {
  lc.clearDisplay(0);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00001000);
  lc.setRow(0,7,B00011111);
  delay(500);
}

void m() {
  lc.clearDisplay(0);
  lc.setRow(0,1,B00001111);
  lc.setRow(0,2,B00010000);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00001111);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00011111);
  delay(500);
}

void loop() { 
A();
r();
m();
}
