# Home-automation-using-iot
A home automation project that enables control of various home devices through voice commands. The system leverages Bluetooth connectivity to communicate with a mobile phone, allowing users to manage their home environment seamlessly.


---

# Voice-Controlled Home Automation System

## Overview

This project presents a Voice-Controlled Home Automation system designed for Industrial Internet of Things (IIoT) applications. Utilizing the Arduino Nano, HC-05 Bluetooth module, and a 4-channel relay, this system provides a sophisticated, user-friendly solution for automating household appliances through voice commands.

## Objectives

- **Enhance Convenience:** Control various home appliances with simple voice commands.
- **Improve Energy Efficiency:** Manage appliance usage efficiently.
- **Upgrade User Experience:** Offer a seamless and intuitive interface for home automation.

## System Architecture

The system integrates:
- **Arduino Nano:** Acts as the central microcontroller.
- **HC-05 Bluetooth Module:** Enables Bluetooth communication with a mobile device.
- **4-Channel Relay Board:** Controls multiple appliances based on commands received.

## Components

### Hardware

- **Arduino Nano:** The main microcontroller for handling inputs and controlling relays.
- **HC-05 Bluetooth Module:** Facilitates communication between the mobile app and Arduino Nano.
- **4-Channel Relay Board:** Allows control of up to four devices or appliances.

### Software

- **Custom Android Application:** Developed to send voice commands to the Arduino Nano via Bluetooth.
- **Arduino Sketch:** Code running on the Arduino Nano to interpret commands and control relays.

## Installation

1. **Hardware Setup:**
   - Connect the HC-05 module to the Arduino Nano.
   - Attach the relay board to the Arduino Nano.
   - Connect appliances to the relay board.
   - ![image](https://github.com/user-attachments/assets/36dedb2c-1fa0-487c-bf57-197ee63ed04f)


2. **Software Setup:**
   - Upload the Arduino sketch to the Arduino Nano.
   - Install the custom Android application on your mobile device.
   - Pair the mobile device with the HC-05 Bluetooth module.

## Usage

1. Open the custom Android application.
2. Pair the app with the HC-05 Bluetooth module.
3. Use voice commands to control connected appliances.

## Integration

The integration process involves configuring the Arduino Nano and HC-05 Bluetooth module to communicate with the mobile application. 
