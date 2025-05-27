# Smart Weather Monitor System (SWMS) with TFT & DHT11

This is a weather monitoring project developed using **STM32CubeIDE**. It reads sensor data using an STM32 microcontroller, displays it on a TFT screen, and sends it over WiFi using the **ESP8266** module.

I built this project to practice interfacing multiple peripherals and using serial communication with an external WiFi module.

## 🛠 Tools and Components
- **Microcontroller**: STM32F401RBT6 (RaayanMini)
- **Sensors**:
  - DHT11 (Temperature and Humidity)
- **Display**: ST7735 TFT
- **WiFi Module**: ESP8266 (AT Command Mode)
- **IDE**: STM32CubeIDE v1.18.0
- **Communication**:
  - UART (for ESP8266)
  - SPI (for TFT)

## 🔧 What It Does
- Reads temperature and humidity
- Displays real-time data on the TFT screen.
- Sends the data to a server using ESP8266 via AT commands every 5 secs.

