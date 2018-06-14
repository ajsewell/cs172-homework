// Project Name: Circle
// Name: Allysa Sewell
// Date: 6/5/18
// Class: CS 172

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
public:
  Circle();
  Circle(double);
  double getArea() const;
  double getRadius() const;
  void setRadius(double);
  static int getNumberOfObjects();
private:
  double radius;
  static int numberOfObjects;
};

bool operator<(const Circle& circle1, const Circle& circle2);
bool operator<=(const Circle& circle1, const Circle& circle2);
bool operator>(const Circle& circle1, const Circle& circle2);
bool operator>=(const Circle& circle1, const Circle& circle2);
bool operator==(const Circle& circle1, const Circle& circle2);
bool operator!=(const Circle& circle1, const Circle& circle2);

#endif