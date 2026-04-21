#include <Arduino.h>
#include "distance.hpp"
#include "buzzer.hpp"
#include "rgbLED.hpp"
#include "servoEars.hpp"
#include "servoTail.hpp"

//Setting up all the input- and output channels
void setup() {                                        
  setupBuzzer();
  setupEcho();
  setupLED();
  setupServoEars();
  setupServoWagging();
}

void loop() {
  //Calculate distance from object detected by ultrasonic sensor
  double dist = getDistance();

  //Remaining still - This is the initial state of the dog
  if(dist < 2 || dist >= 80){                         
    setColor(0, 255, 255);
    setServoEars(10);
  }
  //In case there is movement, the dog will show these emotions:
  else{      

    //Joy                                      
    if(dist <= 20){                                   
      happy(); //Buzzer
      setColor(255, 255, 0); //Eyes
      setServoEars(20); //Ear position
      waggingTail(60, 120, 2); //Optional tail wagging
    }

    //Curiosity
    else if(dist > 20 && dist <= 40){                 
      surprised();
      setColor(0, 255, 0);
      setServoEars(50);
    }

    //Sadness
    else if(dist > 40 && dist <= 60){                 
      sad();
      setColor(0, 0, 153);
      setServoEars(0);
      setTail(180); //Invert tail to illustrate downhanging
    }

    //Anger
    else if(dist > 60 && dist < 80){             
      angry();
      setColor(255, 0, 0);
      setServoEars(85);
    }
  }
}
