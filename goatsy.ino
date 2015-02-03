int RedRight = 0,
    RedLeft = 5;

void setup() {
  pinMode(RedRight, OUTPUT);
  pinMode(RedLeft, OUTPUT);
}

void loop() {
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(500);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(50);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(100);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(200);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(150);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(100);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(750);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(100);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(50);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(50);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(100);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(100);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  Bean.sleep(7500);
}
