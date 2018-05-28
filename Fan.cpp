// Project Name: Fan
// Name: Allysa Sewell
// Date: 5/22/18
// Class: CS 172

#include "Fan.h"

Fan::Fan()
//constructs default fan with speed 1, turned off, and radius 5
{
  speed = 1;
  on = false;
  radius = 5;
}

//accessor function for speed
int Fan::getSpeed()
{
  return speed;
}

//mutator function for speed
void Fan::setSpeed(int newSpeed)
{
  if (newSpeed > 0 && newSpeed < 4)
    speed = newSpeed;
}

// accessor function for on
bool Fan::isOn()
{
  return on;
}

//turns fan on
void Fan::turnOn()
{
  on = true;
}

//turns fan off
void Fan::turnOff()
{
  on = false;
}

//accessor function for radius
double Fan::getRadius()
{
  return radius;
}

//mutator function for radius
void Fan::setRadius(double newRadius)
{
  if (newRadius >= 0)
    radius = newRadius;
}
