import PyLidar3
import time

port = '/dev/ttyUSB0'  # Replace with your port
lidar = PyLidar3.YdLidarX4(port)

try:
    if lidar.Connect():
        print("Connected to LiDAR.")
        lidar.StartScanning()
        for scan in lidar.StartScanning():
            print(scan)
            time.sleep(0.1)
        lidar.StopScanning()
        lidar.Disconnect()
    else:
        print("Failed to connect to LiDAR.")
except Exception as e:
    print(f"An error occurred: {e}")
    lidar.Disconnect()
