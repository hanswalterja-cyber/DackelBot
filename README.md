# 🤖 Interaktiver Klemmbaustein-Dackel 

Dieses Projekt erweckt einen kleinen Dackel aus Klemmbausteinen zum Leben! Über einen Ultraschallsensor misst er den Abstand zu dir und reagiert mit verschiedenen Emotionen (Bellen, Schwanzwedeln, Ohren bewegen und leuchtenden Augen).


## 🔌 Anschluss-Plan (Arduino Uno Pinbelegung)

Schließe alle Komponenten genau nach dieser Liste an einem Arduino Uno an. 

*Hinweis für die Stromversorgung: Alle Komponenten mit GND (Masse/Minus) und alle mit 5V (Plus) verbinden.*

### 📍 Die Digital-Pins (Rechte Pin-Leiste auf dem Uno):

**Servo (Ohren)** - Signal -> **Pin 2**
**RGB LED (Auge - Rot)** - Signal -> **Pin 3**
**Servo (Schwanz)** - Signal -> **Pin 4**
**RGB LED (Auge - Grün)** - Signal -> **Pin 5**
**RGB LED (Auge - Blau)** - Signal -> **Pin 6**
**Buzzer (Summer)** - Signal -> **Pin 8**
**Ultraschallsensor** - Trigger (Trig) -> **Pin 9**
**Ultraschallsensor** - Echo -> **Pin 10**


## 🎭 Verhalten des Dackels (Je nach Abstand)

* **Unter 5 cm (Wut):** Augen leuchten **Rot**, der Dackel knurrt wütend, legt die Ohren an und macht den Schwanz starr.
* **5 cm bis 10 cm (Freude):** Augen leuchten **Gelb**, er bellt fröhlich und wedelt aufgeregt mit dem Schwanz.
* **10 cm bis 20 cm (Neugier):** Augen leuchten **Grün**, er macht ein überraschtes Geräusch und stellt die Ohren auf.
* **20 cm bis 30 cm (Trauer):** Augen leuchten **Blau**, er jault leise und lässt die Ohren und den Schwanz hängen.
* **Über 30 cm (Ruhemodus):** Augen leuchten **Cyan**, der Dackel verhält sich ruhig und wartet, bis sich ihm jemand nähert.