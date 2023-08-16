void setup() {
pinMode(50,OUTPUT);
pinMode(51,OUTPUT);
pinMode(52,OUTPUT);
pinMode(53,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
}

void measure1(){
  int sensor1 = analogRead(A0);
  if(sensor1<500){
    digitalWrite(50,HIGH);
    digitalWrite(51,LOW);
  }
  else{
    digitalWrite(50,LOW);
    digitalWrite(51,HIGH);
  }
}

void measure2(){
  int sensor2 = analogRead(A1);
  if(sensor2<500){
    digitalWrite(52,HIGH);
    digitalWrite(53,LOW);
  }
  else{
    digitalWrite(52,LOW);
    digitalWrite(53,HIGH);
  }
}

void loop() {
  measure1();
  measure2();
}
