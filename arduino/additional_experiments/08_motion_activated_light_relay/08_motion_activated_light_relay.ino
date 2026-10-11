// EXPERIMENT 8: PIR motion-activated low-voltage light using a relay module
// PIR OUT -> D2; relay module IN -> D3, with its supply wired per its data sheet.
// Relay contact example: isolated 5V supply + -> COM; NO -> resistor -> LED -> supply GND.
// This example switches a low-voltage LED only. Do not connect mains voltage.
const uint8_t PIR_PIN = 2;
const uint8_t RELAY_PIN = 3;
const unsigned long LIGHT_HOLD_MS = 10000;
const uint8_t RELAY_ON = HIGH;  // Change to LOW for an active-LOW relay module.
const uint8_t RELAY_OFF = LOW;
unsigned long lastMotion = 0;
bool lightOn = false;

void setup() {
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, RELAY_OFF);
}

void loop() {
  unsigned long now = millis();
  if (digitalRead(PIR_PIN) == HIGH) {
    lastMotion = now;
    if (!lightOn) {
      digitalWrite(RELAY_PIN, RELAY_ON);
      lightOn = true;
      Serial.println("Motion detected - Light ON");
    }
  }
  if (lightOn && now - lastMotion >= LIGHT_HOLD_MS) {
    digitalWrite(RELAY_PIN, RELAY_OFF);
    lightOn = false;
    Serial.println("Light OFF");
  }
}
