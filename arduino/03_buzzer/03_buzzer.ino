// Use an active buzzer for simple on/off tones. A passive piezo uses tone().
#if defined(ESP8266)
const uint8_t BUZZER_PIN = 14; // GPIO14 / NodeMCU D5
#else
const uint8_t BUZZER_PIN = 8;
#endif
const bool PASSIVE_BUZZER = false;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (PASSIVE_BUZZER) tone(BUZZER_PIN, 1000);
  else digitalWrite(BUZZER_PIN, HIGH);
  Serial.println("Buzzer ON");
  delay(500);
  if (PASSIVE_BUZZER) noTone(BUZZER_PIN);
  else digitalWrite(BUZZER_PIN, LOW);
  Serial.println("Buzzer OFF");
  delay(500);
}
