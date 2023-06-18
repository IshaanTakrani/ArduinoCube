// Task 9: scroll
// Ishaan Takrani
// Arun Chauhan

/*
  There is no defined answer to this task, 
  and each individual's code may differ.
  This code serves as an example.
*/

#include <MD_Parola.h>
#include <MD_MAX72xx.h>

MD_Parola my_matrix = MD_Parola(MD_MAX72XX::GENERIC_HW, 12, 11, 10, 1);

const char* text = ":)";

void setup() {
  my_matrix.begin();
  my_matrix.setIntensity(5);
  my_matrix.displayClear();
  my_matrix.displayScroll(text, PA_CENTER, PA_WIPE, 100); 
}

void loop() {

  if(my_matrix.displayAnimate()){
    my_matrix.displayReset();
  } 

}
