# 🔥 Fire-Fighting Robot

A smart autonomous robot designed to detect and extinguish fire using sensors and motor control. This project demonstrates the integration of robotics, fire-safety automation, IoT (optional), and embedded systems.

---

## 📌 Overview

The Fire-Fighting Robot is built to navigate an environment, detect fire using sensors (e.g., flame sensor/IR sensors), and automatically extinguish it using a water pump or fan module.  
This prototype aims to reduce human risk during fire outbreaks — especially useful in laboratories, server rooms, storage areas, and residential spaces.

---

## 🚀 Features

- 🔍 **Fire Detection using Sensors** (Flame/IR sensor)
- 📡 **Autonomous Navigation** using motor driver and obstacle sensors
- 💧 **Automatic Fire Extinguishing System** (Water pump or high-speed fan)
- 🔋 **Battery-Powered & Portable**
- 🔧 **Manual Control Support (Optional)** via Bluetooth/IoT App

---

## 🧠 Tech Stack / Hardware Used

| Component | Purpose |
|----------|---------|
| Microcontroller (Arduino) | Main processing unit |
| Flame Sensor | Fire detection |
| Ultrasonic Sensors | Obstacle avoidance (optional) |
| Motor Driver (L298N) | Controls motors |
| DC Motors / Chassis | Robot movement |
| Water Pump | Fire extinguishing |
| Battery Pack | Power supply |

---

## ⚙️ Installation & Setup

1. Upload the code (`Code.ino`) to Arduino/ESP32 using Arduino IDE.
2. Connect all sensors, motors, and pump according to the circuit diagram.
3. Supply power using a 9–12V battery pack.
4. Place the robot in the test environment and power it on.
5. The robot will automatically:
   - scan for fire  
   - move toward the heat source  
   - extinguish fire without human intervention  

(Optional) Connect via Bluetooth/IoT app if manual control mode is added.

---

## 🧪 Test Procedure

1. Place a small controlled flame (candle) in a safe testing environment.
2. Start the robot a few meters away.
3. Observe:
   - Sensor detection
   - Robot alignment toward flame
   - Extinguishing action

🔒 **Safety Tip:** Always test under supervision and keep a real fire extinguisher nearby.

---

## 🌟 Unique Points

- Autonomous decision-making without human interference
- Low-cost prototype suitable for industrial and academic research
- Can be upgraded with IoT, thermal camera, ML fire-classification, GPS, etc.
- Modular design — components can be replaced/extended easily

---

## 📌 Future Enhancements

- Thermal camera-based fire detection
- Fire intensity prediction using ML
- Cloud monitoring and real-time alert system
- Indoor location mapping using SLAM

---

## 🎯 Applications

- Server rooms & data centers  
- Warehouses & chemical labs  
- Home and office fire safety system  
- Rescue robotics research  

---

## 🤝 Contributing

Contributions are welcome!  
Fork the repository → Create a branch → Commit changes → Open a pull request.

---
