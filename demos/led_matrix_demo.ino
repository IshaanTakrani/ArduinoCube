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


char Pacman[] = {
  8,
  8,
  B00011100,
  B00100010,
  B01000001,
  B01001001,
  B01010101,
  B00100010,
  B00000000,
  B00001000
};


void setup() {
  my_matrix.init(); // initializes LED matrix
  my_matrix.setIntensity(8);  // initializes LED matrix brightness to 8/15
  my_matrix.clear(); // clears LED matrix (turns off all pixels)
}

void loop() {

  // my_matrix.writeSprite(0, 0, smiley_face); // displays smiley_face sprite on LED Matrix


  /*
    Below is the code for a scroling
    sprite of Pan-Man
  */
  

  my_matrix.writeSprite(-8,0,Pacman);

  /* 
    move the Pacman 16 times to the right
    first 8 times = Pacman is shifted in from the left
    last 8 times = Pacman is shifted out to the right
  */

 for (int i=1; i<17; i++){
   // update the location of the Pacman
   my_matrix.clear();
   my_matrix.writeSprite(-8+i,0,Pacman);
   delay(100);
 }

 my_matrix.clear();  // clear the display
 
}









