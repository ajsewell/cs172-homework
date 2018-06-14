// Project Name: Circle
// Name: Allysa Sewell
// Date: 6/5/18
// Class: CS 172

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
  //create circle objects
  Circle circle1(3), circle2, circle3(4), circle4(5), circle5(2);

  //adds circle objects to an array
  Circle circles[] = { circle1, circle2, circle3, circle4, circle5 };

  //goes through the circle of circle objects and uses the > operator
  //to put them in order of increasing radius
  for (int j = Circle::getNumberOfObjects(); j >= 0; j--)
  {
    for (int i = 0; i < j; i++)
    {
      if (circles[i] > circles[j - 1])
      {
        Circle temp = circles[i];
        circles[i] = circles[j - 1];
        circles[j - 1] = temp;
      }
    }
  }

  for (int i = 0; i < Circle::getNumberOfObjects(); i++)
cout << circles[i].getRadius() << " ";

  return 0;
}
