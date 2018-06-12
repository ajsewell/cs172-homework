// Project Name: Account
// Name: Allysa 
// Date: 5/30/18
// Class: CS 172

#ifndef DATE_H_
#define DATE_H_
#include <ctime>

class Date
{
public:
  Date();
  Date(int elapseTime);
  Date(int year, int month, int day);
  int getYear();
  int getMonth();
  int getDay();
  void setDate(int elapseTime);

private:
  int year;
  int month;
  int day;
};

#endif