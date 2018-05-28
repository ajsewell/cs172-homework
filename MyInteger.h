//Project Name: MyInteger
// Name: Allysa Sewell
// Date: 5/23/18
// Class: CS 172

#include <string>
using namespace std;

#ifndef MYINTEGER_H_
#define MYINTEGER_H_



class MyInteger
{
public:
  MyInteger(int);
  int getValue() const;
  bool isEven() const;
  bool isOdd() const;
  bool isPrime() const;
  static bool isEven(int);
  static bool isOdd(int);
  static bool isPrime(int);
  static bool isEven(const MyInteger&);
  static bool isOdd(const MyInteger&);
  static bool isPrime(const MyInteger&);
  bool equals(int) const;
  bool equals(const MyInteger&) const;
  static int parseInt(const string&);
private:
  int value;
};

#endif
