// Project Name: Circle
// Name: Allysa Sewell
// Date: 6/5/18
// Class: CS 172

#include "Circle.h"

//initializes numberOfObjects
int Circle::numberOfObjects = 0;

//constructs a default circle object and increments number of objects
Circle::Circle()
{
  radius = 1;
  numberOfObjects++;
}

//constructs a circle object with the specified radius and
//increments number of objects
Circle::Circle(double radius)
{
  this->radius = radius;
  numberOfObjects++;
}

//calculates and returns the circle's area
double Circle::getArea() const
{
  return radius * radius * 3.14159;
}

//accessor function for radius
double Circle::getRadius() const
{
  return radius;
}

//sets a new radius if the new radius is 0 or greater
//else the radius is 0
void Circle::setRadius(double radius)
{
  this->radius = (radius >= 0) ? radius: 0;
}

//accessor function for number of objects
int Circle::getNumberOfObjects()
{
  return numberOfObjects;
}


// nonmember functions for overloading the relational operators

bool operator<(const Circle& circle1, const Circle& circle2)
{
  return circle1.getRadius() < circle2.getRadius();

}

bool operator<=(const Circle& circle1, const Circle& circle2)
{
  return circle1.getRadius() <= circle2.getRadius();
}

bool operator>(const Circle& circle1, const Circle& circle2)
{
  return circle1.getRadius() > circle2.getRadius();
}

bool operator>=(const Circle& circle1, const Circle& circle2)
{
  return circle1.getRadius() >= circle2.getRadius();
}

bool operator==(const Circle& circle1, const Circle& circle2)
{
  return circle1.getRadius() == circle2.getRadius();
}

bool operator!=(const Circle& circle1, const Circle& circle2)
{
  return circle1.getRadius() != circle2.getRadius();
}