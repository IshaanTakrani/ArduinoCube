// Task 11: Loud spiral
// Ishaan Takrani
// Arun Chauhan

#include <Adafruit_NeoPixel.h>

const int trig = 2; // ultrasonic sensor trig pin
const int echo = 3; // ultrasonic sensor echo pin

long duration;  
int distance;

const int buzzer = 11;

Adafruit_NeoPixel my_ring = Adafruit_NeoPixel(16, 13, NEO_GRB + NEO_KHZ800);  // 16 leds, Arduino pin 13

void setup() {

  pinMode(buzzer, OUTPUT);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);

  my_ring.begin(); // initializes the ring
  my_ring.clear(); // clear ring (blank)
  my_ring.show(); // send instructions to ring

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
    delay(50);
    noTone(buzzer); // silence for 100 milliseconds. Makes a beeping sound
    delay(50);

    for(int i = 0; i < 16; i++){
    my_ring.setPixelColor(i,255,0,0); // sets pixel to red
    delay(15);  // 50 millisecond delay
    my_ring.show(); // updates ring, displays the light
    }

    for(int i = 0; i < 16; i++){
      my_ring.setPixelColor(i,0,0,0); // sets pixel to blank
      delay(15);  // 50 millisecond delay
      my_ring.show(); // updates ring, displays the light
    }
  }

  else if (distance > 50 && distance < 100){
    tone(buzzer, 1047);
    delay(75);
    noTone(buzzer);
    delay(75);

    for(int i = 0; i < 16; i++){
      my_ring.setPixelColor(i,255,255,0); // sets pixel to yellow
      delay(15);  // 50 millisecond delay
      my_ring.show(); // updates ring, displays the light
    }

    for(int i = 0; i < 16; i++){
      my_ring.setPixelColor(i,0,0,0); // sets pixel to blank
      delay(15);  // 50 millisecond delay
      my_ring.show(); // updates ring, displays the light
    }
  }

  else{
    tone(buzzer, 1568);
    delay(100);
    noTone(buzzer);
    delay(100);

    for(int i = 0; i < 16; i++){
      my_ring.setPixelColor(i,0,255,0); // sets pixel to green
      delay(15);  // 50 millisecond delay
      my_ring.show(); // updates ring, displays the light
    }

    for(int i = 0; i < 16; i++){
      my_ring.setPixelColor(i,0,0,0); // sets pixel to blank
      delay(15);  // 50 millisecond delay
      my_ring.show(); // updates ring, displays the light
    }
  }

  Serial.println(distance); // outputs distance to serial monitor

}
