#include <Arduino.h>  // Include the Arduino library

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming byte
    String data = Serial.readString();
    // Print the received data to the Serial Monitor
    Serial.println("Received from Raspberry Pi: " + data);
  }
}
