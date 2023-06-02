// Task 4: Colours
// Ishaan Takrani

#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel my_ring = Adafruit_NeoPixel(16, 13, NEO_GRB + NEO_KHZ800);

void setup() {
  my_ring.begin(); // initializes the ring
  my_ring.clear(); // clear ring (blank)
  my_ring.show(); // send instructions to ring
}

void loop() {
  
  for(int i = 0; i < 16; i++){  // turns all pixels red (see NeoPixel_demo.ino)
    my_ring.setPixelColor(i,255,0,0);  
  }
  
  my_ring.show(); // displays on ring
  delay(1000);  // 1 second delay

  for(int i = 0; i < 16; i++){  // turns all pixels yellow
    my_ring.setPixelColor(i,255,255,0); 
  }

  my_ring.show(); // displays on ring
  delay(1000);  // 1 second delay

  for(int i = 0; i < 16; i++){  // turns all pixels green
    my_ring.setPixelColor(i,0,255,0); 
  }

  my_ring.show(); // displays on ring blue
  delay(1000);  // 1 second delay
  
  for(int i = 0; i < 16; i++){  // turns all pixels blue 
    my_ring.setPixelColor(i,0,0,255); 
  }

  my_ring.show(); // displays on ring
  delay(1000);  // 1 second delay
  
  for(int i = 0; i < 16; i++){  // turns all pixels purple
    my_ring.setPixelColor(i,255,0,255); 
  }

  my_ring.show(); // displays on ring
  delay(1000);  // 1 second delay
  
}
