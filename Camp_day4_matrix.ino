#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

void num0() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00101000);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void num1() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00001000);
  delay(500);
}

void num2() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void num3() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void num4() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00101000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00001000);
  delay(500);
}

void num5() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void num6() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void num7() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00001000);
  delay(500);
}

void num8() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void num9() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00111000);
  delay(500);
}

void letF() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B10111000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00100000);
  delay(500);
}

void letH() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B01000100);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B01000100);
  delay(500);
}

void loop() { 
num0();
num1();
num2();
num3();
num4();
num5();
num6();
num7();
num8();
num9();
letF();
letH();
}