// Project Name: Rectangle2D
// Name: Allysa Sewell
// Date: 5/26/18
// Class: CS 172

#include "Rectangle2D.h"
#include <iostream>
using namespace std;

int main()
{
  //creates three Rectangle2D objects
  Rectangle2D r1(2, 2, 5.5, 4.9);
  Rectangle2D r2(4, 5, 10.5, 3.2);
  Rectangle2D r3(3, 5, 2.3, 5.4);

  //displays r1's area and perimeter
  cout << "Area: " << r1.getArea() << endl;
  cout << "Perimeter: " << r1.getPerimeter() << endl;

  //shows if the point (3, 3) is in r1
  cout << "Contains (3, 3): " << r1.contains(3, 3) << endl;

  //shows if r2 is inside r1
  cout << "Contains r2: " << r1.contains(r2) << endl;

  //shows if r1 and r3 overlap
  cout << "Overlaps r3: " << r1.overlaps(r3) << endl;

  return 0;
}