// Project Name: Fan
// Name: Allysa Sewell
// Date: 5/22/18
// Class: CS 172

#include <iostream>
#include "Fan.h"
using namespace std;

int main()
{
//creates 2 fan objects
  Fan fan1;
  Fan fan2;

//changes properties of the first fan
  fan1.setSpeed(3);
  fan1.setRadius(10);
  fan1.turnOn();

 //changes speed of the second fan
  fan2.setSpeed(2);

 //displays properties
  cout << " Fan 1 " << endl;
  cout <<  "speed: " << fan1.getSpeed() << endl;
  cout << " on: " << fan1.isOn() << endl;
  cout << " radius: " << fan1.getRadius() << endl;

  cout << " Fan 2 " << endl;
  cout << "speed: " << fan2.getSpeed() << endl;
  cout << " on: " << fan2.isOn() << endl;
  cout << " radius: " << fan2.getRadius() << endl;
 
  return 0;

}