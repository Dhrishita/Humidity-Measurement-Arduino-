# Humidity-Measurement-Arduino-
Welcome to the Humidity Measurement project repository! This project involves measuring ambient humidity using an Arduino and a DHT11 sensor. The humidity levels are displayed on a 16x2 LCD screen. This repository contains all the necessary information and code to get you started.

## Table of Contents

- [Problem Statement](#problem-statement)
- [Scope of Project](#scope-of-project)
- [About the project](#about-the-project)
- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [Connecting DHT11 with Arduino UNO](#connecting-DHT11-with-arduino-UNO)
- [Working of Project](#Working-of-Project)
- [Installation](#installation)
- [Contact](#contact)

## Problem Statement

Nowadays, there is a lack of awareness regarding the significance of humidity in our lives. Suitable humidity levels are essential to stabilize our environment and the world ecosystem, including ourselves. Monitoring the relative humidity in the air helps maintain an ideal environment. This project proposes a device that can read and display the humidity level to help us be aware of the humidity conditions around us.

## Scope of Project

The Humidity Measurement project is designed to read the humidity levels in the surroundings using a high-sensitivity humidity sensor. This prototype device activates and displays the humidity reading on an LCD screen when the ON/OFF button is pressed. The device stops operating when the button is pressed again. The accuracy of the device depends on the sensor's sensitivity.

## About the project
This Arduino-based project measures ambient humidity and displays it on a 16x2 LCD screen. The project consists of three sections:

1. Sensing humidity and temperature using the DHT11 sensor.
2. Reading the sensor's output and extracting humidity values into a suitable number in percentage.
3. Displaying the humidity and temperature on the LCD.

## Components Required

- Arduino UNO
- DHT11 Humidity and Temperature Sensor
- Breadboard
- Power supply
- 16x2 LCD Display
- Connecting wires

## Circuit Diagram

<img width="781" alt="Screenshot 2024-08-03 at 12 23 21 PM" src="https://github.com/user-attachments/assets/7eb99a40-baab-44b7-b630-85ad1f1f542c">

## Connecting DHT11 with Arduino UNO
1. Connect the ground of Arduino-Uno with the ground of the DHT-11 sensor.
(It is indicated by black wire in the figure)
2. Connect the 5V pin of Arduino-Uno to the VCC of DHT-11.
(It is indicated by red wire in the figure)
3. Connect any one of the digital pins of Arduino-Uno with the data pin (DOUT) of DHT-11 to read values from the humidity sensor.
(It is indicated by blue wire in the figure)

<img width="490" alt="Screenshot 2024-08-03 at 12 26 45 PM" src="https://github.com/user-attachments/assets/081c3718-a964-40c6-874f-1aebf74d066c">

## Working of Project

Working of this project is based on single wire serial communication. First Arduino send a start signal to DHT module and then DHT gives a response signal containing humidity data. Arduino collect and extract humidity and then send them to 16x2 LCD.

## Installation

To get started with the project, follow these steps:

1. Clone the repository:
   
   ```bash
   git clone https://github.com/Dhrishita/humidity-measurement-arduino.git
   cd humidity-measurement-arduino
   
2. Install Arduino IDE:

- Download and install the Arduino IDE.

3. Install Required Libraries:

- Open the Arduino IDE.
- Go to **'Sketch'** > **'Include Library'** > **'Manage Libraries'**.
- Search for and install the following libraries:
  - **'DHT sensor library by Adafruit'**
  - **'LiquidCrystal library'**
  
4. Open the Project in Arduino IDE:

- Open the .ino file from the cloned repository in the Arduino IDE.
  
5. Upload the Code to Arduino:

- Connect your Arduino UNO to your computer using a USB cable.
- Select the correct board and port from **'Tools'** > **'Board'** and **'Tools'** > **'Port'**.
- Click on the **'Upload'** button to upload the code to the Arduino UNO.
   
## Contact
If you have any questions or suggestions, feel free to open an issue or contact:
Dhrishita Parve: dhrishitap18@gmail.com
