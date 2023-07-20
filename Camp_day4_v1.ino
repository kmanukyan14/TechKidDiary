#include <DHT11.h>
DHT11 dht11(2);

void setup() {
Serial.begin(9600);             
}

void printnum(int num){
  switch(num){
    case 0: Serial.println(0); break;
    case 1: Serial.println(1); break;
    case 2: Serial.println(2); break;
    case 3: Serial.println(3); break;
    case 4: Serial.println(4); break;
    case 5: Serial.println(5); break;
    case 6: Serial.println(6); break;
    case 7: Serial.println(7); break;
    case 8: Serial.println(8); break;
    case 9: Serial.println(9); break;
    default: Serial.println("other number");
  }
}

float C, F;
void measuretemp(){
  C = dht11.readTemperature();
  F = C*9/5+32;
  Serial.print("Temperature: ");
  Serial.print(F);
  Serial.println(" F");
}

void loop() {
measuretemp();
delay(2000);
}



