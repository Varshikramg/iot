// HC-SR501 PIR: allow its startup calibration to finish after power-up.
#if defined(ESP8266)
const uint8_t PIR_PIN = 12; // GPIO12 / NodeMCU D6
#else
const uint8_t PIR_PIN = 7;
#endif

void setup() {
  pinMode(PIR_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(PIR_PIN) == HIGH) Serial.println("Motion detected");
  else Serial.println("No motion");
  delay(500);
}
