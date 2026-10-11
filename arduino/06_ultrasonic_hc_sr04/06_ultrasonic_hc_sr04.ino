// HC-SR04 distance. For NodeMCU, divide Echo voltage to <=3.3 V.
#if defined(ESP8266)
const uint8_t TRIG_PIN = 5; // GPIO5 / D1
const uint8_t ECHO_PIN = 4; // GPIO4 / D2
#else
const uint8_t TRIG_PIN = 8;
const uint8_t ECHO_PIN = 7;
#endif

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  unsigned long duration = pulseIn(ECHO_PIN, HIGH, 30000UL);
  if (duration == 0) {
    Serial.println("No echo / out of range");
  } else {
    float distanceCm = duration * 0.0343f / 2.0f;
    Serial.print("Distance: "); Serial.print(distanceCm, 1); Serial.println(" cm");
  }
  delay(250);
}
