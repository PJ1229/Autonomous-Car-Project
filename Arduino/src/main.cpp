#include <Arduino.h>  // Include the Arduino library

char dataString[5] = {0};  // Adjusted size to hold 4 hex digits + null terminator
int a = 0;

void setup() {
  Serial.begin(9600);  // Starting serial communication
}

void loop() {
  a++;                            // Increment 'a' every loop
  sprintf(dataString, "%02X", a); // Convert 'a' value to hexadecimal
  Serial.println(dataString);     // Send the data via serial
  delay(1000);                    // Add a 1-second delay between loops
}
