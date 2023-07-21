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

void lost(){ //new
lc.clearDisplay(0);
lc.setRow(0,2,B00010000);
lc.setRow(0,3,B00010000);
lc.setRow(0,4,B00011000);
delay(2000);
}

int padpos = 3;//new
void checkpos(){
  if(padpos==pos2 || padpos+1==pos2){Serial.println("win");} //new
  else{Serial.println("lost"); lost();} //new
}

void dot(){
  lc.setLed(0,pos,pos2,true);
  pos = pos + dir;
  pos2 = pos2 + dir2;
  if(pos == 6){dir = -1; checkpos();} //new
  if(pos == 0){dir = 1;}
  if(pos2 == 7){dir2 = -1;}
  if(pos2 == 0){dir2 = 1;}
}
void joystick(){ 
int x = analogRead(A0);
if(x<100 && padpos>0){padpos = padpos - 1;}
if(x>900 && padpos<6){padpos = padpos + 1;}
lc.setLed(0,7,padpos,true); 
lc.setLed(0,7,padpos+1,true); 
}

void loop(){
  lc.clearDisplay(0);
  joystick(); 
  dot();
  delay(200);
}






