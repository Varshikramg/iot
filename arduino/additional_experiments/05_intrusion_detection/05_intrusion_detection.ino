// EXPERIMENT 5: PIR intrusion alarm with active buzzer
// PIR OUT -> D2; active buzzer + -> D3, - -> GND.
// Use a transistor driver if the buzzer current exceeds the GPIO rating.
const uint8_t PIR_PIN = 2;
const uint8_t BUZZER_PIN = 3;
const unsigned long ALARM_MS = 3000;
const unsigned long COOLDOWN_MS = 10000;
unsigned long startTime;
unsigned long lastAlert = 0;
unsigned long buzzerStart = 0;
bool alarmOn = false;

void setup() {
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
  startTime = millis();
}

void loop() {
  unsigned long now = millis();
  bool cooldownComplete = lastAlert == 0 || now - lastAlert >= COOLDOWN_MS;
  if (digitalRead(PIR_PIN) == HIGH && !alarmOn && cooldownComplete) {
    Serial.print("Intrusion detected at ");
    Serial.print((now - startTime) / 1000.0, 1);
    Serial.println(" seconds since startup");
    digitalWrite(BUZZER_PIN, HIGH);
    buzzerStart = now;
    lastAlert = now;
    alarmOn = true;
  }
  if (alarmOn && now - buzzerStart >= ALARM_MS) {
    digitalWrite(BUZZER_PIN, LOW);
    alarmOn = false;
  }
}
