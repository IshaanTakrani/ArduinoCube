// LDR demo
// Ishaan Takrani
// Arun Chauhan

const int LDR_pin = 0;  // The Arduino pin that the LDR is connected to. It is constant, so it is a const int
int LDR_value = 0;  // The value that the LDR pin reads. This changes, so it is an int, and not a const int

void setup() {
  Serial.begin(9600); // Initialize baud rate for serial monitor
}

void loop() {
  LDR_value = analogRead(LDR_pin);  // LDR_Value stores the value of what is read from the LDR pin.
  Serial.print("LDR Value is: ");   // Prints this to the serial monitor
  Serial.println(LDR_value);  // Prints the LDR value
  delay(200); // Refreshes every 200 milliseconds. This means that the LDR value is read and displayed every 200 milliseconds
}