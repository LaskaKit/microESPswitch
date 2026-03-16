# LaskaKit microESPswitch

LaskaKit **microESPswitch** je kompaktní vývojová deska založená na **ESP32-C3**, určená pro řízení **nízkonapěťových zařízení, osvětlení a smart-home projektů**. Deska obsahuje modul **ESP32-C3-MINI** a nabízí tři spínané výstupy, komunikační rozhraní a další GPIO piny pro připojení senzorů nebo periferií.

Deska je vhodná například pro:

- smart-home projekty  
- spínání nízkonapěťových zařízení  
- IoT zařízení  
- řízení osvětlení  
- senzorové brány  

Programování probíhá přes **USB-C** pomocí Arduino IDE, ESP-IDF, PlatformIO nebo jiných nástrojů kompatibilních s ESP32.

---

# Hlavní vlastnosti

- modul **ESP32-C3-MINI**
- **WiFi + Bluetooth LE**
- **3 řízené výstupní kanály**
- **I2C konektor** pro připojení senzorů
- **SPI rozhraní** pro externí periferie
- dostupné **UART rozhraní**
- napájení a programování přes **USB-C**
- svorkovnice pro napájení externí zátěže a samotné desky

---

# Přehled hardwaru

Deska poskytuje:

- **3 spínané výstupy**
- **I2C sběrnici**
- **SPI rozhraní**
- **UART rozhraní**
- další GPIO piny

Použitý mikrokontroler je **ESP32-C3-MINI** s **4 MB flash paměti**.

---

# Pinout

## Řízené výstupní kanály

Tyto GPIO piny ovládají výstupní kanály:

| Kanál | GPIO |
|------|------|
| CH0 | GPIO0 |
| CH1 | GPIO1 |
| CH2 | GPIO4 |

Tyto výstupy lze použít například pro:

- LED
- jednobarevný/vícebarevný LED pásek
- relé
- další nízkonapěťové zátěže

---

## I2C sběrnice

Deska obsahuje konektor pro snadné připojení senzorů.

| Signál | GPIO |
|------|------|
| SDA | GPIO8 |
| SCL | GPIO10 |

Tento konektor je určen například pro senzory:

- [SHT40](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/)
- [SCD41](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/)
- [BH1750](https://www.laskakit.cz/laskakit-bh1750-snimac-intenzity-osvetleni/)
- [BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/)
- [SEN6x] (https://www.laskakit.cz/vyhledavani/?string=sen6)

## SPI rozhraní

SPI rozhraní je k dispozici pro připojení externích periferií.

| Signál |	GPIO |
|--------|-------|
| MISO |	GPIO2 |
| MOSI |	GPIO7 |
| CLK |	GPIO6 |
| CS	| GPIO3 |

Typická SPI zařízení:

- [displeje](https://www.laskakit.cz/laskakit-2-7--400x240-lcd-memory-displej/)
- ADC / DAC převodníky
- paměti
- senzory

# Napájení

Desku lze napájet několika způsoby.
- USB-C
- 5 V vstup (používá se pro programování i napájení desky)
- Svorkovnice (5–24 V pro externí zátěž)

ESP32 pracuje s logickými úrovněmi 3.3 V.

# Programování desky

Postup pro nahrání firmware:
- Připoj USB-C kabel k desce
- Stiskni a drž tlačítko FLASH
- Stiskni tlačítko RESET
- Uvolni RESET
- Uvolni FLASH
- Deska přejde do bootloader režimu a lze do ní nahrát firmware.

# Specifikace
- Parametr	Hodnota
- MCU	ESP32-C3-MINI
- Flash	4 MB
- Logické napětí	3.3 V
- Vstupní napětí (USB-C)	5 V
- Napětí pro externí zátěž	5–24 V
- Spotřeba	~72 mA
- Bezdrátová komunikace	WiFi + BLE
- Rozměry	51.5 × 23 × 12 mm

# Modul si můžeš koupit na https://www.laskakit.cz/laskakit-microespswitch/
