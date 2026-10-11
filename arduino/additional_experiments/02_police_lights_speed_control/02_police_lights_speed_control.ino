// EXPERIMENT 2: Alternating police lights with serial speed control
// LED anodes -> D8 and D9, each through a 220-330 ohm resistor; cathodes -> GND.
// In Serial Monitor (9600 baud, Newline), enter: fast, medium, or slow.
const uint8_t LED_RED = 8;
const uint8_t LED_BLUE = 9;
unsigned long blinkDelayMs = 500;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(100);
  Serial.println("Type fast, medium, or slow");
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();
    if (command == "fast") blinkDelayMs = 200;
    else if (command == "medium") blinkDelayMs = 500;
    else if (command == "slow") blinkDelayMs = 1000;
    else Serial.println("Unknown command; use fast, medium, or slow.");
  }

  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_BLUE, LOW);
  delay(blinkDelayMs);
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_BLUE, HIGH);
  delay(blinkDelayMs);
}
