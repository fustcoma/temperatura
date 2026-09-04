#include <SoftwareSerial.h>
#include <DHT.h>

#define DHTPIN 4        // Canvia-ho pel pin on tens connectat el DHT11
#define DHTTYPE DHT11

SoftwareSerial BT(2, 3); // RX, TX
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  dht.begin();

  Serial.println("Bluetooth iniciat");
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Error llegint el DHT11");
    delay(1000);
    return;
  }

  BT.println(String(temp, 1) + ";" + String(hum, 1));
  Serial.println("Enviat: " + String(temp) + ";" + String(hum));

  delay(1000);
}