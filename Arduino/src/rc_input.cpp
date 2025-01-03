#include <Arduino.h>
#include "rc_input.h"

// Setup function for rc_input
void setup_rc_input() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
  // Wait for the serial port to connect (useful for some boards)
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB port only
  }
}

// Loop function for rc_input
void loop_rc_input() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming byte
    char data = Serial.read();
    
    // Print the received key to the Serial Monitor
    if (data == 'w') {
      Serial.println("Move Up (W)");
    } else if (data == 'a') {
      Serial.println("Move Left (A)");
    } else if (data == 's') {
      Serial.println("Move Down (S)");
    } else if (data == 'd') {
      Serial.println("Move Right (D)");
    } 
  }
  
  // Add a small delay to avoid overwhelming the serial buffer
  delay(10);
}
