# Arduino C++ Basics and Function Syntax Used in the Projects

This document explains the basic C++ and Arduino functions, syntax, and programming concepts used in the example projects such as traffic signals, motion alerts, obstacle avoidance, motor control, etc.

---

## ✅ Functions Used

###   

`pinMode(pin, mode)`    

```cpp
pinMode(2, OUTPUT);

digitalWrite(3, HIGH);

digitalRead(2);

int value = analogRead(A0);

int value = analogRead(A0);

analogWrite(9, 200);

delay(1000);

delayMicroseconds(10);

long duration = pulseIn(echo, HIGH);


int distance = duration * 0.034 / 2; '''


// Example on using a library
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
lcd.begin(16, 2);


