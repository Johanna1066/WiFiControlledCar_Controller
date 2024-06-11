
# WiFi controlled car - CONTROLLER project README

This project involves controlling an Arduino Nano ESP32 using joysticks and sending their data to the car Arduino Nano ESP32 via WiFi using the ESP-NOW protocol. 

## Table of Contents
- [Features](#features)
- [Setup and Installation](#setup-and-installation)
  - [Hardware Requirements](#hardware-requirements)
  - [Software Requirements](#software-requirements)
  - [Steps](#steps)
- [Usage](#usage)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)

## Features

- **Joystick reading**: Uses `joystick` objects assined to specific pins.
- **ESP-NOW communcation**: Sends data to the car Adruino nano ESP32 using the ESP-NOW protocol.

## Setup and Installation

### Hardware Requirements
- Arduino Nano ESP32
- Joysticks x2
- Arduino PSU
- Breadboard
- Cables

### Software Requirements
- VScode with platformIO
- Arduino IDE
- ESP32 board support installed in the Arduino IDE
- Required libraries: `esp_now`, `WiFi` and `semphr`

### Steps
1. **Clone the Repository**

git clone [ https://github.com/Johanna1066/WiFiControlledCar_Controller/](https://github.com/Johanna1066/WiFiControlledCar_Controller)

2. **Open the Project in VScode with platformIO**
Open the files from the cloned repository in VScode with platformIO.

3. **Install Required Libraries**
Required libraries: esp_now.h, WiFi.h, ESP32Servo.h, and semphr.

4. **Change the reciever MAC adress**
   1. Run this code on the Arduino Nano ESP32 connected to your **Car**
      to get it's MAC adress:
      ```
      #include <Arduino.h>
      #include "WiFi.h"

      void setup()
      {
        Serial.begin(115200);
        Serial.println();
        Serial.print("ESP Board MAC Address:  ");
        Serial.println(WiFi.macAddress());
      }
 
      void loop()
      {
        Serial.println(WiFi.macAddress());
      }
      ```
        
   2. Change the variable broadcastAddress in controllerNamespace.h to the 
      MAC adress of the **Car Arduino Nano ESP32**
      
5. **Upload the Code**
Connect your Arduino Nano ESP32 to your computer and upload the code.

6. **Download the Car Repository**
Make sure to download the repository for the car as well.
[ https://github.com/Johanna1066/WiFiControlledCar_Car/](https://github.com/Johanna1066/WiFiControlledCar_Car)


## Usage
Once the setup is complete and the code is uploaded:

1. Power on your Arduino Nano ESP32.
2. The system will initialize the components and start the task for joystick checking and
send data to the car ESP32.
3. The car's steering and engine will be controlled based on the sensor data and commands received via ESP-NOW from the controller.


## Contributing
Contributions are welcome! Please follow these steps to contribute:

1. Fork the repository.
2. Create your feature branch (git checkout -b feature/AmazingFeature).
3. Commit your changes (git commit -m 'Add some AmazingFeature').
4. Push to the branch (git push origin feature/AmazingFeature).
5. Open a pull request.


## Acknowledgements
Special thanks to John.

For more information, visit the project repository.
