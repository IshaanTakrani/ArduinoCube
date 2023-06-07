// Functions demonstration
// Ishaan Takrani

const int green = 3;  // using const int to define variables does the same as using int, but the values cannot be modified
const int yellow = 4;
const int red = 5;

void rapidFlash(uint8_t led){   // the functions uses the argument of the led. This is used in the body of the function.

  digitalWrite(led, HIGH);
  delay(30);
  digitalWrite(led, LOW);
  delay(30);
  digitalWrite(led, HIGH);
  delay(30);
  digitalWrite(led, LOW);
  delay(30);
  digitalWrite(led, LOW);
  delay(30);
  digitalWrite(led, HIGH);
  delay(30);
  digitalWrite(led, LOW);
  delay(30);
}

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  rapidFlash(green);
  rapidFlash(yellow);
  rapidFlash(red);
}
