void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
int value = analogRead(A0);
Serial.println(value);
digitalWrite(13,HIGH);
delay(value+50);
digitalWrite(13,LOW);
delay(value+50);
}
