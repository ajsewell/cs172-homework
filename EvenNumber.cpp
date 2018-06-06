// Project Name: EvenNumber
// Name: Allysa Sewell
// Date: 5/22/18
// Class: CS 172

#include "EvenNumber.h"

//construct default object with value 0
EvenNumber::EvenNumber()
{
  value = 0;
}

//construct object with a specified value
EvenNumber::EvenNumber(int newValue)
{
  if (value % 2 == 0)
    value = newValue;
  //PT -- else ?
}

//accessor function for value
int EvenNumber::getValue()
{
  return value;
}

//returns the even number after the value
int EvenNumber::getNext()
{
  return value + 2;
}

//returns the even number before the value
int EvenNumber::getPrevious()
{
  return value - 2;
}
