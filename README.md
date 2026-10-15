# 🔌 Arduino I²C Module — Sample Project

<p align="center">
  <b>A simple demonstration of I²C communication using Arduino Uno/Nano</b>
</p>

---

## 📌 About the Project

This project demonstrates how to use the **I²C communication protocol** with an Arduino and an I²C-compatible module.

I²C uses two communication lines, SDA and SCL, to exchange data between devices, helping reduce the number of required connections.

### ✨ Features

- 🔌 Simple four-wire connection
- ⚡ Uses the I²C communication protocol
- 💻 Easy-to-understand Arduino example
- 📚 Uses the built-in `Wire.h` library
- 🛠️ Suitable for beginners and electronics projects

---

## 🔧 Hardware Requirements

| Component | Quantity |
|---|---:|
| Arduino Uno or classic Arduino Nano | 1 |
| I²C-compatible module | 1 |
| Jumper wires | As required |
| USB cable | 1 |

---

## 🔗 Wiring Connections

Connect the I²C module to the Arduino as follows:

| I²C Module Pin | Arduino Pin |
|---|---|
| **GND** | GND |
| **VCC** | +5V |
| **SDA** | A4 |
| **SCL** | A5 |

 ⚠️ **Important:** These pin assignments are for the classic Arduino Uno and classic Arduino Nano. Confirm that your module supports 5V power and logic before connecting VCC to +5V.

 ---

### ▶️ How to Run

1. Install the Arduino IDE.
2. Connect your Arduino to your computer.
3. Open the Arduino IDE and create a new sketch.
4. Paste the sample code.
5. Select the correct board and COM port.
6. Upload the code and see the magic.

The LCD will display the contents as mentioned in the code.

---

## 📥 Required Software & Libraries

### 1. Arduino IDE

Download the official Arduino IDE to write, compile, and upload sketches.

🔗 **Download:** https://www.arduino.cc/en/software

### 2. Wire.h Library

`Wire.h` is Arduino's standard I²C communication library. It provides functions for communicating with I²C devices.

🔗 **Documentation:** https://docs.arduino.cc/language-reference/en/functions/communication/wire/

**Installation:** The `Wire` library is included with the standard Arduino AVR board package for classic Uno and Nano boards. No separate download is normally required.

Include it in your sketch using:

```cpp
#include <Wire.h>
```

---

## 🧠 Understanding I²C

| Signal | Function |
|---|---|
| **SDA** | Serial Data — transfers data |
| **SCL** | Serial Clock — synchronises communication |
| **GND** | Common electrical ground |
| **VCC** | Supplies power to the module |

I²C devices generally use unique addresses to identify themselves on the same communication bus.

---

## 🛠️ Troubleshooting

- **No device found:** Check SDA, SCL, VCC, and GND connections.
- **Incorrect board selected:** Verify the selected board and processor.
- **Upload failed:** Check the USB cable, COM port, and board driver.
- **Module not detected:** Confirm its I²C address, power requirements, and pull-up resistors.

---

## 👨‍💻 Developer

**Tanvir Hussain**

Arduino enthusiast | Electronics & Embedded Systems Developer

GitHub: [@TanvirCodeStorm](https://github.com/TanvirCodeStorm)

This project is created for learning, experimentation, and demonstrating basic Arduino I²C communication.
[Diagram made using Tinkercad](https://tinkercad.com)

---

<p align="center">
  <b>⚡ Learn • Build • Experiment • Innovate ⚡</b>
  <br>
  Made with ❤️ by Tanvir Hussain
</p>
