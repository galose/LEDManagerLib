# LEDManagerLib

LEDManagerLib is a lightweight, non‑blocking LED control library for ESP32‑based boards.  
It provides a clean, hardware‑abstracted interface for managing single or multi‑color LEDs without scattering `pinMode()` and `digitalWrite()` calls throughout your application.

Designed for clarity, portability, and reuse across multiple PlatformIO projects.

---

## ✨ Features

- Simple API for controlling one or more LEDs  
- Non‑blocking update loop  
- Supports ON, OFF, BLINK, and custom patterns  
- Clean separation between hardware and application logic  
- Works with any ESP32 board (tested on Seeed XIAO ESP32S3)  
- PlatformIO‑friendly structure (`src/`, `include/`, `library.json`)  

---

## 📦 Installation

### **PlatformIO (recommended)**

Clone or download this repository into your PlatformIO global library folder.

---

## 📘 Examples

This library includes several ready‑to‑use examples demonstrating common LED patterns and usage styles.

### Basic Examples
- **BasicBlink** — Simple green blink using the non‑blocking update loop  
- **RGBCycle** — Cycles Red → Green → Blue with timed transitions  

### Status & Indicator Patterns
- **StatusBlink** — Heartbeat‑style green blink for OK, fast red blink for Error  
- **ErrorFlash** — Triple‑flash red error indicator used in many embedded devices  
- **MultiStatus** — Rotates through OK / Warning / Error patterns every few seconds  

### Advanced Pattern
- **PulseFade** — Smooth breathing‑style LED pulse (requires PWM‑capable pins)

All examples are located in the `examples/` folder and can be opened directly in PlatformIO via:  
**PlatformIO Home → Libraries → LEDManagerLib → Examples**

---

## 🧰 Using LEDManagerLib with the Arduino IDE

To use this library in the Arduino IDE, follow these steps:

### 1. Install the library
Since LEDManagerLib is not yet in the Arduino Library Manager, install it manually:

1. Click the green **Code** button on the GitHub page  
2. Select **Download ZIP**  
3. In Arduino IDE, go to:  
   **Sketch → Include Library → Add .ZIP Library…**  
4. Select the downloaded ZIP file

The library will now appear under:  
**Sketch → Include Library → LEDManagerLib**

### 2. Include the library in your sketch

```cpp
#include <LEDManagerLib.h>
