
### Arduino Joystick Controller Project README

# Arduino Joystick Controller Project

This project involves controlling an Arduino Nano ESP32 using joysticks and sending their data via WiFi using the ESP-NOW protocol. The project is structured with object-oriented principles, leveraging namespaces, tasks, and semaphores for efficient handling and communication.

## Table of Contents
- [Features](#features)
- [Setup and Installation](#setup-and-installation)
  - [Hardware Requirements](#hardware-requirements)
  - [Software Requirements](#software-requirements)
  - [Installation Steps](#installation-steps)
- [Usage](#usage)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)

## Features

- **Joystick reading**: Uses `joystick` objects assined to specific pins.
- **ESP-NOW communcation**: Sends data to the car Adruino nano ESP32 using the ESP-NOW protocol.

## Setup and Installation

### Hardware Requirements
- Arduino Nano ESP32
- Two joysticks connected to analog pins A2 and A4
- WiFi network for ESP-NOW communication

### Software Requirements
- VScode with platformIO or Arduino IDE
- ESP32 board support installed in the Arduino IDE
- Required libraries: `esp_now`, `WiFi`, `semphr`

### Installation Steps
1. **Clone the Repository**

git clone [ https://github.com/Johanna1066/WiFiControlledCar_Controller/](https://github.com/Johanna1066/WiFiControlledCar_Controller)

2. **Open the Project in Arduino IDE**
Open the .ino file from the cloned repository in the Arduino IDE.

3. **Install Required Libraries**
Required libraries: esp_now.h, WiFi.h, ESP32Servo.h, and semphr.

4. **Upload the Code**
Connect your Arduino Nano ESP32 to your computer and upload the code.

5. **Download the Car Repository**
Make sure to download the repository for the car as well.
[ https://github.com/Johanna1066/WiFiControlledCar_Car/](https://github.com/Johanna1066/WiFiControlledCar_Car)


## Usage
Once the setup is complete and the code is uploaded:

1. Power on your Arduino Nano ESP32.
2. The system will initialize the components and start the task for sensor checking.
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
