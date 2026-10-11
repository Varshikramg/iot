// Single LED blink. Use a 220-330 ohm resistor in series with the LED.
#if defined(ESP8266)
const uint8_t LED_PIN = 5;  // GPIO5 / NodeMCU D1
#else
const uint8_t LED_PIN = 8;  // Arduino Uno/Nano digital pin 8
#endif

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
