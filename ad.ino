#include <Servo.h>

Servo myServo;
int sensor = 7;

void setup() {
  pinMode(sensor, INPUT);
  myServo.attach(9);
}

void loop() {
  int value = digitalRead(sensor);

  if (value == HIGH) {
    myServo.write(90);
  } else {
    myServo.write(0);
  }

  delay(500);
}