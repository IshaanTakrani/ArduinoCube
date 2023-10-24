/*
  This code allows for communication between the bluetooth module and
  the Arduino Microcontroller

  - Ishaan Takrani
*/

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);    // TX: PIN 10, RX: PIN 11

void setup() {
  Serial.begin(9600);   // Serial baud rate = 9600
  Serial.println("Enter AT Commands: ");
  BTSerial.begin(38400);   // Bluetooth device baud rate = 38400
}

void loop() {
  
  if (BTSerial.available()){    // If the bluetooth device is available
    Serial.write(BTSerial.read());  // Information from the bluetooth device is printed to the serial monitor
  }

  if (Serial.available()){  // If serial is available (serial monitor input)
    BTSerial.write(Serial.read());  // Whatever is in the serial monitor input will be sent to the bluetooth device
  }

}
