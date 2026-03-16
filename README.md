# LaskaKit microESPswitch

The LaskaKit **microESPswitch** is a compact development board based on the **ESP32-C3**, designed for controlling **low-voltage devices, lighting, and smart-home projects**. The board includes an **ESP32-C3-MINI** module and provides three switching outputs, communication interfaces, and additional GPIO pins for connecting sensors or peripherals.

The board is suitable for example for:

- smart-home projects  
- switching low-voltage devices  
- IoT devices  
- lighting control  
- sensor gateways  

Programming is done via **USB-C** using Arduino IDE, ESP-IDF, PlatformIO, or other ESP32-compatible development tools.

---

# Key Features

- **ESP32-C3-MINI** module  
- **WiFi + Bluetooth LE**  
- **3 controllable output channels**  
- **I2C connector** for sensors  
- **SPI interface** for external peripherals  
- available **UART interface**  
- **USB-C** for power and programming  
- terminal block for powering external loads and the board itself  

---

# Hardware Overview

The board provides:

- **3 switching outputs**
- **I2C bus**
- **SPI interface**
- **UART interface**
- additional GPIO pins

The microcontroller used is **ESP32-C3-MINI** with **4 MB flash memory**.

---

# Pinout

## Controlled Output Channels

These GPIO pins control the output channels:

| Channel | GPIO |
|------|------|
| CH0 | GPIO0 |
| CH1 | GPIO1 |
| CH2 | GPIO4 |

These outputs can be used for example to control:

- LEDs  
- single-color or multi-color LED strips  
- relays  
- other low-voltage loads  

---

## I2C Bus

The board includes a connector for easy sensor connection.

| Signal | GPIO |
|------|------|
| SDA | GPIO8 |
| SCL | GPIO10 |

This connector is suitable for sensors such as:

- [SHT40](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/)
- [SCD41](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/)
- [BH1750](https://www.laskakit.cz/laskakit-bh1750-snimac-intenzity-osvetleni/)
- [BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/)
- [SEN6x](https://www.laskakit.cz/vyhledavani/?string=sen6)

---

## SPI Interface

The SPI interface is available for connecting external peripherals.

| Signal | GPIO |
|--------|------|
| MISO | GPIO2 |
| MOSI | GPIO7 |
| CLK | GPIO6 |
| CS | GPIO3 |

Typical SPI devices include:

- [displays](https://www.laskakit.cz/laskakit-2-7--400x240-lcd-memory-displej/)
- ADC / DAC converters  
- memory chips  
- sensors  

---

# Power

The board can be powered in several ways:

- **USB-C**
- **5 V input** (used for programming and powering the board)
- **Terminal block** (5–24 V for external loads)

The ESP32 operates with **3.3 V logic levels**.

---

# Programming the Board

Procedure for uploading firmware:

- Connect a USB-C cable to the board
- Press and hold the **FLASH** button
- Press the **RESET** button
- Release **RESET**
- Release **FLASH**

The board will enter **bootloader mode**, allowing firmware to be uploaded.

---

# Specifications

| Parameter | Value |
|---|---|
| MCU | ESP32-C3-MINI |
| Flash | 4 MB |
| Logic voltage | 3.3 V |
| Input voltage (USB-C) | 5 V |
| External load voltage | 5–24 V |
| Power consumption | ~72 mA |
| Wireless communication | WiFi + BLE |
| Dimensions | 51.5 × 23 × 12 mm |

---

# Purchase

You can purchase the module here:

https://www.laskakit.cz/laskakit-microespswitch/
