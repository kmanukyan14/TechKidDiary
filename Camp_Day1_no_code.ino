#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);

int count = 0;
int x, y, i, j;
int xmap, ymap;

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
  Serial.begin(9600);
  randomSeed(millis());
  pinMode(13,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(37,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(39,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(41,OUTPUT);
  pinMode(44,OUTPUT);
  pinMode(45,OUTPUT);
  pinMode(46,OUTPUT);
  pinMode(47,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(2,INPUT);
}

void off(){
  digitalWrite(13,LOW);
  digitalWrite(22,LOW);
  digitalWrite(23,LOW);
  digitalWrite(30,LOW);
  digitalWrite(31,LOW);
  digitalWrite(32,LOW);
  digitalWrite(33,LOW);
  digitalWrite(24,LOW);
  digitalWrite(25,LOW);
  digitalWrite(26,LOW);
  digitalWrite(27,LOW);
  digitalWrite(34,LOW);
  digitalWrite(35,LOW);
  digitalWrite(36,LOW);
  digitalWrite(37,LOW);
  digitalWrite(38,LOW);
  digitalWrite(39,LOW);
  digitalWrite(40,LOW);
  digitalWrite(41,LOW);
  digitalWrite(44,LOW);
  digitalWrite(45,LOW);
  digitalWrite(46,LOW);
  digitalWrite(47,LOW);
  }

void ex1(){
  if (count % 2 == 0) {
    digitalWrite(13,HIGH);
  } 
}

void ex2(){
  if (count % 2 == 0) {
    digitalWrite(22,HIGH);
  }
  else{
    digitalWrite(23,HIGH);
  } 
}

void ex3(){
  if (count % 4 == 0) {
    digitalWrite(30,HIGH);
  }
  if (count % 4 == 1) {
    digitalWrite(31,HIGH);
  }
  if (count % 4 == 2) {
    digitalWrite(32,HIGH);
  }
  if (count % 4 == 3) {
    digitalWrite(33,HIGH);
  }
}

void ex4(){
  x = analogRead(A0);
  y = analogRead(A1);
  if(x<100){digitalWrite(24,HIGH);}
  if(x>900){digitalWrite(25,HIGH);}
  if(y<100){digitalWrite(27,HIGH);}
  if(y>900){digitalWrite(26,HIGH);}
}

void ex5(){
  xmap = map(x, 0, 1024, 34, 38);
  ymap = map(y, 0, 1024, 44, 48);
  digitalWrite(xmap,HIGH);
  digitalWrite(ymap,HIGH);
}

void flash(){
  for(i = 0; i<4; i++){
  matrixon();
  digitalWrite(38,HIGH);
  digitalWrite(39,HIGH);
  digitalWrite(40,HIGH);
  digitalWrite(41,HIGH);
  delay(250);
  lc.clearDisplay(0);
  off();
  delay(250);
  }
}

void matrixon(){
  for(j=0; j<8; j++){lc.setColumn(0,j,B11111111);}
}

void matrixtimer(){
  for(j=7; j>=0; j--){delay(100); lc.setColumn(0,j,B00000000);}
}

void ex6(){
  digitalWrite(2,HIGH);
  if(!digitalRead(2)){
    flash();
    matrixon();
    int lim = random(16,28);
    for(i=0; i<lim; i++){
      off();
      if (i % 4 == 0) {
        digitalWrite(38,HIGH);
      }
      if (i % 4 == 1) {
        digitalWrite(39,HIGH);
      }
      if (i % 4 == 2) {
        digitalWrite(40,HIGH);
      }
      if (i % 4 == 3) {
        digitalWrite(41,HIGH);
      }
      delay(100);
    }
    lim -= 1;
    matrixtimer();
    x = analogRead(A0);
    y = analogRead(A1);
    Serial.println(x);
    Serial.println(y);
    Serial.println(lim%4);
    if(x<300 && lim % 4==2){flash();}
    if(x>800 && lim % 4==0){flash();}
    if(y<300 && lim % 4==3){flash();}
    if(y>800 && lim % 4==1){flash();}    
  }
}

void loop() {
off();
ex1();
ex2();
ex3();
ex4();
ex5();
ex6();
delay(300);
count += 1;
}
