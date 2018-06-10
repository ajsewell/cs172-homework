// Project Name: IncreaseArraySize
// Name: Allysa Sewell
// Date: 5/25/18
// Class: CS 172

#include <iostream>
using namespace std;

// 17/20

int* doubleCapacity(const int* list, int size)
{
  int* newList = new int[size * 2]; //doubles the capacity of an array
  //adds values from the old array to the new array
  for (int i = 0; i < size; i++) 
    newList[i] = list[i];

  //PT -- you don't want to delete this here, since you're returning it.
  //      if you were testing this in main(), you'd delete it there.
  //  -3
  //returns memory to system
  delete[] newList;

  return newList; //returns new array
}
