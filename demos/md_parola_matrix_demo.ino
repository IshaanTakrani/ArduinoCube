// NeoPixel demonstration
// Arun Chauhan

#include <MD_Parola.h>
#include <MD_MAX72xx.h>

MD_Parola my_matrix = MD_Parola(MD_MAX72XX::GENERIC_HW, 12, 11, 10, 1);

void setup() {
  my_matrix.begin();    // initialize object
  my_matrix.setIntensity(5);    // set LED brightness to 5
  my_matrix.displayClear();     // clears display (all LEDs off)
  my_matrix.displayScroll("this is really fun!", PA_CENTER, PA_SCROLL_LEFT, 100);
  /*
    This above calls the displayScroll() function
    with the arguments of a const char* array,
    which for this purpose is used as a string.
    The * after the datatype means that the varaible 
    is a pointer. This means that if the const char* 
    variable is named "text", then printing text would 
    print a memory address. If *text were to be printed,
    then the value of text would be printed. 
  */ 
}

void loop() {

    /*
        Below is an if statement. It
        has a condition and code that
        runs based on the condition.
        If the condition is true, then the
        code in the body of the if statement
        is executed.

        In this case,
        my_matrix.displayAnimate() is the
        condition, and displayReset()
        is the code. If displayAnimate()
        is true, then displayReset()
        is executed by the computer.
    */

  if(my_matrix.displayAnimate()){
    my_matrix.displayReset();
  } 

}
