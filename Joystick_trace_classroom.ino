int x, y, row, col;
void readJoystick(){
  x=analogRead(A0);
  y=analogRead(A1);
  }
void setup() {
pinMode(2,INPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
}
void loop() {
readJoystick();
Serial.println(x);
Serial.println(y);
delay(500);
}
