#pragma once
#include <Arduino.h>

// Pin mapping: (red=3, green=5, blue=6)
const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;

void setupLED(){
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue){
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void color(int red, int green, int blue){ //rgb values
    setColor(red, green, blue);
}