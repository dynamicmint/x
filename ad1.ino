#include <Servo.h>

Servo door;

int irPin = 2;

void setup() {
  pinMode(irPin, INPUT);
  door.attach(9);
}

void loop() {
  if (digitalRead(irPin) == LOW) {
    door.write(90);
  } else {
    door.write(0);
  }
}