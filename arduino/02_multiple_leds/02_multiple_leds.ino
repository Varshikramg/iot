// Three LEDs; connect each anode through its own 220-330 ohm resistor.
#if defined(ESP8266)
const uint8_t LED_PINS[] = {5, 4, 14};  // GPIO5/D1, GPIO4/D2, GPIO14/D5
#else
const uint8_t LED_PINS[] = {8, 9, 10}; // Uno/Nano digital pins
#endif
const size_t LED_COUNT = sizeof(LED_PINS) / sizeof(LED_PINS[0]);

void setup() {
  for (size_t i = 0; i < LED_COUNT; ++i) pinMode(LED_PINS[i], OUTPUT);
}

void loop() {
  for (size_t i = 0; i < LED_COUNT; ++i) {
    digitalWrite(LED_PINS[i], HIGH);
    delay(250);
    digitalWrite(LED_PINS[i], LOW);
  }
  for (size_t i = LED_COUNT; i-- > 0;) {
    digitalWrite(LED_PINS[i], HIGH);
    delay(250);
    digitalWrite(LED_PINS[i], LOW);
  }
}
