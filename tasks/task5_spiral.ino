// Task 5: Spiral
// Ishaan Takrani

#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel my_ring = Adafruit_NeoPixel(16, 13, NEO_GRB + NEO_KHZ800);  // 16 leds, Arduino pin 13

void setup(){
  my_ring.begin(); // initializes the ring
  my_ring.clear(); // clear ring (blank)
  my_ring.show(); // send instructions to ring
}

void loop() {
  
  for(int i = 0; i < 16; i++){
    my_ring.setPixelColor(i,255,0,0); // sets pixel to red
    delay(50);  // 50 millisecond delay
    my_ring.show(); // updates ring, displays the light
  }

  for(int i = 0; i < 16; i++){
    my_ring.setPixelColor(i,0,0,0); // sets pixel to blank
    delay(50);  // 50 millisecond delay
    my_ring.show(); // updates ring, displays the light
  }
    
}
