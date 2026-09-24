const int ENABLE_PIN = 5;  // L293D pin 1 (EN1)
const int IN1_PIN = 4;     // L293D pin 2 (IN1)
const int IN2_PIN = 3;     // L293D pin 7 (IN2)

void setup() {
  pinMode(ENABLE_PIN, OUTPUT);
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
}

void loop() {
  // Run motor forward for 3 seconds
  analogWrite(ENABLE_PIN, 255);
  digitalWrite(IN1_PIN, HIGH);
  digitalWrite(IN2_PIN, LOW);
  delay(3000);

  // Stop motor
  analogWrite(ENABLE_PIN, 0);
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, LOW);

  // Run motor in reverse for 5 seconds
  analogWrite(ENABLE_PIN, 255);
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, HIGH);
  delay(5000);

  // Stop before repeating sequence
  analogWrite(ENABLE_PIN, 0);
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, LOW);
  delay(1000);
}
