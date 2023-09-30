#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}//new below this
const int size = 8;
int r[size] = {0,1,2,3,4,5,6,7};  
int c[size] = {0,1,0,1,2,3,2,3}; 
void loop(){
for(int p=0; p<size; p++) lc.setLed(0,r[p],c[p],true);
}


