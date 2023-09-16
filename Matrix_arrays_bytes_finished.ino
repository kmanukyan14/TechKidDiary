#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
int length = 16, j = 0; //new
byte rows[16] = {B11001100, B10100101, B00110011,B11001100, 
B10100101, B00110011,B11001100, B10100101,
B11001100, B10100101, B00110011,B11001100, 
B10100101, B00110011,B11001100, B10100101};
void loop(){
lc.clearDisplay(0); //new
for(int i=0; i<8; i++) lc.setRow(0,i,rows[i+j]); //changed
delay(250); //new
j = j + 1; //new
if(j>length-8) j=0; //new
}
