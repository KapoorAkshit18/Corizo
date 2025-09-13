int motor1a = 2;
int motor1b = 3;
int enable = 9;

void setup() {
  pinMode(motor1a, OUTPUT);
  pinMode(motor1b, OUTPUT);
  pinMode(enable, OUTPUT);
}

void loop() {
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);
  analogWrite(enable, 200); // speed control
  delay(2000);

  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, HIGH);
  analogWrite(enable, 200);
  delay(2000);
}
