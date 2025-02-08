#include "arduino_secrets.h"

#include <DHT.h>
#include <DHT_U.h>
int sensor = 9;
int temp; 
int hum;
float senTerm;

DHT dht(sensor, DHT11); 

void setup() {
  Serial.begin(9600); 
  dht.begin();
}

void loop() {
   temp = dht.readTemperature(); 
   hum = dht.readHumidity(); 
   senTerm = dht.computeHeatIndex(temp, hum, false); 

  Serial.print("Temperatura: "); 
  Serial.print(temp); 
  Serial.print("ÂºC ");
  Serial.print(" Humedad: "); 
  Serial.print(hum); 
  Serial.print("%"); 
  Serial.print(" SensaciÃ³n tÃ©rmica: "); 
  Serial.print(senTerm); 
  Serial.print("ÂºC ");
  delay(500); 
}
