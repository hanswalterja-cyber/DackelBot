#include <Arduino.h>
#include "Distance.h"
#include "Buzzer.h"
#include "rgbLED.h"
#include "ServoEars.h"
#include "ServoTail.h"

//Setting up all the input- and output channels
void setup() {  
  Serial.begin(9600);
  setupBuzzer();
  setupEcho();
  setupLED();
  setupServoEars();
  setupServoWagging();
}
unsigned long stateStart = 0;
bool locked = false;


void loop() {
  //Calculate distance from object detected by ultrasonic sensor
  double dist = getDistance();



  Serial.print("dist="); Serial.println(dist);
  delay(50);
  
  // Anger
  if(dist < 5){
    setColor(255, 0, 0);
    angry();
    setServoEars(10);
    setTail(90);
  }
  
  else {
    if(dist >= 5 && dist<= 10){
      // Joy
      happy(); //Buzzer
      setColor(255, 255, 0); //Eyes
      setServoEars(80); //Ear position
      waggingTail(100, 180, 2); //tail wagging
    }
    else if(dist>10 && dist <= 20){
      // Curiosity
      surprised();
      setColor(0, 255, 0);
      waggingTail(120, 160, 2);
      setServoEars(150);
    }
    else if(dist >20 && dist <= 30){
      // Sadness
      sad();
      setColor(0, 0, 255);
      setServoEars(0);
      setTail(0); //Invert tail to illustrate downhanging
    }
    else {
      // Remaining still
      setColor(0, 255, 255);
      setServoEars(0);
      setTail(147);
    }
  }
}