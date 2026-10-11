// Install: DHT sensor library by Adafruit + Adafruit Unified Sensor.
#include <DHT.h>

#if defined(ESP8266)
const uint8_t DHT_PIN = 4;  // GPIO4 / NodeMCU D2
#else
const uint8_t DHT_PIN = 2;
#endif
#define DHT_TYPE DHT11  // Change to DHT22 when using that sensor.
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000); // DHT sensors should not be polled rapidly.
  float humidity = dht.readHumidity();
  float celsius = dht.readTemperature();
  if (isnan(humidity) || isnan(celsius)) {
    Serial.println("DHT read failed; check wiring and sensor type.");
    return;
  }
  Serial.print("Temperature: "); Serial.print(celsius); Serial.println(" C");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.println(" %");
}
