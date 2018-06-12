// Project Name: Account
// Name: Allysa Sewell
// Date: 5/30/18
// Class: CS 172

#include "Date.h"
#include <ctime>
using namespace std;

//constructs a Date object using the current date
Date::Date()
{
  int elapseTime = time(0); 
  int yearsElapsed = elapseTime / 31557600;
  //divide by number of seconds in a year
  year = 1970 + yearsElapsed;//years elapsed since Jan 1 1970
  int monthsElapsed = elapseTime / 2629800;
  //divide by number of seconds in a year/12
  month = (monthsElapsed % 12) + 1;
  int daysElapsed = elapseTime / 86400;
  //divide by number of seconds in a day
  int dayinyear = daysElapsed % 365;
  bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  //leap years are divisible by 4 but not 100 unless they
  //are divisible by 400
  int n;
  //n depends on the day of the year at the beginning of the month

  switch (month)
  {
    case 1: n = 0; break;
    case 2: n = 31; break;
    case 3: 
      if (leapYear)
        n = 60;
      else
        n = 59; break;
    case 4: 
      if (leapYear)
        n = 91;
      else
        n = 90; break;
    case 5:
      if (leapYear)
        n = 121;
      else
        n = 120; break;
    case 6:
      if (leapYear)
        n = 152;
      else
        n = 151; break;
    case 7:
      if (leapYear)
        n = 182;
      else
        n = 181; break;
    case 8:
      if (leapYear)
        n = 213;
      else
        n = 212; break;
    case 9:
      if (leapYear)
        n = 244;
      else
        n = 243; break;
    case 10:
      if (leapYear)
        n = 274;
      else
        n = 273; break;
    case 11:
      if (leapYear)
        n = 305;
      else
        n = 304; break;
    case 12:
      if (leapYear)
        n = 335;
      else
        n = 334; break;
}
  //the part of the formula in parentheses is for calculating
  //the number of leap years that have occurred and was adapted
  //from http://www.cplusplus.com/forum/beginner/87102/
  //accessed 5/30/18
  day = dayinyear - n - (((((time(0) / 60 / 60 / 24 / 365)
  + 1970) - 1972) / 4) + 1);
}

//constructs a Date object with specified number of seconds since
// midnight January 1, 1970
Date::Date(int elapseTime)
{
  int yearsElapsed = elapseTime / 31557600;
  year = 1970 + yearsElapsed;
  int monthsElapsed = elapseTime / 2629800;
  month = (monthsElapsed % 12) + 1;
  int daysElapsed = elapseTime / 86400;
  int dayinyear = daysElapsed % 365;
  bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  int n;
  switch (month)
  {
    case 1: n = 0; break;
    case 2: n = 31; break;
    case 3:
      if (leapYear)
        n = 60;
      else
        n = 59; break;
    case 4:
      if (leapYear)
        n = 91;
      else
        n = 90; break;
    case 5:
      if (leapYear)
        n = 121;
      else
        n = 120; break;
    case 6:
      if (leapYear)
        n = 152;
      else
        n = 151; break;
    case 7:
      if (leapYear)
        n = 182;
      else
        n = 181; break;
    case 8:
      if (leapYear)
        n = 213;
      else
        n = 212; break;
    case 9:
      if (leapYear)
        n = 244;
      else
        n = 243; break;
    case 10:
      if (leapYear)
        n = 274;
      else
        n = 273; break;
    case 11:
      if (leapYear)
        n = 305;
      else
        n = 304; break;
    case 12:
      if (leapYear)
        n = 335;
      else
        n = 334; break;
  }
  day = dayinyear - n - (((((elapseTime / 60 / 60 / 24 / 365)
  + 1970) - 1972) / 4) + 1);

}

//constructs a Date object with the specified values
Date::Date(int day, int month, int year)
{
  this->year = year;
  this->month = month;
  this->day = day;
}


//accessor function for year
int Date::getYear()
{
  return year;
}

//accessor function for month
int Date::getMonth()
{
  return month;
}

//accessor function for day
int Date::getDay()
{
  return day;
}

//sets date based on the elapsed time
void Date::setDate(int elapseTime)
{
  int yearsElapsed = elapseTime / 31557600;
  year = 1970 + yearsElapsed;
  int monthsElapsed = elapseTime / 2629800;
  month = (monthsElapsed % 12) + 1;
  int daysElapsed = elapseTime / 86400;
  int dayinyear = daysElapsed % 365;
  bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  int n;
  switch (month)
  {
    case 1: n = 0; break;
    case 2: n = 31; break;
    case 3:
      if (leapYear)
        n = 60;
      else
        n = 59; break;
    case 4:
      if (leapYear)
        n = 91;
      else
        n = 90; break;
    case 5:
      if (leapYear)
        n = 121;
      else
        n = 120; break;
    case 6:
      if (leapYear)
        n = 152;
      else
        n = 151; break;
    case 7:
      if (leapYear)
        n = 182;
      else
        n = 181; break;
    case 8:
      if (leapYear)
        n = 213;
      else
        n = 212; break;
    case 9:
      if (leapYear)
        n = 244;
      else
        n = 243; break;
    case 10:
      if (leapYear)
        n = 274;
      else
        n = 273; break;
    case 11:
      if (leapYear)
        n = 305;
      else
        n = 304; break;
    case 12:
      if (leapYear)
        n = 335;
      else
        n = 334; break;
  }
  day = dayinyear - n - (((((elapseTime / 60 / 60 / 24 / 365)
  + 1970) - 1972) / 4) + 1);

  this->year = year;
  this->month = month;
  this->day = day;
}