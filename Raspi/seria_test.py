import serial
import time
import sys

ser = serial.Serial('/dev/ttyACM0', 9600) # Adjust accordingly
time.sleep(2)

# Send data repeatedly
data = "Hello from Raspberry Pi!\n"
try:
    while True:
        ser.write(data.encode())  # Send data
        ser.flush()  # Flush the serial port
        print(f"Sent: {data.strip()}")
        sys.stdout.flush()  # Flush the standard output
        time.sleep(1)  # Delay
except KeyboardInterrupt:
    print("Stopping the data transmission.")

# Close the serial connection
ser.close()
