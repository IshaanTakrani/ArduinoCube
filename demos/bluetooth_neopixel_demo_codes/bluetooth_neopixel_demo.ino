// Controlling the NeoPixel ring using the HC-05 module
// Ishaan Takrani
#include <SoftwareSerial.h> // Includes the SoftwareSerial class for the code to work
#include <Adafruit_NeoPixel.h> // Includes code for Adafruit_NeoPixel class

Adafruit_NeoPixel my_ring = Adafruit_NeoPixel(16, 2, NEO_GRB + NEO_KHZ800);
// Above: Constructor for NeoPixel ring. The ring is in pin 2.


SoftwareSerial BTSerial(10, 11);  // Pin 10 is the TX pin and pin 11 is the RX pin on the HC-05 module

char incoming = 0; // Stores the value sent by MIT App Inventor

void setup() {
  Serial.begin(9600); // Sets the baud rate for both the Serial and Bluetooth device
  BTSerial.begin(9600);  

  my_ring.begin(); // initializes the ring
  my_ring.clear(); // clear ring (blank)
  my_ring.show(); // send instructions to ring
}

void loop() {

  if (BTSerial.available()){  // If the bluetooth module is available

    incoming = BTSerial.read(); // incoming is the value sent to the bluetooth module by the app

    Serial.println(incoming); // Outputs the incoming value to the Serial monitor (not necessary)

    if (incoming == '1'){ // If incoming is 1,

      for(int i = 0; i < 16; i++){
        my_ring.setPixelColor(i,255,0,0); // sets pixel to red
        delay(50);  // 50 millisecond delay
        my_ring.show(); // updates ring, displays the light
      }

    }

    else if (incoming == '0'){  // If incoming is 0,

      for(int i = 0; i < 16; i++){
        my_ring.setPixelColor(i,0,0,0); // sets pixel to blank
        delay(50);  // 50 millisecond delay
        my_ring.show(); // updates ring, displays the light
      }

    }
  }
}