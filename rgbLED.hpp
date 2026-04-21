#include <Arduino.h>

const int redPin = 6;
const int greenPin = 5;
const int bluePin = 3;

void setupLED(){
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void color(int red, int green, int blue){ //rgb values
    setColor(red, green, blue);
}
