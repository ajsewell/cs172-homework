// Project Name: LinearSearch
// Name: Allysa Sewell
// Date: 5/28/18
// Class: CS 172

#include <iostream>
#include <string>
using namespace std;

template<typename T>
// checks if key matches an element of an array and returns the 
//index of the key if it is in the array
//the array can be any type
int linearSearch(const T list[], T key, int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    if (key == list[i])
      return i;
  }
  return -1;
}

int main()
{
  //test function with int values
  int list[] = { 0, 1, 2, 3, 4, 5 };
  int i = linearSearch(list, 2, 6);

  //test function with double values
  double list2[] = { 1.0, 1.1, 1.2, 1.3, 1.4, 1.5 };
  int d = linearSearch(list2, 1.0, 6);

  //test function with string values
  string list3[] = { "aaa", "bbb", "ccc" };
  string s = "ddd";
  int j = linearSearch(list3, s, 3);

  cout << i << " " << d << " " << j;
 

  return 0;
}

