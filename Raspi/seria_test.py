import serial
import time

# Set up the serial connection (replace with the correct port for your Raspberry Pi)
ser = serial.Serial('/dev/ttyACM0', 9600)  # Adjust for your setup
time.sleep(2)  # Wait for the Arduino to initialize

# Send data to Arduino
data = "Hello from Raspberry Pi!"
ser.write(data.encode())  # Send data

# Close the serial connection
ser.close()
