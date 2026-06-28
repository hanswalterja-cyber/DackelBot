#include <Arduino.h>


const int buzzerPin = 8;

void setupBuzzer(){
    pinMode(buzzerPin, OUTPUT);
}

void surprised(){
    // High-tone alert with a quick double bark
    tone(buzzerPin, 1000, 70);
    delay(100);
    tone(buzzerPin, 1200, 70);
    delay(100);
    noTone(buzzerPin);
}

void happy(){
    // Short happy bark sequence
    for(int i = 0; i < 3; i++){
        tone(buzzerPin, 700, 90);
        delay(120);
        noTone(buzzerPin);
        delay(80);
    }
}

void sad(){
    // Low whining tone that falls slowly
    for (int freq = 900; freq >= 600; freq -= 50) {
        tone(buzzerPin, freq, 120);
        delay(150);
    }
    noTone(buzzerPin);
}

void angry(){
    // Low growl/pulse pattern
    for (int i = 0; i < 4; i++) {
        tone(buzzerPin, 300, 160);
        delay(180);
        noTone(buzzerPin);
        delay(100);
    }
}