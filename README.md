# 🤖 Interactive Brick PawPal

This project brings a small brick-built dog named **PawPal** to life! Using an ultrasonic sensor, it measures the distance to you and reacts dynamically with different emotions (barking, tail wagging, ear movements, and glowing eyes).

## 🔌 Connection Diagram (Arduino Uno Pinout)

Connect all components to your Arduino Uno exactly according to this list. 

*Note for power supply: Connect all components to **GND** (Ground/Minus) and all of them to **5V** (Positive/Plus).*

### 📍 Digital Pins (Right Pin Header on the Uno):

**Servo (Ears)** - Signal -> **Pin 2** ; 
**RGB LED (Eye - Red)** - Signal -> **Pin 3** ; 
**Servo (Tail)** - Signal -> **Pin 4** ; 
**RGB LED (Eye - Green)** - Signal -> **Pin 5** ; 
**RGB LED (Eye - Blue)** - Signal -> **Pin 6** ; 
**Buzzer (Speaker)** - Signal -> **Pin 8** ; 
**Ultrasonic Sensor** - Trigger (Trig) -> **Pin 9** ; 
**Ultrasonic Sensor** - Echo -> **Pin 10**

## 🎭 PawPal Behavior (Based on Distance)

### 🔴 Under 5 cm (Anger)
* **Eyes:** Glow **Red**
* **Sound:** Growls angrily
* **Ears:** Flattened / laid back (10°)
* **Tail:** Rigid / stiff (90°)

### 🟡 5 cm to 10 cm (Joy)
* **Eyes:** Glow **Yellow**
* **Sound:** Barks happily
* **Ears:** Raised up (80°)
* **Tail:** Wags excitedly

### 🟢 10 cm to 20 cm (Curiosity)
* **Eyes:** Glow **Green**
* **Sound:** Makes a surprised double-bark
* **Ears:** Fully alert / wide open (150°)
* **Tail:** Wags gently

### 🔵 20 cm to 30 cm (Sadness)
* **Eyes:** Glow **Blue**
* **Sound:** Whines softly
* **Ears:** Drooping / hanging down (0°)
* **Tail:** Tucked down (0°)

### 🩵 Over 30 cm (Idle / Quiet Mode)
* **Eyes:** Glow **Cyan**
* **Behavior:** Stays calm and quiet, waiting for someone to approach