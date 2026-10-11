// LM35: output is approximately 10 mV per degree C.
#if defined(ESP8266)
const uint8_t TEMP_PIN = A0; // NodeMCU A0; check your board's input range.
const float ADC_REFERENCE_V = 1.0; // Typical bare ESP8266 ADC range; many NodeMCU boards add a divider.
const float ADC_MAX = 1023.0;
const float BOARD_DIVIDER = 1.0; // Set to board's input-divider ratio if A0 accepts more than 1 V.
#else
const uint8_t TEMP_PIN = A0;
const float ADC_REFERENCE_V = 5.0;
const float ADC_MAX = 1023.0;
const float BOARD_DIVIDER = 1.0;
#endif

void setup() {
  Serial.begin(9600);
}

void loop() {
  int raw = analogRead(TEMP_PIN);
  float sensorVolts = (raw / ADC_MAX) * ADC_REFERENCE_V * BOARD_DIVIDER;
  float celsius = sensorVolts * 100.0; // LM35 scale: 0.010 V per degree C.
  Serial.print("ADC: "); Serial.print(raw);
  Serial.print("  Temperature: "); Serial.print(celsius, 1); Serial.println(" C");
  delay(1000);
}
