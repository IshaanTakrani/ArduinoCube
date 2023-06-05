// Task 6: beep boop
// Ishaan Takrani

const int buzzer = 2; // buzzer is in pin 2

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  
  tone(buzzer, 1000); // beep
  delay(100);

  noTone(buzzer); // 100 millisecond silence
  delay(100);

  tone(buzzer, 500); // boop
  delay(100);

  noTone(buzzer); // another 100 millisecond silence
  delay(100);

}
