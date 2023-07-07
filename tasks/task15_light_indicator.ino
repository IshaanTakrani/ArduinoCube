// Task 15: Light Indicator  
// Ishaan Takrani

#include <LiquidCrystal_I2C.h>  // Including the library 

const int LDR_pin = A3;
int LDR_value = 0; 

LiquidCrystal_I2C my_lcd = LiquidCrystal_I2C(0x27,16,2);

void setup() {

  my_lcd.init();    // Initializes the LCD
  my_lcd.clear();   // Clears the LCD (empty display)
  my_lcd.backlight();   // Activates the LCD's backlight

  Serial.begin(9600);

}

void loop() {

  LDR_value = analogRead(LDR_pin);
  my_lcd.setCursor(0, 0);

  if(LDR_value > 600){
    my_lcd.print("Bright");
  }

  else if(LDR_value > 300 && LDR_value < 600){
    my_lcd.print("A Little Bright");
  }

  else{
    my_lcd.print("dark");
  }

  Serial.println(LDR_value);
  delay(250);
  my_lcd.clear();
 
}
