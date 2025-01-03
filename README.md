<h1>Autonomous-Car-Project</h1>
<h2>Goals:</h2>
  <li>create vizualizer</li>
  <li>move car to a point while avoiding obstacles</li>
<h2>Setup:</h2>
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
<h3>Open Serial Monitor:</h3>
  <li>open terminal on raspi</li>
  <li>run "minicom -D /dev/ttyACM0 -b 9600"</li>
  <li>alternative is to open serial monitor via platformio or remotely via ssh</li>
<br>
<p>Notes:</p>
  <li>the /dev/ttyACM0 is determined by which usb port the arduino is connected to, use ls/dev/tty* in raspi terminal to check. additionally, the 9600 is the serial monitor. you cannot run multiple serial monitors</li>
<h2>Devlog:</h2>
  <li>1.3.24 - able to send and recieve wsad inputs from raspi to arduino to run rc mode</li>
  <li>1.1.25 - continuous data flow works, starting lidar connection</li>
  <li>12.29.24 - got the remote ssh setup working and successfully sent data from raspi to arduino using usb</li>
  <li>12.28.24 - started remote ssh connetion from mac to raspi, work in progress</li>
  <li>12.25.24 - set up raspberry pi 5 and os</li>
  <li>12.24.24 - connected arduino to wifi and sent wifi details via serial monitor</li>
  <li>12.23.24 - connected arduino cli with vscode and tested motors</li>
