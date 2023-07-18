void setup() {
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(A0,INPUT);
}
void loop() {
  digitalWrite(4,LOW);
  int x = analogRead(A0);
  if(x<100){
    digitalWrite(4,HIGH);    
  }
  digitalWrite(5,LOW);
  if(x>900){
    digitalWrite(5,HIGH);    
  }
  delay(100);
}
