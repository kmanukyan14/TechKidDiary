#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);

int pos = 0;
int dir = 1; //direction of movement, +1 or -1
int pos2 = 3;
int dir2 = 1;

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
  pinMode(A0,INPUT);
  Serial.begin(9600); //new
}

void dot(){
  lc.setLed(0,pos,pos2,true);
  pos = pos + dir;
  pos2 = pos2 + dir2;
  if(pos == 6){dir = -1;}
  if(pos == 0){dir = 1;}
  if(pos2 == 7){dir2 = -1;}
  if(pos2 == 0){dir2 = 1;}
}

void joystick(){ //new
  int x = analogRead(A0);
  if(x<100){Serial.println("left")}
  if(x>900){Serial.println("right")}
}

void loop(){
  lc.clearDisplay(0);
  joystick(); //new
  dot();
  delay(200);
}






