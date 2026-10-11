// EXPERIMENT 4: Soil-moisture and rain irrigation indicator
// Soil sensor AO -> A0; rain sensor DO -> D2; active buzzer + -> D3, - -> GND.
// Calibrate DRY_RAW and WET_RAW for your sensor. The example is an indicator;
// it does not control a pump. Use a driver circuit for any motor or pump.
const uint8_t SOIL_PIN = A0;
const uint8_t RAIN_PIN = 2;
const uint8_t BUZZER_PIN = 3;
const int DRY_RAW = 0;   // Replace with measured reading in dry soil.
const int WET_RAW = 1023; // Replace with measured reading in wet soil.

void setup() {
  Serial.begin(9600);
  pinMode(RAIN_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int raw = analogRead(SOIL_PIN);
  int soilPercent = constrain(map(raw, DRY_RAW, WET_RAW, 0, 100), 0, 100);
  bool raining = digitalRead(RAIN_PIN) == LOW; // Common rain-module behavior; verify yours.

  Serial.print("Soil moisture: "); Serial.print(soilPercent);
  Serial.print("% | Rain: "); Serial.println(raining ? "Yes" : "No");
  bool irrigationNeeded = soilPercent < 40 && !raining;
  digitalWrite(BUZZER_PIN, irrigationNeeded ? HIGH : LOW);
  Serial.println(irrigationNeeded ? "Irrigation required" : "Irrigation not required");
  delay(1000);
}
