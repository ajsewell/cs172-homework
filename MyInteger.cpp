//Project Name: MyInteger
// Name: Allysa Sewell
// Date: 5/23/18
// Class: CS 172

#include "MyInteger.h"
#include <string>
#include <iostream>
 
using namespace std;

// constructs MyInteger object
MyInteger::MyInteger(int newValue)
{
  value = newValue;
}

//accessor for value
int MyInteger::getValue() const
{
  return value;
}

// displays if value is even
bool MyInteger::isEven() const
{
  if (value % 2 == 0)
    return true;
  else
    return false;
}

//displays if value is odd
bool MyInteger::isOdd() const
{
  if (value % 2 != 0)
    return true;
  else
    return false;
}

// displays if value is a prime number
bool MyInteger::isPrime() const
{
  for (int divisor = 2; divisor <= value / 2; divisor++)
  {
    if (value % divisor == 0)
    {
      return false;
    }
  }
  return true;
}

//displays if a specified integer is even
 bool MyInteger::isEven(int number)
{
  if (number % 2 == 0)
    return true;
  else
    return false;
}

//displays if a specified integer is odd
bool MyInteger::isOdd(int number)
{
  if (number % 2 != 0)
    return true;
  else
    return false;
 }

//displays if a specified integer is a prime number
bool MyInteger::isPrime(int number)
{
  for (int divisor = 2; divisor <= number / 2; divisor++)
  {
    if (number % divisor == 0)
    {
      return false;
    }
  }
  return true;
}

//takes object and displays if its value is even
bool MyInteger::isEven(const MyInteger& integer1)
{
  if (integer1.value % 2 == 0)
    return true;
  else
    return false;

}

//takes object  and displays if its value is odd
bool MyInteger::isOdd(const MyInteger& integer1)
{
  if (integer1.value % 2 != 0)
    return true;
  else
    return false;
 }

//takes object  and displays if its value is prime
bool MyInteger::isPrime(const MyInteger& integer1)
{
  for (int divisor = 2; divisor < integer1.value / 2; divisor++)
  {
    if (integer1.value % divisor == 0)
      return false;
  }
  return true;
}

//displays if an integer is equal to the value
bool MyInteger::equals(int number) const
{
  if (number == value)
    return true;
  else
    return false;
}

//takes object  and displays if an integer is equal to the value
bool MyInteger::equals(const MyInteger& integer1) const
{
  if (integer1.value == value)
    return true;
  else
    return false;
}

//converts a string to an int value
int MyInteger::parseInt(const string& s)
{
 const char* s1 = s.c_str();
  

    return atoi(s1);
}



