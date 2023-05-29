void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  digitalWrite(3, HIGH);
  delay(20000);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);
  delay(20000);
  digitalWrite(5, LOW);
}
