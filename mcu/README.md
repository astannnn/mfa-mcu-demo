# MCU Demo — Button-Based MFA (No Hardware Required)

This folder contains a simple Arduino sketch (`button_auth.ino`) that demonstrates how a microcontroller (MCU) such as an ESP32 or Arduino Uno could be used as a second factor for login authentication.

---

## 🔧 What It Does

The sketch:
- Waits for the user to press a button.
- Measures how long the button is held down.
- If the duration is between 2 and 3 seconds, it prints "Access granted".
- Otherwise, it prints "Access denied".

This simulates a behavioral authentication factor (e.g., rhythm or gesture recognition) that is harder to fake than a simple password.

---

## 💻 No Hardware? No Problem.

If you don’t have an Arduino or ESP32, you can still use this code as a **conceptual demonstration**. You are not required to run it physically for this project.

Instead, you can:
- Read the code to understand the logic.
- Include the sketch as a **proof of concept** in your coursework repository.
- (Optional) Run it on online Arduino simulators like [wokwi.com](https://wokwi.com/) if needed.

---

## 🧪 How It Would Work (With Hardware)

1. Connect a push-button to GPIO2 (D2) and GND.
2. Upload the sketch to your board.
3. Open the Serial Monitor.
4. Press and hold the button for 2 to 3 seconds.
5. See the message "✅ Access granted" or "❌ Access denied".

---

## 📂 Files

- `button_auth.ino` — the Arduino sketch for MFA input logic

---

This demo is designed to show that **physical behavioral verification** using an MCU is simple, affordable, and effective even for basic security tasks.
