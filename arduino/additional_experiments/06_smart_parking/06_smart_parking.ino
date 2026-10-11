// EXPERIMENT 6: HC-SR04 smart parking distance/status
// HC-SR04 VCC -> 5V, GND -> GND, TRIG -> D9, ECHO -> D10.
const uint8_t TRIG_PIN = 9;
const uint8_t ECHO_PIN = 10;
const float OCCUPIED_DISTANCE_CM = 15.0;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  unsigned long duration = pulseIn(ECHO_PIN, HIGH, 30000UL);

  if (duration == 0) {
    Serial.println("No echo detected");
  } else {
    float distanceCm = duration * 0.0343f / 2.0f;
    Serial.print("Distance: "); Serial.print(distanceCm, 1); Serial.println(" cm");
    Serial.println(distanceCm < OCCUPIED_DISTANCE_CM ? "SLOT OCCUPIED" : "SLOT VACANT");
  }
  delay(1000);
}
