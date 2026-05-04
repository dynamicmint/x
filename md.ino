int in1 = 8;
int in2 = 9;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Clockwise
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(3000);

  // Stop
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(2000);

  // Anticlockwise
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(3000);

  // Stop
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(2000);
}