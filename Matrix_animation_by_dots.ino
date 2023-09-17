#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
int array[8] = {4,5,4,3,6,5,6,5}; //changed
int array2[8] = {0,1,2,3,0,1,2,3}; //changed
void loop(){
for(int i=0; i<8; i++){ //changed 
//lc.clearDisplay(0); //changed 
lc.setLed(0, array2[i], array[i], true); 
delay(500); 
} 
}
