int LEDs[3] = {24,25,52};
void setup() {
for(int i=0; i<sizeof(LEDs); i++) pinMode(LEDs[i],OUTPUT);
}
void on(){for(int i=0; i<sizeof(LEDs); i++) digitalWrite(LEDs[i],HIGH);}
void off(){for(int i=0; i<sizeof(LEDs); i++) digitalWrite(LEDs[i],LOW);}
void sequence(){
  for(int i=0; i<sizeof(LEDs); i++){ 
    digitalWrite(LEDs[i],HIGH);
    delay(500);
    digitalWrite(LEDs[i],LOW);
  }
}
void flash(){
  on();
  delay(500);
  off();
  delay(500);
}
void loop() {
  flash();
  sequence();
}
