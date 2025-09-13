int trig = 9;
int echo = 10;
int motorLeft = 5;
int motorRight = 6;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(motorLeft, OUTPUT);
  pinMode(motorRight, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  int distance = duration * 0.034 / 2;

  if (distance < 20) {
    digitalWrite(motorLeft, LOW);
    digitalWrite(motorRight, LOW);
  } else {
    digitalWrite(motorLeft, HIGH);
    digitalWrite(motorRight, HIGH);
  }
}
