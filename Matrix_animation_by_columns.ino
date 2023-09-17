#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
byte array[3] = {B11111000,B10101000,B11111000}; //changed
void loop(){
for(int i=0; i<3; i++){  //changed
lc.setColumn(0, i, array[i]); //changed
delay(500); 
} 
}
