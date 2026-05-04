int leftSensor = 2;
int rightSensor = 3;

int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  int left = digitalRead(leftSensor);
  int right = digitalRead(rightSensor);

  if (left == LOW && right == LOW) {
    // Forward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  else if (left == HIGH && right == LOW) {
    // Left
    digitalWrite(in1, LOW);
    digitalWrite(in3, HIGH);
  }
  else if (left == LOW && right == HIGH) {
    // Right
    digitalWrite(in1, HIGH);
    digitalWrite(in3, LOW);
  }
  else {
    // Stop
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}