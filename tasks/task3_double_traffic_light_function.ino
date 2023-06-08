// Task 3: Double traffic light function
// Ishaan Takrani
// Arun Chauhan

/*
  Each LED pin on the Arduino can be
  represented by an easily understandable
  name. These are called variables.

  The number values assigned to the variable
  can vary based on which arduino pins you use
*/
int green_led = 3;
int yellow_led = 4;
int red_led = 5;

int green_led_2 = 6;
int yellow_led_2 = 7;
int red_led_2 = 8;


void doubleTrafficLightSystem(uint8_t green, uint8_t yellow, uint8_t red, uint8_t green2, uint8_t yellow2, uint8_t red2){
  
  digitalWrite(red2, LOW);   //second red led is off
  digitalWrite(red, HIGH);  // first red led is on
  digitalWrite(green2, HIGH);  // second green led is on for 5 seconds
  delay(5000);
  
  digitalWrite(green2, LOW); // green led 2 turns off, and yellow led 2 turns on for 2 seconds
  digitalWrite(yellow2, HIGH);
  delay(2000);

  digitalWrite(yellow2, LOW);  // yellow led 2 turns off, and red led 2 turns on.
  digitalWrite(red2, HIGH);  // At this point, the second light has completed a green -> red cycle 


  digitalWrite(red, LOW); // red led 1 (finally) turns off
  digitalWrite(green, HIGH);  // green led 1 turns green for 5 seconds
  delay(5000);


  digitalWrite(green, LOW); // green led 1 turns off and the yellow one turns on for 2 seconds
  digitalWrite(yellow, HIGH);
  delay(2000); 

  digitalWrite(yellow, LOW);  // finally, yellow led one turns off and the red one turns on
}


void setup() {
  /*
  In void setup, all of the LED
  pins are defined are defined
  as outputs. This is because the LED's
  receive instructions / information from
  the Arduino, and not the other way around 
  */
  pinMode(green_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);

  pinMode(green_led_2, OUTPUT);
  pinMode(yellow_led_2, OUTPUT);
  pinMode(red_led_2, OUTPUT);
}

void loop() {
  
  /*
  below is the function call. The function is called 
  and takes the led's as arguments. The arguments are
  passed to the function, and the function uses them.

  The variables that are passed to the function
  can have different names as the variables listed
  when defining the function above, but
  as long as the argument has the desired position,
  it will work.
  
  For example, the green_led variable in the function call is
  the first argument, and in the function definition above, 
  the first argument has the name green. This means that
  everytime "green" is used in the function, the action will
  apply to the green_led.
  */

  doubleTrafficLightSystem(green_led, yellow_led, red_led, green_led_2, yellow_led_2, red_led_2);

}
