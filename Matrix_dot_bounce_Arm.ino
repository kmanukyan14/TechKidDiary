#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);

int pos = 0;

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

/*
void loop() {
  for(pos = 0; pos<8; pos++){
    lc.clearDisplay(0);
    lc.setLed(0,3,pos,true);
    delay(200);
  }
}
*/

void loop(){
  lc.clearDisplay(0);
  lc.setLed(0,3,pos,true);
  delay(200);
  pos = pos + 1;
  if(pos == 8){pos = 0;}
}