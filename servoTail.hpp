#include <Arduino.h>
#include <Servo.h>

const int servoPinTailWagging = 4;

Servo myservoWagging;


void setupServoWagging(){
    myservoWagging.attach(servoPinTailWagging);
}


void waggingTail(int min_angle, int max_angle, int freq){
    if (freq <= 0 || max_angle <= min_angle) {
        myservoWagging.write(min_angle);
        return;
    }

    float stepDelay = (1000.0 / freq / 2.0) / (max_angle - min_angle); // time per step in ms

    // Move forward
    for (int pos = min_angle; pos <= max_angle; pos++) {
        myservoWagging.write(pos);
        delay(stepDelay);
    }

    // Move backward
    for (int pos = max_angle; pos >= min_angle; pos--) {
        myservoWagging.write(pos);
        delay(stepDelay);
    }
}

void setTail(int angle){
  myservoWagging.write(angle);
}