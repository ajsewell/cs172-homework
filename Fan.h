// Project Name: Fan
// Name: Allysa Sewell
// Date: 5/21/18
// Class: CS 172

#ifndef FAN_H_
#define FAN_H_

class Fan
{
public:
  Fan();
  int getSpeed();
  void setSpeed(int);
  bool isOn();
  void turnOn();
  void turnOff();
  double getRadius();
  void setRadius(double);

private:
  int speed;
  bool on;
  double radius;

};

#endif