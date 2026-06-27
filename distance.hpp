#include <Arduino.h>

const int trigPin = 9;
const int echoPin = 10;

void setupEcho(){
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

double getDistance() {
    const int samples = 30;
    double sum = 0;
    int validSamples = 0;

    for (int i = 0; i < samples; i++) {
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);

        long time = pulseIn(echoPin, HIGH, 30000); // Timeout nach 30ms (~5m)
        if (time > 0) {
            double distance = time * 0.034 / 2.0; //0.034 is speed of sound in cm/ms
            sum += distance;
            validSamples++;
        }

        delay(10);
    }

    if (validSamples == 0) {
        return 0;
    }
    return sum / validSamples;
}