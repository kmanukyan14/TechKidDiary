//THIS CODE IS IN THE DESCRIPTION. DO NOT WRITE BY HAND
#include<Wire.h>
const int MPU_addr=0x68;  // I2C address of the MPU-6050
int16_t AcX,AcY;
void setup(){
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);  // PWR_MGMT_1 register
  Wire.write(0);     // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);
  Serial.begin(9600);

}

void loop(){
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);  // starting with register 0x3B (ACCEL_XOUT_H)
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr,14,true); 
  AcX=Wire.read()<<8|Wire.read();     
  AcY=Wire.read()<<8|Wire.read();  
  Serial.print("X tilt: ");
  Serial.println(AcX);
  Serial.print("Y tilt: ");
  Serial.println(AcY);
  digitalWrite(4,LOW);
  if(AcX<-2000){digitalWrite(4,HIGH);}
  digitalWrite(6,LOW);
  if(AcX>2000){digitalWrite(6,HIGH);}
  digitalWrite(7,LOW);
  if(AcY<-2000){digitalWrite(7,HIGH);}
  digitalWrite(5,LOW);
  if(AcY>2000){digitalWrite(5,HIGH);}
  delay(1000);
}
