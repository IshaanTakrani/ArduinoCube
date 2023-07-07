// Task 14: Moving Character
// Ishaan Takrani

#include <LiquidCrystal_I2C.h>  // Including the library 

byte person[8] = {
  0b11111,
  0b11111,
  0b10101,
  0b11111,
  0b11111,
  0b01010,
  0b01010,
  0b11011
};

LiquidCrystal_I2C my_lcd = LiquidCrystal_I2C(0x27,16,2);

void setup() {

  my_lcd.init();    // Initializes the LCD
  my_lcd.clear();   // Clears the LCD (empty display)
  my_lcd.backlight();   // Activates the LCD's backlight

  my_lcd.createChar(0, person);  // This line initializes 0 as the key character

}

void loop() {

  for(int i = 0;i<16;i++){
    my_lcd.setCursor(i, 0);
    my_lcd.write(0);
    delay(250);   
    my_lcd.clear();
  }

  for(int i = 0;i<16;i++){
    my_lcd.setCursor(i, 1);
    my_lcd.write(0);
    delay(250);
    my_lcd.clear();
  }
  

// The code below is for the up-and-down section of the question
// Remove or comment out the two for loops above to use this code
// Congrats if you figured out how to do it :)

  // for(int i = 0;i<16;i++){
  //   if(i % 2 == 0){
  //     my_lcd.setCursor(i, 0);
  //     my_lcd.write(0);
  //     delay(250);
  //     my_lcd.clear();
  //   }
  //   else{
  //     my_lcd.setCursor(i, 1);
  //     my_lcd.write(0);
  //     delay(250);
  //     my_lcd.clear();
  //   }
  // }

}
