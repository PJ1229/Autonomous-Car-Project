<h1>Autonomous-Car-Project</h1>
<h2>Goals:</h2>
<hr>
<p>My personal goal when making this project is to better understand the robotics integration between software, middleware, and hardware. As far as the software, I hope to better understand pathfinding algorithms and create an optimized program for an autonomous vehicle. For the middleware, I aim to efficiently transmit data between the Sensors, Raspberry Pi, Arduino, and Motors. Finally, I hope to make a strong car design using CAD.</p>

<hr>
<h2>Hardware Equipment:</h2>
  <li>YDLidar X4Pro</li>
  <li>Raspberry Pi 5</li>
  <li>Arduino Uno R4 Wifi</li>
  <li>2 Motors & Motor Controller</li>
<hr>
<h2>Software Development:</h2>

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
<h2>Devlog:</h2>
  <li>1.28.24 - still working on lidar connection, found a <a href="https://www.ydlidar.com/Public/upload/files/2024-05-07/YDLIDAR%20X4PRO%20Lidar%20User%20Manual%20V1.1(240507).pdf">user manual</a> so will use that from now on</li>
  <li>1.23.24 - got lidar connected and tested python codes, seems like it should work but am getting lidar health code -1. thinking this could have to do w power? idk</li>
  <li>1.22.24 - started setting up ros & lidar</li>
  <li>1.4.24 - able to run motors with rc mode</li>
  <li>1.3.24 - able to send and recieve wsad inputs from raspi to arduino to run rc mode</li>
  <li>1.1.25 - continuous data flow works, starting lidar connection</li>
  <li>12.29.24 - got the remote ssh setup working and successfully sent data from raspi to arduino using usb</li>
  <li>12.28.24 - started remote ssh connetion from mac to raspi, work in progress</li>
  <li>12.25.24 - set up raspberry pi 5 and os</li>
  <li>12.24.24 - connected arduino to wifi and sent wifi details via serial monitor</li>
  <li>12.23.24 - connected arduino cli with vscode and tested motors</li>
