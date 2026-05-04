int leftSensor = 2;
int centerSensor = 3;
int rightSensor = 4;

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(centerSensor, INPUT);
  pinMode(rightSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int left = digitalRead(leftSensor);
  int center = digitalRead(centerSensor);
  int right = digitalRead(rightSensor);

  Serial.print("L: "); Serial.print(left);
  Serial.print(" C: "); Serial.print(center);
  Serial.print(" R: "); Serial.println(right);

  if (left == HIGH && center == HIGH && right == HIGH) {
    Serial.println("Shape: Square");
  }
  else if (left == LOW && center == HIGH && right == LOW) {
    Serial.println("Shape: Triangle");
  }
  else if (left == HIGH && center == LOW && right == HIGH) {
    Serial.println("Shape: Circle");
  }
  else {
    Serial.println("Shape: Unknown");
  }

  delay(500);
}