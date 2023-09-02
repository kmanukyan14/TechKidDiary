#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  randomSeed(analogRead(2));
}
int j, dot, height, width;
void line(){
  dot = map(analogRead(A0),0,1024,0,8);
  lc.setLed(0,7,dot,true);
  for(int i=0; i<=height; i++)lc.setLed(0,j,i,true);
  for(int i=height+width; i<=7; i++)lc.setLed(0,j,i,true);
}
void loop(){
  height = random(4); 
  width = random(2,5);
  for(j=0; j<8; j++){ 
  lc.clearDisplay(0);
  line();
  delay(200);
  if(j==7 && (dot<=height || dot>=height+width)){
    lc.clearDisplay(0); delay(2000);
  } 
}} 