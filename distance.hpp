#include <Arduino.h>

const int trigPin = 12;
const int echoPin = 11;

void setupEcho(){
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

double getDistance() {
    //Measurement (10 ms pulse)
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    //Calculation of distance
    long time = pulseIn(echoPin, HIGH, 30000); // Timeout nach 30ms (~5m)
    double distance = time * 0.034 / 2.0; //0.034 is speed of sound in cm/ms

    return distance;
}
