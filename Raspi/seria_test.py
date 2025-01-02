import serial
import time

# Set up the serial connection (replace with the correct port for your Raspberry Pi)
ser = serial.Serial('/dev/ttyACM0', 9600)  # Adjust for your setup
time.sleep(2)  # Wait for the Arduino to initialize

# Send data repeatedly
data = "Hello from Raspberry Pi!"
try:
    while True:
        ser.write(data.encode())  # Send data
        print(f"Sent: {data}")
        time.sleep(1)  # Adjust the delay as needed
except KeyboardInterrupt:
    print("Stopping the data transmission.")

# Close the serial connection
ser.close()
