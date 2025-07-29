
# Advanced MFA Demo Using MCU and Terminal

This project demonstrates a simple multi-factor authentication (MFA) concept using either:

- 🧠 A behavioral pattern via button press duration
- 💻 A terminal-based simulation (no hardware required)
- ⚡ Optional Arduino sketch for MCU demonstration

---

## 🔐 What It Does

The system emulates a second factor for authentication by checking **how long a button is held down**.  
If the duration is between **1.5 and 4 seconds**, access is granted — otherwise, denied.

---

## 🖥 Option 1: Python Simulation (Recommended)

File: `mfa_sim_v2.py`

### ▶️ How to Run

```bash
python mfa_sim_v2.py
```

### What It Does

1. Press Enter to simulate "button press start"
2. Wait 2–3 seconds
3. Press Enter again to "release"
4. Terminal will output ✅ or ❌

---

## ⚙️ Option 2: Arduino Sketch (Optional)

Folder: `mcu/`

Contains Arduino sketch `button_auth.ino` that:
- Listens to button input on pin D2
- Measures press duration
- Outputs result via Serial Monitor

You can test this on:
- Real ESP32 or Arduino Uno
- Or use [Wokwi online emulator](https://wokwi.com)

---

## 🧠 Purpose

This project shows that:
- MFA can include physical/behavioral confirmation
- You can simulate embedded behavior using simple tools
- It works even without real microcontrollers

---

## 📂 Files

| File | Purpose |
|------|---------|
| `mfa_sim_v2.py` | Terminal simulation of button-based MFA |
| `mcu/button_auth.ino` | Arduino sketch for button MFA |
| `mcu/README.md` | Instructions for Arduino version |

---

## ✅ Author

Created by Astan Tabyldy uulu — for academic demonstration purposes.
