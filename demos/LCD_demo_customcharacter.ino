// Copyright © 2023 LastMinuteEngineers.com
// Modified by Ishaan Takrani

#include <LiquidCrystal_I2C.h>  // Including the library 

byte key[8] = {
/*
    This is an 8 item array where each item
    is an object of the byte class.
    Every line of the array is a byte that stores
    0s and 1s that compile a line of pixels.
    
    1 means an activated pixel where 0 means
    a deactivated pixel.
*/
0b00000,
0b00110,
0b00100,
0b00110,
0b00100,
0b01110,
0b01010,
0b01110
};

byte heart[8] = {
0b00000,
0b00000,
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000
};

LiquidCrystal_I2C my_lcd = LiquidCrystal_I2C(0x27,16,2);

void setup() {

  my_lcd.init();    // Initializes the LCD
  my_lcd.clear();   // Clears the LCD (empty display)
  my_lcd.backlight();   // Activates the LCD's backlight

  my_lcd.createChar(0, key);  // This line initializes 0 as the key character
  my_lcd.createChar(1, heart);  // This line initializes 1 as the heart character

  my_lcd.setCursor(7, 0); // Sets the cursor position to (7, 0)
  my_lcd.write(0); // displays 0 (key, see line 45)

  my_lcd.setCursor(8, 0);   // Sets the cursor position to (8, 0)
  my_lcd.write(1); // displays 1 (heart, see line 46)
}

void loop() {
  // Nothing here yet, but there needs to be for task 14
}