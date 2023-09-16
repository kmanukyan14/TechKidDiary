#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
int length = 24, j = 0; //new
byte rows[24] = {
B00000000, B00111110, B00100010,B00111110, B00000000, B00000000,B00000000, B00000000,
B00000000, B00000000, B00111110,B00000000, B00000000, B00000000,B00000000, B00000000,
B00000000, B00101110, B00101010,B00111010, B00000000, B00000000,B00000000, B00000000
};
void loop(){
lc.clearDisplay(0); //new
for(int i=0; i<8; i++) lc.setRow(0,i,rows[i+j]); //changed
delay(250); //new
j = j + 1; //new
if(j>length-8) j=0; //new
}
