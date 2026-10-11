// EXPERIMENT 7: IR object counter
// IR sensor OUT -> D2. This sketch assumes an active-LOW detection output.
const uint8_t IR_PIN = 2;
unsigned long objectCount = 0;
int previousState = HIGH;
unsigned long lastCount = 0;
const unsigned long DEBOUNCE_MS = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(IR_PIN, INPUT);
}

void loop() {
  int currentState = digitalRead(IR_PIN);
  unsigned long now = millis();
  bool debounceComplete = lastCount == 0 || now - lastCount >= DEBOUNCE_MS;
  if (currentState == LOW && previousState == HIGH && debounceComplete) {
    ++objectCount;
    Serial.print("Object detected! Total count: ");
    Serial.println(objectCount);
    lastCount = now;
  }
  previousState = currentState;
}
