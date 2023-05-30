// Ishaan Takrani

void setup() {
  /*
  In void setup, pins 3, 4, and 5 are defined
  as outputs.
  */
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

  digitalWrite(3, HIGH);  // green LED on for 7 seconds, then off
  delay(7000);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);  // yellow LED on for 2 seconds, then off
  delay(2000);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);  // red LED on for 3 seconds, then off
  delay(3000);
  digitalWrite(5, LOW);
}
