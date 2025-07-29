# mfa-mcu-demo
# Advanced MFA for Social Media using MCU

This project demonstrates an experimental approach to enhancing user authentication for social media using advanced multi-factor authentication (MFA) powered by microcontroller units (MCUs), such as the ESP32.

It introduces an extra security layer beyond traditional passwords or 2FA by integrating behavioral, contextual, or biometric signals captured via a lightweight physical device.

---

## 🔐 Motivation

Social media accounts are common targets of phishing, credential leaks, and session hijacking. While passwords and SMS-based codes are widely used, they are no longer sufficient.

This project proposes using a **dedicated physical authenticator** (MCU-based device) to capture **additional signals** that verify a user's identity in a more secure and personalized way.

---

## 🧠 How It Works

The system consists of:
- A **web app** (or social network client) that initiates login.
- A **hardware device** (e.g., ESP32) that captures user data.
- A **verification step** that either accepts or rejects login based on known behavioral/biometric patterns.

### 💡 Example Use Case

1. User tries to log in to a social media account.
2. The system asks for a confirmation through the MCU device.
3. User presses a physical button or places a finger on a fingerprint sensor.
4. The MCU:
    - Reads signal (e.g., button timing, fingerprint match)
    - Sends confirmation or denial to the server.
5. Login is either approved or denied.

---

## ⚙️ Technologies

- **Microcontroller**: ESP32 (Wi-Fi/Bluetooth support)
- **Sensor options**: 
    - Fingerprint (e.g., R307)
    - Tactile button (timing-based input)
    - Accelerometer (motion pattern)
- **Protocols**: Serial/Wi-Fi communication to backend
- **Optional**: Integration with OAuth2 / WebAuthn

---

## 🔧 MCU Demo (Arduino)

Inside `/mcu/` is a demo sketch for ESP32 that:
- Waits for user button input
- Measures press duration and pattern
- Sends data over serial (or Wi-Fi) for verification

---

## 🔒 Security Considerations

- Device binding: MCU paired with user account
- Behavioral signatures are user-specific
- No biometric data stored on server
- MFA cannot be replayed or faked easily
- MCU can be used offline + online

---

## 🧪 Target Applications

- **Social media platforms**: Twitter, Facebook, Instagram
- **IoT identity verification**
- **Developer portals** (e.g., GitHub, Discord login)
- **Education**: teaching MFA concepts via embedded hardware

---

## 📐 Architecture

See `architecture.png` for the full system diagram.

---

## 🚀 Next Steps

- Add fingerprint support (R307 / GT521F32)
- Wi-Fi integration for cloud auth
- Simulated Web API with login flow
- Real-time behavior scoring model

---

## 🧑‍💻 Author

Created by Astan Tabyldy uulu  
Project for Systems Security
