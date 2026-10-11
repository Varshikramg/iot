// EXPERIMENT 1: DHT11 temperature and humidity
// DHT VCC -> 5V, GND -> GND, DATA -> D2.
// A bare DHT sensor may need a 4.7k-10k pull-up from DATA to VCC.
// Install Adafruit DHT Sensor Library and Adafruit Unified Sensor.
#include <DHT.h>

const uint8_t DHT_PIN = 2;
#define DHT_TYPE DHT11
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float celsius = dht.readTemperature();
  float fahrenheit = dht.readTemperature(true);
  if (isnan(celsius) || isnan(fahrenheit) || isnan(humidity)) {
    Serial.println("DHT read failed; check wiring and sensor type.");
  } else {
    Serial.print("Temperature: "); Serial.print(celsius, 1); Serial.print(" C | ");
    Serial.print(fahrenheit, 1); Serial.print(" F | Humidity: ");
    Serial.print(humidity, 1); Serial.println(" %");
  }
  delay(2000);
}
