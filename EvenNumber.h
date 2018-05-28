// Project Name: EvenNumber
// Name: Allysa Sewell
// Date: 5/22/18
// Class: CS 172

#ifndef EVENNUMBER_H_
#define EVENNUMBER_H_

class EvenNumber
{
public:
  EvenNumber();
  EvenNumber(int);
  int getValue();
  int getNext();
  int getPrevious();

private:
  int value;
};

#endif