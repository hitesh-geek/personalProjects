# Smart Weather Monitor System (SWMS) with TFT & DHT11

A weather‐monitoring project built on an STM32F401RBT6 (RaayanMini). It reads temperature and humidity from a DHT11 sensor, displays the data on an ST7735 TFT screen, and sends updates over WiFi using an ESP8266 module. CMSIS-FreeRTOS manages real‐time scheduling so that sensor readings, display updates, and data uploads run smoothly in parallel.

---

## 🛠 Tools & Components

- **Microcontroller:** STM32F401RBT6 (RaayanMini)  
- **Sensor:** DHT11 (Temperature & Humidity)  
- **Display:** ST7735 TFT (SPI interface)  
- **WiFi Module:** ESP8266 (AT-command mode over UART)  
- **RTOS:** CMSIS-FreeRTOS (task management, delays, synchronization)  
- **IDE:** STM32CubeIDE v1.18.0  

---

## 🔧 How It Works

1. **Sensor Reading (FreeRTOS Task)**  
   - A low-priority task wakes every second to read temperature and humidity from the DHT11.

2. **Display Update (FreeRTOS Task)**  
   - A medium-priority task uses SPI to draw the latest readings on the ST7735 TFT.  
   - Because it’s non-blocking, the display never stalls when the WiFi task is busy.

3. **Data Transmission (FreeRTOS Task)**  
   - Every five seconds, a high-priority task formats an HTTP request and sends it via UART to the ESP8266, which forwards the data to a remote server (for example, a simple REST API).

4. **RTOS Coordination**  
   - CMSIS-FreeRTOS schedules these three tasks (sensor, display, WiFi) so they run as if parallel—no more blocking `HAL_Delay()` calls. Tasks communicate via queues or semaphores where needed.

---

## ⚙️ Features & Highlights

- **Real-Time Scheduling**  
  Sensor reads and display updates happen independently; even if ESP8266 responses lag, the TFT still refreshes smoothly.

- **Multi-Protocol Integration**  
  Combines **SPI** (for the ST7735), **UART** (for the ESP8266), and a custom DHT11 driver—packaged into one firmware image.

- **Wireless Data Upload**  
  ESP8266 in AT-command mode handles HTTP GET/POST requests. Data (temperature + humidity) appears on a remote dashboard every 5 seconds.

---

## ✔️ Key Takeaways

- **CMSIS-FreeRTOS on STM32F4**  
  Splitting functionality into tasks instead of `HAL_Delay()` makes the system more responsive and reliable.

- **Peripheral Prioritization**  
  Learning to juggle DMA vs. interrupt priorities taught me how to manage multiple interfaces without data collisions.

- **Hands-On Wireless Experience**  
  Crafting AT commands for HTTP requests over UART unlocked a deeper understanding of microcontroller↔WiFi module communication.

- **User Experience**  
  Real-time weather data on a vibrant TFT + online updates is rewarding—especially as a first project under my belt.


