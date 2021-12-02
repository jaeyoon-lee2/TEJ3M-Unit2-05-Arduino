/*
  Created by: Jaeyoon Lee
  Created on: Dec 2021
  
  Moves the servo through 180° and then back again
*/


#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(2);
  servo.write(0);
  delay(1000);
}

void loop()
{
  for (int angle = 0; angle < 180; angle++)
  {
    servo.write(angle);
    delay(15);
  }
  for (int angle = 180; angle > 0; angle--)
  {
    servo.write(angle);
    delay(15);
  }
}
