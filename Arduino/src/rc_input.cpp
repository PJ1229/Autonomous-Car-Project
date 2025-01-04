#include <Arduino.h>
#include "rc_input.h"

const int motor1pin1 = 2;
const int motor1pin2 = 3;
const int motor2pin1 = 4;
const int motor2pin2 = 5;

bool motorsRunning = false; // State variable to track motor status
char currentDirection = ' '; // Variable to store the last valid direction ('w', 'a', 's', 'd')

// Function to stop all motors
void stopMotors() {
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
}

// Function to set motors based on direction
void setMotorDirection(char direction) {
  if (direction == 'w') { // Move Up
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
  } else if (direction == 'a') { // Move Left
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
  } else if (direction == 's') { // Move Down
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
  } else if (direction == 'd') { // Move Right
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
  }
}

void setup_rc_input() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  Serial.begin(9600);
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("Press 'w', 'a', 's', or 'd' to toggle motors ON/OFF in different directions.");
  Serial.println("Press SPACEBAR to stop all motors.");
}

void loop_rc_input() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    char data = Serial.read(); // Read the incoming byte

    if (data == ' ') { // Stop motors if spacebar is pressed
      motorsRunning = false;
      currentDirection = ' ';
      Serial.println("Motors Stopped (SPACEBAR pressed)");
      stopMotors();
    } else if (data == 'w' || data == 'a' || data == 's' || data == 'd') {
      if (!motorsRunning) {
        // If motors are off, turn them on in the specified direction
        motorsRunning = true;
        currentDirection = data;
        Serial.print("Motors Running in Direction: ");
        Serial.println(data);
        setMotorDirection(currentDirection);
      } else if (currentDirection == data) {
        // If the motors are already running in the same direction, stop them
        motorsRunning = false;
        Serial.println("Motors Stopped");
        stopMotors();
      } else {
        // If the motors are running but a different direction is pressed, change direction
        currentDirection = data;
        Serial.print("Motors Changed Direction to: ");
        Serial.println(data);
        setMotorDirection(currentDirection);
      }
    }
  }

  delay(10); // Add a small delay to avoid overwhelming the serial buffer
}
