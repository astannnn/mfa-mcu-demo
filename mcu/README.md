
# MCU Version — Button-Based MFA (Arduino)

This folder contains the Arduino sketch `button_auth.ino` that demonstrates MFA behavior using a button.

---

## 🛠 What It Does

- Listens on digital pin D2
- Measures how long a button is held
- Accepts only durations between 2 and 3 seconds

Outputs result in **Serial Monitor**:
- ✅ Access granted
- ❌ Access denied

---

## 🧪 How to Use

### Option 1: Real Arduino or ESP32

1. Connect a pushbutton between **D2** and **GND**
2. Upload `button_auth.ino` to your board
3. Open Serial Monitor
4. Hold the button for 2–3 seconds
5. Watch the result

### Option 2: Wokwi Emulator (Recommended)

1. Go to [https://wokwi.com](https://wokwi.com)
2. Create Arduino Uno project
3. Paste the sketch from `button_auth.ino`
4. Add button:
   - One side → D2
   - Other side → GND (diagonally!)
5. Start Simulation and use Serial Monitor

---

## 📎 File

- `button_auth.ino` — the Arduino version of behavioral MFA
