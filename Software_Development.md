
Arduino Development with VS Code:
open vscode
open arduino folder using platformio
open src folder and place cpp files in it
connect arduino to computer and upload
Rasberry Pi Remote Development with VS Code:
open vscode
ssh into raspi using ip address
program in raspi folder
click run on desired program

Notes:

make sure to connect arduino to raspi using usb. to check ip address of raspi, run "hostname -I" in raspi terminal.
the cpp files need to be built. run in linux terminal: g++ filename.cpp -o filename. then run the executable via terminal: ./filename.
Setup YDLidar X4 with Raspi
install git, python, cmake
run "git clone https://github.com/YDLIDAR/YDLidar-SDK.git" in the raspi linux terminal
build YDLidar-SDK by running the following commands int raspi linux terminal
cd YDLidar-SDK
mkdir build
cd build
cmake ..
make
sudo make install
for some reason i had to use a virtual environment, this is how i did it:
python3 -m venv myenv
source myenv/bin/activate
pip install .
now you can cd into the python examples folder and run lidar examples

Notes:

make sure to update the /dev/tty* port in the python code and install all necessary libraries
Open Serial Monitor:
open terminal on raspi
run "minicom -D /dev/ttyACM0 -b 9600"
alternative is to open serial monitor via platformio or remotely via ssh

Notes:

the /dev/ttyACM0 is determined by which usb port the arduino is connected to, use "ls /dev/tty*" in raspi terminal to check. additionally, the 9600 is the serial monitor. you cannot run multiple serial monitors
