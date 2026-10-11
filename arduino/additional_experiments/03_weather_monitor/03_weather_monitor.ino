// EXPERIMENT 3: DHT11 and digital rain-sensor weather monitor
// DHT DATA -> D2; rain sensor DO -> D3; sensor VCC/GND as marked on modules.
// Many rain modules output LOW when wet. Confirm this with your module.
// Install Adafruit DHT Sensor Library and Adafruit Unified Sensor.
#include <DHT.h>

const uint8_t DHT_PIN = 2;
const uint8_t RAIN_PIN = 3;
#define DHT_TYPE DHT11
DHT weatherDht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  weatherDht.begin();
  pinMode(RAIN_PIN, INPUT);
}

void loop() {
  float celsius = weatherDht.readTemperature();
  if (isnan(celsius)) Serial.println("DHT read failed; check wiring.");
  else {
    Serial.print("Temperature: "); Serial.print(celsius, 1); Serial.println(" C");
  }
  bool raining = digitalRead(RAIN_PIN) == LOW;
  Serial.print("Rain status: "); Serial.println(raining ? "Rain detected" : "No rain detected");
  delay(2000);
}
