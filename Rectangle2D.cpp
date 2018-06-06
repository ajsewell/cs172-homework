// Project Name: Rectangle2D
// Name: Allysa Sewell
// Date: 5/26/18
// Class: CS 172

#include "Rectangle2D.h"

//constructs default rectangle. (x, y) is the rectangle's center
Rectangle2D::Rectangle2D()
{
  x = 0;
  y = 0;
  width = 1;
  height = 1;
}

//constructs rectangle with specified parameters
Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
  this->x = x;
  this ->y = y;
  this->width = width;
  this->height = height;
}

//accessor function for x
double Rectangle2D::getX() const
{
  return x;
}

//accessor function for y
double Rectangle2D::getY() const
{
  return y;
}

//accessor function for width
double Rectangle2D::getWidth() const
{
  return width;
}

//accessor function for height
double Rectangle2D::getHeight() const
{
  return height;
}

//mutator function for x
void Rectangle2D::setX(double x) 
{
	this->x = x;
}

//mutator function for y
void Rectangle2D::setY(double y)
{
  this->y = y;
}

//mutator function for width
void Rectangle2D::setWidth(double width)
{
  this->width = (width >= 0) ? width : 0;
}

//mutator function for height
void Rectangle2D::setHeight(double height)
{
  this->height = (height >= 0) ? height : 0;
}

//calculates area
double Rectangle2D::getArea() const
{
  return width * height;
}

//calculates perimeter
double Rectangle2D::getPerimeter() const
{
  return (2 * width) + (2 * height);
}

//checks if a point is within the boundaries of the rectangle
bool Rectangle2D::contains(double x, double y) const
{
  if (x < this->x + width / 2 && x > this->x - width / 2 && y < this->y
  + height / 2 && y > this->y - height / 2)
    return true;
  else
    return false;
}

//determines if a rectangle is inside another rectangle by checking if
//each of the corners is within the boundaries 
bool Rectangle2D::contains(const Rectangle2D &r) const
{
  if (r.x + r.width / 2 < x + width / 2 && r.x - r.width > x - width / 2
  && r.y + r.height / 2 < y + height / 2 && r.y - r.height / 2 >
  y - height / 2)
    return true;
  else
    return false;
}

//checks if an least one corner of a rectangle is inside another
//rectangle to determine if they overlap
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
  if (r.x + r.width / 2 < x + width / 2 || r.x - r.width > x - width / 2
  || r.y + r.height / 2 < y + height / 2 || r.y - r.height / 2 >
  y - height / 2)
    return true;
  else
    return false;
}