#include <Arduino.h>
#include <Servo.h>

const int servoPinTailWagging = 4;

Servo myservoWagging;


void setupServoWagging(){
    myservoWagging.attach(servoPinTailWagging);
}


void waggingTail(int max_angle, int min_angle, int freq){
    float stepDelay = (1000.0 / freq / 2.0) / (max_angle - min_angle); //1000 / freq / 2 -> Time for movement in one direction

    // 2. Move Forward
    for (int pos = min_angle; pos <= max_angle; pos++) {
      myservoWagging.write(pos);
      delay(stepDelay); 
  }

    // 3. Move Backward
    for (int pos = max_angle; pos >= min_angle; pos--) {
      myservoWagging.write(pos);
      delay(stepDelay);
  }
}

void setTail(int angle){
  myservoWagging.write(angle);
}