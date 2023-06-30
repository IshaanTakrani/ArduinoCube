// Task 12: Night Light
// Ishaan Takrani
// Arun Chauhanc

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

  if(LDR_value < 600){
    /*
      If the LDR value is less than 600 (dark room),
      the LED matrix will light up. otherwise, it will clear
    */
    my_matrix.writeSprite(0,0,every_pixel_on);
  }

  else{
    my_matrix.clear();
  }
  
}