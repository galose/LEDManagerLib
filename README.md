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

Clone or download this repository into your PlatformIO global library folder:

