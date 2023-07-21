#include "LedControl.h"
#include <DHT11.h>
LedControl lc=LedControl(12,10,11,1);
DHT11 dht11(2);

int t = 1000;

void setup() {
  Serial.begin(9600);
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

float C, F;
void measuretemp(){
  C = dht11.readTemperature();
  F = C*9/5+32;
  Serial.print("Temperature: ");
  Serial.print(F);
  Serial.println(" F");
}

float H;
void measurehum(){
  H = dht11.readHumidity();
  Serial.print("Humidity: ");
  Serial.print(H);
  Serial.println(" % H");
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
  delay(t);
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
  delay(t);
}

void num4() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00101000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00001000);
  delay(t);
}

void num5() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00111000);
  delay(t);
}

void num6() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00111000);
  delay(t);
}

void num7() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00001000);
  delay(t);
}

void num8() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00111000);
  delay(t);
}

void num9() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00111000);
  delay(t);
}

void letF() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B10111000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00100000);
  delay(t);
}

void letH() {
  lc.clearDisplay(0);
  lc.setRow(0,2,B01000100);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B01000100);
  delay(t);
}

void printnum(int num){
  switch(num){
    case 0: num0(); break;
    case 1: num1(); break;
    case 2: num2(); break;
    case 3: num3(); break;
    case 4: num4(); break;
    case 5: num5(); break;
    case 6: num6(); break;
    case 7: num7(); break;
    case 8: num8(); break;
    case 9: num9(); break;
    default: Serial.println(" other button   ");
  }
}

void loop() { 
measuretemp();
int num1, num2;
num1 = F/10;
num2 = F-num1*10;
printnum(num1);
printnum(num2);
letF();
measurehum();
num1 = H/10;
num2 = H-num1*10;
printnum(num1);
printnum(num2);
letH();
}