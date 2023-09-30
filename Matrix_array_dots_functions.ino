#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
int rows[7] =    {3,1,1,3,1,2,2}; //new
int columns[7] = {0,5,3,1,7,2,3}; //changed
void sequence(){
  for(int p=0; p<sizeof(columns); p++){ 
    lc.setLed(0,rows[p],columns[p],true); //changed
    delay(500);
    lc.setLed(0,rows[p],columns[p],false); //changed
  }
  }
void loop(){
  sequence();
}
