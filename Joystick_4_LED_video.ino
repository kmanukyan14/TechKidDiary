void setup() {
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(2,INPUT);
pinMode(A0,INPUT);
}

void off(){
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void on(){
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void loop() {
  off();
  int s = analogRead(A0); // s changes from 0 to 1023
  int LED = map(s, 0, 1024, 8, 12);

  if(s<480 || s>520){
    digitalWrite(LED,HIGH);
  }

  digitalWrite(2,HIGH);
  if(!digitalRead(2)){
    on();
  }
  delay(50);
}
