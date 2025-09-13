int leftSensor = A0;
int rightSensor = A1;
int motorLeft = 5;
int motorRight = 6;

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(motorLeft, OUTPUT);
  pinMode(motorRight, OUTPUT);
}

void loop() {
  int leftValue = analogRead(leftSensor);
  int rightValue = analogRead(rightSensor);

  if (leftValue > rightValue) {
    digitalWrite(motorLeft, LOW);
    digitalWrite(motorRight, HIGH);
  } else if (rightValue > leftValue) {
    digitalWrite(motorLeft, HIGH);
    digitalWrite(motorRight, LOW);
  } else {
    digitalWrite(motorLeft, HIGH);
    digitalWrite(motorRight, HIGH);
  }
}
