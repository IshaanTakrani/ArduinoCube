
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel my_ring = Adafruit_NeoPixel(16, 13, NEO_GRB + NEO_KHZ800);

void setup() {
  my_ring.begin(); // initializes the ring
  my_ring.clear(); // clear ring (blank)
  my_ring.show(); // send instructions to ring
}

void loop() {
  my_ring.setPixelColor(0,255,0,0);
  my_ring.setPixelColor(1,255,0,0);
  my_ring.setPixelColor(2,255,0,0);
  my_ring.setPixelColor(3,255,0,0);
  my_ring.setPixelColor(4,255,0,0);
  my_ring.setPixelColor(5,255,0,0);
  my_ring.setPixelColor(6,255,0,0);
  my_ring.setPixelColor(7,255,0,0);
  my_ring.setPixelColor(8,255,0,0);
  my_ring.setPixelColor(9,255,0,0);
  my_ring.setPixelColor(10,255,0,0);
  my_ring.setPixelColor(11,255,0,0);
  my_ring.setPixelColor(12,255,0,0);
  my_ring.setPixelColor(13,255,0,0);
  my_ring.setPixelColor(14,255,0,0);
  my_ring.setPixelColor(15,255,0,0);
  my_ring.show();
}
