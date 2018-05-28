// Project Name: EvenNumber
// Name: Allysa Sewell
// Date: 5/22/18
// Class: CS 172

#include "EvenNumber.h"
#include <iostream>
using namespace std;

int main()
{
  EvenNumber number1(16);

  cout << number1.getNext() << " " << number1.getPrevious() << endl;

  return 0;
}