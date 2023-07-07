//Task 13: Adaptive Night Light
// Ishaan Takrani
// Arun Chauhan


#include <MaxMatrix.h>
MaxMatrix my_matrix = MaxMatrix(12, 10, 11, 1); // constructor

const int LDR_pin = A3;  // The Arduino pin that the LDR is connected to. It is constant, so it is a const int
int LDR_value = 0;  // The value that the LDR pin reads. This changes, so it is an int, and not a const int

char every_pixel_on[] = {
  8,  // x dimension
  8,  // y dimension
  B11111111,  // B stands for binary, as the 1s and 0s are binary characters
  B11111111,  // 1 represents an activated LED, o represents a deactivated one
  B11111111, 
  B11111111, 
  B11111111, 
  B11111111, 
  B11111111, 
  B11111111
};

void setup() {
  Serial.begin(9600); // Initialize baud rate for serial monitor
  my_matrix.init(); // initializes LED matrix
  my_matrix.setIntensity(8);  // initializes LED matrix brightness to 8/15
  my_matrix.clear(); // clears LED matrix (turns off all pixels)
}

void loop() {
  LDR_value = analogRead(LDR_pin);  // LDR_Value stores the value of what is read from the LDR pin.

  Serial.println(LDR_value);

  if(LDR_value > 600 && LDR_value < 800){
    // Between 600 and 800, the brightness is 3
    my_matrix.writeSprite(0,0,every_pixel_on);
    my_matrix.setIntensity(3);
  }

  else if(LDR_value > 400 && LDR_value < 600){
    // Between 400 and 600, the brightness is 8
    my_matrix.writeSprite(0,0,every_pixel_on);
    my_matrix.setIntensity(8);
  }

  else if(LDR_value < 400){
    // If the LDR value is less that 400, the brightness is 13
    my_matrix.writeSprite(0,0,every_pixel_on);
    my_matrix.setIntensity(13);
  }

  else{
    my_matrix.clear();
  }
  
}








