#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
byte rows[3] = {B11001100, B10100101, B00110011};
void loop(){
for(int i=0; i<3; i++) {
lc.clearDisplay(0);
lc.setRow(0,i,rows[i]);
delay(250);
}
}
