#include "LedControl.h" 
LedControl lc=LedControl(12,10,11,1); 
void setup() {
lc.shutdown(0,false); 
lc.setIntensity(0,8); 
lc.clearDisplay(0); 
}
byte a[8] = {B00111111,B00111111,B00110000,B00111111,
B00111111,B00110000,B00111111,B00111111};  
void show(byte seq[8]){
lc.clearDisplay(0); 
for(int i=0; i<8; i++) lc.setRow(0, i, seq[i]);
delay(500);
}
void loop() {
show(a);
}




