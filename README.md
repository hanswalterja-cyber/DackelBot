# 🤖 Interaktiver Klemmbaustein-Dackel 

Dieses Projekt erweckt einen kleinen Dackel aus Klemmbausteinen zum Leben! Über einen Ultraschallsensor misst er den Abstand zu dir und reagiert mit verschiedenen Emotionen (Bellen, Schwanzwedeln, Ohren bewegen und leuchtenden Augen).


## 🔌 Anschluss-Plan (Arduino Uno Pinbelegung)

Verkapple die Komponenten genau nach dieser Liste mit deinem Arduino Uno. 

*Hinweis für die Stromversorgung: Alle Komponenten mit GND (Masse/Minus) und alle außer der LED mit 5V (Plus) verbinden.*

### 📍 Die Digital-Pins (Rechte Pin-Leiste auf dem Uno):

| Am Bauteil                | Kabel-Funktion        | Steckplatz am Arduino Uno |
| **Servo (Ohren)**         | Signal (gelb/orange)  | **Pin 2**                 |
| **RGB LED (Auge - Rot)**  | Signal                | **Pin 3**                 |
| **Servo (Schwanz)**       | Signal (gelb/orange)  | **Pin 4**                 |
| **RGB LED (Auge - Grün)** | Signal                | **Pin 5**                 |
| **RGB LED (Auge - Blau)** | Signal                | **Pin 6**                 |
| **Buzzer (Summer)**       | Signal / IO           | **Pin 8**                 |
| **Ultraschallsensor**     | Trigger (Trig)        | **Pin 9**                 |
| **Ultraschallsensor**     | Echo                  | **Pin 10**                |


## 🎭 Verhalten des Dackels (Je nach Abstand)

* **Unter 5 cm (Wut):** Augen leuchten **Rot**, der Dackel knurrt wütend, legt die Ohren an und macht den Schwanz starr.
* **5 cm bis 10 cm (Freude):** Augen leuchten **Gelb**, er bellt fröhlich und wedelt aufgeregt mit dem Schwanz.
* **10 cm bis 20 cm (Neugier):** Augen leuchten **Grün**, er macht ein überraschtes Geräusch und stellt die Ohren auf.
* **20 cm bis 30 cm (Trauer):** Augen leuchten **Blau**, er jault leise und lässt die Ohren und den Schwanz hängen.
* **Über 30 cm (Ruhemodus):** Augen leuchten **Cyan**, der Dackel verhält sich ruhig und wartet, bis sich ihm jemand nähert.