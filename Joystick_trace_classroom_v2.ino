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

void mapJoystick(){
    row=map(y, 0, 1023, 0, 8);
    col=map(x, 0, 1023, 0, 8);
  }
void loop() {
readJoystick();
mapJoystick(); //new

delay(500);
}
