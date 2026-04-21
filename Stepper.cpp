#include <Arduino.h>
#include <Stepper.h>

const int stepsPerRev = 2048;
Stepper myStepper(stepsPerRev, 8, 10, 9, 11);

void setup() {
  // Serial starten, damit wir im Monitor sehen, was passiert
  Serial.begin(9600);
  
  // Hier wird der Stepper eingestellt
  myStepper.setSpeed(12);
  Serial.println("System bereit. Starte Motor...");
}

void loop() {
  Serial.println("Vorwärts...");
  myStepper.step(1024);
  delay(1000);

  Serial.println("Rückwärts...");
  myStepper.step(-1024);
  delay(1000);
}