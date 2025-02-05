<h3>Arduino Development with VS Code:</h3>
  <li>open vscode</li>
  <li>open arduino folder using platformio</li>
  <li>open src folder and place cpp files in it</li>
  <li>connect arduino to computer and upload</li>

<h3>Rasberry Pi Remote Development with VS Code:</h3>
  <li>open vscode</li>
  <li>ssh into raspi using ip address</li>
  <li>program in raspi folder</li>
  <li>click run on desired program</li>
<br>
<p>Notes:</p>
  <li>make sure to connect arduino to raspi using usb. to check ip address of raspi, run "hostname -I" in raspi terminal. </li>
  <li>the cpp files need to be built. run in linux terminal: g++ filename.cpp -o filename. then run the executable via terminal: ./filename.</li>

<h3>Setup YDLidar X4 with Raspi</h3>
<li>install git, python, cmake</li>
<li>run "git clone https://github.com/YDLIDAR/YDLidar-SDK.git" in the raspi linux terminal</li>
<li>build YDLidar-SDK by running the following commands int raspi linux terminal
  <ul>
    <li>cd YDLidar-SDK</li>
    <li>mkdir build</li>
    <li>cd build</li>
    <li>cmake ..</li>
    <li>make</li>
    <li>sudo make install</li>
  </ul>
</li>
<li>for some reason i had to use a virtual environment, this is how i did it:
  <ul>
    <li>python3 -m venv myenv</li>
    <li>source myenv/bin/activate</li>
    <li>pip install .</li>
  </ul>
</li>
<li>now you can cd into the python examples folder and run lidar examples</li>
<br>
<p>Notes:</p>
  <li>make sure to update the /dev/tty* port in the python code and install all necessary libraries</li>
      
<h3>Open Serial Monitor:</h3>
  <li>open terminal on raspi</li>
  <li>run "minicom -D /dev/ttyACM0 -b 9600"</li>
  <li>alternative is to open serial monitor via platformio or remotely via ssh</li>
<br>
<p>Notes:</p>
  <li>the /dev/ttyACM0 is determined by which usb port the arduino is connected to, use "ls /dev/tty*" in raspi terminal to check. additionally, the 9600 is the serial monitor. you cannot run multiple serial monitors</li>
<hr>
