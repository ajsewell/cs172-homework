// Project Name: IncreaseArraySize
// Name: Allysa Sewell
// Date: 5/25/18
// Class: CS 172

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size)
{
  int* newList = new int[size * 2]; //doubles the capacity of an array
  //adds values from the old array to the new array
  for (int i = 0; i < size; i++) 
    newList[i] = list[i];

  //returns memory to system
  delete[] newList;

  return newList; //returns new array
}