#include <LiquidCrystal.h>

int sensor = A0;
int led = 7;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(led, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  int lightLevel = analogRead(sensor);
  lcd.setCursor(0, 0);
  lcd.print("Light Level:");
  lcd.setCursor(0, 1);
  lcd.print(lightLevel);

  if (lightLevel < 300) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(500);
}
