# Smart Weather Monitor System (SWMS) with TFT & ESP8266

This is a weather monitoring project developed using **STM32CubeIDE**. It reads sensor data using an STM32 microcontroller, displays it on a TFT screen, and sends it over WiFi using the **ESP8266** module.

I built this project to practice interfacing multiple peripherals and using serial communication with an external WiFi module.

## 🛠 Tools and Components
- **Microcontroller**: STM32F103C8T6 (Blue Pill)
- **Sensors**:
  - DHT11 (Temperature and Humidity)
- **Display**: ILI9341 TFT via SPI
- **WiFi Module**: ESP8266 (AT Command Mode)
- **IDE**: STM32CubeIDE v1.16.0
- **Communication**:
  - UART (for ESP8266)
  - SPI (for TFT)

## 🔧 What It Does
- Reads temperature, humidity, and pressure data.
- Displays real-time data on the TFT screen.
- Sends the data to a server using ESP8266 via AT commands.

