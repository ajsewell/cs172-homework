// Project Name: IsSorted
// Name: Allysa Sewell
// Date: 5/29/18
// Class: CS 172

#include <iostream>
using namespace std;

template<typename T>
//tests if an array is sorted by checking if the greatest value
//has the highest index and so on
bool isSorted(const T list[], int size)
{
  for (int j = size; j >= 0; j--)
    for (int i = 0; i < j; i++)
    {
      if (list[i] > list[j - 1])
        return false;
    }
  return true;
}

int main()
{
  // tests function for an array of integers
  int a[] = { 2,3,1,5,4 };
  cout << isSorted(a, 5) << endl;

  // tests function for a double array
  double b[] = { 1.0, 2.0, 3.0, 4.0, 5.0 }; 
  cout << isSorted(b, 5) << endl;

  //tests function for a string array
  string c[] = { "aaa", "aab", "aac" };
  cout << isSorted(c, 3) << endl;
  return 0;
}