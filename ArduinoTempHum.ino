// libraries
#include "dht.h"

// pin definitions
#define DHT11_PIN 4    // D4 on board

// constants and objects
dht DHT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);    // read the DHT11
  Serial.print("Temperature: ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity: ");
  Serial.println(DHT.humidity);
  delay(3000);
}
