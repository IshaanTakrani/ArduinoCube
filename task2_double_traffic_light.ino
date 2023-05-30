// Ishaan Takrani

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

  digitalWrite(red_led_2, LOW);   //second red led is off
  digitalWrite(red_led, HIGH);  // first red led is on
  digitalWrite(green_led_2, HIGH);  // second green led is on for 5 seconds
  delay(5000);
  
  digitalWrite(green_led_2, LOW); // green led 2 turns off, and yellow led 2 turns on for 2 seconds
  digitalWrite(yellow_led_2, HIGH);
  delay(2000);

  digitalWrite(yellow_led_2, LOW);  // yellow led 2 turns off, and red led 2 turns on.
  digitalWrite(red_led_2, HIGH);  // At this point, the second light has completed a green -> red cycle 


  delay(1000);  // this ensured that both lights are red for a second, as real traffic lights do this
  digitalWrite(red_led, LOW); // red led 1 (finally) turns off
  digitalWrite(green_led, HIGH);  // green led 1 turns green for 5 seconds
  delay(5000);


  digitalWrite(green_led, LOW); // green led 1 turns off and the yellow one turns on for 2 seconds
  digitalWrite(yellow_led, HIGH);
  delay(2000); 

  digitalWrite(yellow_led, LOW);  // finally, yellow led one turns off and the red one turns on
  digitalWrite(red_led, HIGH);
  delay(1000);  // 1 second delay

}
