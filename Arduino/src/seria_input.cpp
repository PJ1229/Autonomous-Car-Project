#include <Arduino.h>  // Include the Arduino library
#include "seria_input.h"

void setup_seria_input() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
  // Wait for the serial port to connect (useful for some boards)
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB port only
  }
}

void loop_seria_input() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming string until newline character
    String data = Serial.readStringUntil('\n');
    // Print the received data to the Serial Monitor
    Serial.println("Received from Raspberry Pi: " + data);
  }
  // Add a small delay to avoid overwhelming the serial buffer
  delay(10);
}
