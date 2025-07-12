# 🌡️ Arduino DHT11 Temperature & Humidity Monitor

This Arduino project reads **temperature** and **humidity** from a **DHT11 sensor** using the **Adafruit DHT library** and prints the values in **Celsius (°C), Fahrenheit (°F), Kelvin (K)**, and **relative humidity (%)** to the **Serial Monitor**.

---

## 📦 Features

- Reads data from a DHT11 sensor
- Displays:
  - Temperature in °C, °F, and K
  - Relative Humidity in %
- Outputs data to Serial Monitor every 30 seconds

---

## 🔌 Wiring

| DHT11 Pin | Arduino Uno |
|-----------|-------------|
| VCC       | 5V          |
| DATA      | D2          |
| GND       | GND         |

---

## 🛠️ Requirements

- Arduino IDE
- Arduino Uno (or compatible board)
- DHT11 sensor
- Jumper wires

---

## 📚 Libraries Used

- [Adafruit DHT sensor library](https://github.com/adafruit/DHT-sensor-library)
- [Adafruit Unified Sensor library](https://github.com/adafruit/Adafruit_Sensor)

You can install both from the **Arduino Library Manager**:

> **Tools → Manage Libraries → Search: "DHT" → Install**

