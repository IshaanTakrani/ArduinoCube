// Ultrasonic sensor demonstration
// Ishaan Takrani
// Arun Chauhan

const int trig = 2; // ultrasonic sensor trig pin
const int echo = 3; // ultrasonic sensor echo pin


/*
  Long is a datatype that is a 
  signed 32-bit number.
  They can range from -2,147,483,648 to 2,147,483,647
  the duration is a long variable, because it needs to 
  store a very precice number.
  The distance does not need to be as precice, 
  so it is an integer (int)
*/
long duration;  
int distance;

const int red = 8;  // The traffic light LED pins
const int yellow = 9;
const int green =  10;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  /*
    All of the pins are outputs except for the echo pin.
    The trig (trigger) pin is used to trigger an ultrasonic sound pulse,
    while echo receives it after it bounces off of an object.
    Since echo must measure this pulse and tell the Arduino
    microcontroller about it, it needs an input pin.
  */

  Serial.begin(9600);

}

void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = (duration/2) * 0.034;

  /*
    Trig, which triggers an ultrasonic pulse is disabled
    for 2 microseconds
    (for reference, there are 1000 microseconds in a millisecond).
    Then, trig is activated for 10 microseconds,
    sending out an ultrasonic pulse.
    The time that the pulse takes to reach the object
    then back to the Arduino is recorded and moved to the variable
    duration using the pulseIn function
    The distance formula is used to calculate the
    distance based off of the duration.
  */


  if (distance < 50){
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }

  else if (distance > 50 && distance < 75){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  }

  else{
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
  }

  /*
    If the distance is less than 50, all three
    of the LEDs are turned off except for the green one.
    else if is generally used in situations where more
    than one if statement is needed. The else if statement
    will only be checked if the if statement is false. 
    This is different from just if statements because
    with if statements, they are all checked separately,
    whether or not any are false.
    The else statement is like an else if statement
    with no condition. If all of the if and else if statements
    before it are false, whatever is in the else block will run.
    Serial.println(distance) is used to print the distance to the serial monitor.
    This is not necessary, but it can be used to keep track of the distance and diagnose potential problems with the setup/code.
  */

  Serial.println(distance); // outputs distance to serial monitor

}
