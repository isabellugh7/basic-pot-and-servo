#include <Servo.h>

const int potX = A2;
const int potY = A1;

int valX;
int valY; 

int mapX;
int mapY;

Servo servoX;
Servo servoY;

void setup(){
  pinMode(potX, INPUT);
  pinMode(potY, INPUT);
  servoX.attach(A3);
  servoY.attach(A4);
 
}

void loop(){
  valX = analogRead(potX);
  valY = analogRead(potY);
  mapX = map(valX, 0, 1023, 0, 160);
  mapY = map(valY, 0, 1023, 0, 160);
  servoX.write(mapX);
  servoY.write(mapY);
}
