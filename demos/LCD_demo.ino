// Copyright © 2023 LastMinuteEngineers.com
// Modified by Ishaan Takrani

#include <LiquidCrystal_I2C.h>  // Includinf the library 

LiquidCrystal_I2C my_lcd = LiquidCrystal_I2C(0x27,16,2);
/*
  Above: This initializes an object named "my_lcd" using an constructor of three arguments
  Argument 1: Address
  Argument 2: Width (16 spaces)
  Argument 3: Height (2 spaces)
*/

void setup() {

  my_lcd.init();    // Initializes the LCD
  my_lcd.clear();   // Clears the LCD (empty display)
  my_lcd.backlight();   // Activates the LCD's backlight

  my_lcd.setCursor(2,0);  // Sets cursor position (x, y) (2nd space, 1st line)
  my_lcd.print("Hello world!"); // Displays "Hello world!" on the display 
}

void loop() {
  // Nothing here yet
}
