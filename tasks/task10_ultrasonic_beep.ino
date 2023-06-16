//Task 10: Ultrasonic beep
// Ishaan Takrani
// Arun Chauhan


const int trig = 2; // ultrasonic sensor trig pin
const int echo = 3; // ultrasonic sensor echo pin

long duration;  
int distance;

const int buzzer = 11;


void setup() {

  pinMode(buzzer, OUTPUT);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);

}

void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = (duration/2) * 0.034;


  if (distance < 50){
    tone(buzzer, 660);  // plays note for 100 milliseconds
    delay(100);
    noTone(buzzer); // silence for 100 milliseconds. Makes a beeping sound
    delay(100);
  }

  else if (distance > 50 && distance < 75){
    tone(buzzer, 1047);
    delay(100);
    noTone(buzzer);
    delay(100);
  }

  else{
    tone(buzzer, 1568);
    delay(100);
    noTone(buzzer);
    delay(100);
  }

  Serial.println(distance); // outputs distance to serial monitor

}
