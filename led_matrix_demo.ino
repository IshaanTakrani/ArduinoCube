// LED matrix demonstration
// Ishaan Takrani
// Arun Chauhan

#include <MaxMatrix.h>

MaxMatrix my_matrix = MaxMatrix(12, 10, 11, 1); // constructor
// The arguments are: MaxMatrix (DIN pin, CS pin, CLK pin, # of MAX7219 modules in use)

char smiley_face[] = {
  8,  // x dimension
  8,  // y dimension
  B11111111,  // B stands for binary, as the 1s and 0s are binary characters
  B10000001,  // 1 represents an activated LED, o represents a deactivated one
  B10100101, 
  B10000001, 
  B10100101, 
  B10111101, 
  B10000001, 
  B11111111
};

void setup() {
  my_matrix.init(); // initializes LED matrix
  my_matrix.setIntensity(8);  // initializes LED matrix brightness to 8/15
  my_matrix.clear(); // clears LED matrix (turns off all pixels)
}

void loop() {

  my_matrix.writeSprite(0, 0, smiley_face); // displays smiley_face sprite on LED Matrix

}
