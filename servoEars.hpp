#include <Arduino.h>
#include <Servo.h>

Servo myservo_ears; //Create object of Servo class

const int servoPin = 2;

void setupServoEars(){
    myservo_ears.attach(servoPin); //same as pinMode but for servo class
}

void setServoEars(int angle){
    myservo_ears.write(angle); //set angle ranging vom 0 to 180 degrees
}