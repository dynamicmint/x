#define S2 6
#define S3 7
#define OUT 8

int r, g, b;

void setup() {
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  r = pulseIn(OUT, LOW);

  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  g = pulseIn(OUT, LOW);

  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  b = pulseIn(OUT, LOW);

  if (r < g && r < b)
    Serial.println("RED");
  else if (g < r && g < b)
    Serial.println("GREEN");
  else if (b < r && b < g)
    Serial.println("BLUE");
  else
    Serial.println("UNKNOWN");

  delay(1000);
}