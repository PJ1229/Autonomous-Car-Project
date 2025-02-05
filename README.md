<h1>Autonomous-Car-Project</h1>
<h2>Goals:</h2>
<p>My personal goal when making this project is to better understand the robotics integration between software, middleware, and hardware. As far as the software, I hope to better understand pathfinding algorithms and create an optimized program for an autonomous vehicle. For the middleware, I aim to efficiently transmit data between the Sensors, Raspberry Pi, Arduino, and Motors. Finally, I hope to make a strong car design using CAD. For the project, the goal is to make the autonomous car drive from any location to a beacon while avoiding obstacles. Another idea would be to map a racetrack using the Lidar and a RC mode, then race it using an optimal path.</p>
<h2>Hardware & Software:</h2>
  <li><a href="https://www.amazon.com/EC-Buying-Triangular-Raspberry-Navigation/dp/B0D3CWVSZX/ref=sr_1_15?crid=3KYOXXG0H5L6R&dib=eyJ2IjoiMSJ9.q0fFSRp2NhjCPqdb-Ue0i20DFFYKXJM8SYuYNmLVNs7eoJizFDGPkZ3H7y8rpdTfMKnKzjQuwse7oYMTptDQ0j9y3jzi7dMJSvzdf5ihf9scB0Ga8appFI5-2VthZUQPVfE8BBw2nh6Eg8vml0kVn27qG7k_AI4TKSmyYgl1BE6wpY43e_TVby9bmBcvt8bh6HjYvywSQD7515LOy6ro1GnuTPKmsWEdWpBXdNT_4KE.n1ZtlXItU9QCjTaVxrrIKE-WVMfK4FxE46iNcQbVtkE&dib_tag=se&keywords=lidar+sensor+arduino&qid=1731778056&sprefix=lidar%2Caps%2C189&sr=8-15">YDLidar X4Pro</a></li>
  <li><a href="https://www.amazon.com/Raspberry-Pi-4GB-2023-Processor/dp/B0CK3L9WD3/ref=sr_1_2?dib=eyJ2IjoiMSJ9.gER6ai2B6BUf_1KSPtGdIue_vjWwSDE-U73rS8GszzzAm6BXTRRT1MDgD3Cqj8n3RqyxXBaCy9f0yrznR64n-JKammtz17NOzDzW-U2uMXnt4P3jFjrxfbt0xhm82SAd5pKVhd1GmCQ-4oQsLQiUxzYeejqbIoew00jJWKDCc2iP9lwiWXr-ej-0S6kEQDn_A96iI4nGqGbeOlHzVlJfPUbxAYQgPzKyNOjpFfggDg0.AY0OztZ-686qMnDEt6CckLa2p6JNCuH-tBoveJa42QM&dib_tag=se&hvadid=678766772869&hvdev=c&hvlocphy=9016921&hvnetw=g&hvqmt=e&hvrand=17442597827152545617&hvtargid=kwd-353886121894&hydadcr=18003_13462250&keywords=raspberry+pi+5&qid=1738267133&sr=8-2">Raspberry Pi 5</a></li>
  <li><a href="https://www.amazon.com/Arduino-UNO-WiFi-ABX00087-Bluetooth/dp/B0C8V88Z9D/ref=sr_1_1?crid=1BO9KWF2JL39H&dib=eyJ2IjoiMSJ9.6-55ZkgVCQpz5t-A9OQ_Ildv0DyBwpZWs8xW7zIX7HX_ozW2L-NgkgFic5fVUp8o80pG3s-5za_D1PDpSuphzoW5vmpEgKtW_QqW3wlgGmxDTkJyqJrwCMaRwOXGa0t3Su49SAeI_aDSYufDAm9diFXFrx-S2nQr34xMsy96c-IcdS-9yiDMHiQdA0wZjgmi18PaPlUGBR4s8tuEjFAiUJe6A55mZkT4VHz7Uw7H4jY.pqHtAQwv3LdvtAox88BgnTwd_tOlL8mnbR4ZqNQ2kkU&dib_tag=se&keywords=arduino+r4+wifi&qid=1738267169&sprefix=arduino+r4%2Caps%2C125&sr=8-1">Arduino Uno R4 Wifi</a></li>
  <li><a href="https://www.amazon.com/AEDIKO-Motor-Gearbox-Shaft-200RPM/dp/B099Z85573/ref=asc_df_B099Z85573?mcid=22741f950f8e35a582f1a407dade4a8a&tag=hyprod-20&linkCode=df0&hvadid=693612458080&hvpos=&hvnetw=g&hvrand=2851401784511676869&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9016921&hvtargid=pla-1469864848772&psc=1">Motors</a> & <a href="https://www.amazon.com/BOJACK-H-Bridge-Controller-Intelligent-Mega2560/dp/B0C5JCF5RS/ref=pd_bxgy_thbs_d_sccl_1/146-5344172-2148713?pd_rd_w=SPyvN&content-id=amzn1.sym.53b72ea0-a439-4b9d-9319-7c2ee5c88973&pf_rd_p=53b72ea0-a439-4b9d-9319-7c2ee5c88973&pf_rd_r=B4KPMTSAA9K51S5KVXBF&pd_rd_wg=MQ7kp&pd_rd_r=753ce9ad-7da6-4532-8f69-39f148b448f4&pd_rd_i=B0C5JCF5RS&psc=1">Motor Controllers</a></li>
  <li><a href="https://platformio.org/">PlatformIO</a> for VSCode Arduino Software Development</li>
<h2>Software Development:</h2>
<p><a href="https://github.com/PJ1229/Autonomous-Car-Project/blob/main/Setup.md">Link to software development setup & notes.</a></p>
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
