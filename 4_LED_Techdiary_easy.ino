void setup() {
  for(int i=8; i<12; i++){
    pinMode(i,OUTPUT);
  }
}

void off(){
  for(int i=8; i<12; i++){
    digitalWrite(i,LOW);
  }
}

void loop() {
  off();
  delay(1000);
  for(int i=8; i<12; i++){
    digitalWrite(i,HIGH);
    delay(200);
  }

  for(int i=8; i<12; i++){
    digitalWrite(i,LOW);
    delay(500);
  }
  
  for(int i=11; i>7; i--){
    digitalWrite(i,HIGH);
    delay(200);
  }

  for(int i=11; i>7; i--){
    digitalWrite(i,LOW);
    delay(1000);
  }
}
