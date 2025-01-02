import serial
import time
import sys

# Set up the serial connection (replace with the correct port for your Raspberry Pi)
ser = serial.Serial('/dev/ttyACM0', 9600)  # Adjust for your setup
time.sleep(2)  # Wait for the Arduino to initialize

# Send data repeatedly
data = "Hello from Raspberry Pi!\n"  # Append newline character
try:
    while True:
        ser.write(data.encode())  # Send data
        ser.flush()  # Flush the serial port to ensure immediate transmission
        print(f"Sent: {data.strip()}")
        sys.stdout.flush()  # Flush the standard output to ensure immediate display
        time.sleep(1)  # Adjust the delay as needed
except KeyboardInterrupt:
    print("Stopping the data transmission.")

# Close the serial connection
ser.close()
