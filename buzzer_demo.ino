
const int buzzer = 2; // buzzer is in pin 2

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  
  tone(buzzer, 523); // Plays note C5
  delay(1000);

  tone(buzzer, 784); // Plays note G5
  delay(1000);

}