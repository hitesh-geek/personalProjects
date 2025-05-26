# Smart Weather Monitor - STM32 + FreeRTOS

A Weather monitoring system using STM32 and FreeRTOS that reads data from sensors and displays it on a TFT screen.

## 🔧 Project Overview
- MCU: STM32F401RE
- Sensors: DHT11 (Humidity/Temp)
- Display: ST7735 1.8" TFT
- RTOS: FreeRTOS
- IDE: STM32CubeIDE

## 🧱 Architecture
- **Task 1** – Sensor polling
- **Task 2** – Display update
- **Task 3** – UART data logging

## 📦 Dependencies
- FreeRTOS (CMSIS wrapper)
- STM32 HAL
- TFT SPI library

## 🚀 Getting Started
1. Import the project in STM32CubeIDE.
2. Generate code with `.ioc` if needed.
3. Build and flash to your STM32 board.

