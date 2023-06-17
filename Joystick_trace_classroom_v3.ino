#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
int x, y, row, col;
void readJoystick(){
  x=analogRead(A0);
  y=analogRead(A1);
  }
void setup() {
pinMode(2,INPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
lc.shutdown(0,false);
lc.setIntensity(0,8);
lc.clearDisplay(0);
}

void mapJoystick(){
    row=map(y, 0, 1024, 0, 8);
    col=map(x, 0, 1024, 0, 8);
  }
void loop() {
readJoystick();
mapJoystick(); //new
lc.setLed(0,3,3, true);
Serial.println("x, y");
Serial.println(col);
Serial.println(row);
delay(500);
}
