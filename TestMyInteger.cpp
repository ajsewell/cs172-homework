//Project Name: MyInteger
// Name: Allysa Sewell
// Date: 5/23/18
// Class: CS 172

#include "MyInteger.h"
#include <iostream>
#include <string>
using namespace std;

void displayEven()
{
  cout << "The value is even" << endl;
}

void displayOdd()
{
  cout << "The value is odd" << endl;

}

void displayPrime()
{
  cout << "The value is a prime number" << endl;
}

void displayNotPrime()
{
  cout << "The value is not a prime number" << endl;
}

void displayEqual()
{
  cout << "The values are equal" << endl;
}

void displayNotEqual()
{
  cout << "The values are not equal" << endl;
}

int main()
{
  //creates MyInteger object with value 7
  MyInteger integer1(7);

  //displays value
  cout << "The value is: " << integer1.getValue() << endl;
 
  //shows if the value is odd, even, or prime
  if (integer1.isEven())
    displayEven();
  if (integer1.isOdd())
    displayOdd();
  if (integer1.isPrime())
    displayPrime();
  else
    displayNotPrime();

  //shows if 4 is odd, even, or prime
  if (MyInteger::isEven(4))
    displayEven();
  if (MyInteger::isOdd(4))
    displayOdd();
  if (MyInteger::isPrime(4))
    displayPrime();
  else
    displayNotPrime();

  //shows if the value is odd, even, or prime
  if (MyInteger::isEven(integer1))
    displayEven();
  if (MyInteger::isOdd(integer1))
    displayOdd();
  if (MyInteger::isPrime(integer1))
    displayPrime();
  else
    displayNotPrime();

  //shows if a number is equal to the value
  if (integer1.equals(7))
    displayEqual();
  else
    displayNotEqual();  

  //creates MyInteger object with value 8
  MyInteger integer2(8);

  //shows if the values of the two objects are equal
  if (integer1.equals(integer2))
    displayEqual();
  else
    displayNotEqual();


  //converts the string to an integer
  string s;
  cout << "Enter a string: " << endl;
  cin >> s;

  cout << "The integer is: " << MyInteger::parseInt(s) << endl;


  return 0;
}