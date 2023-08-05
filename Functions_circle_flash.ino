void setup() {
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void circle(){
  digitalWrite(4,HIGH);
  delay(250);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(250);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(250);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(250);
  digitalWrite(7,LOW);
}

void on(){
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}

void off(){
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void flash(){
  on();
  delay(500);
  off();
  delay(500);
}

void loop() {
flash();
circle();
}
