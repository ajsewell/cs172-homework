// Project Name: FindMin
// Name: Allysa Sewell
// Date: 5/26/18
// Class: CS 172

#include <iostream>
using namespace std;

//PT -- nice work. 20/20

//goes through all elements in array and updates min if an element
//is smaller than the current min
int findMin(int* list, int size)
{
  int min = *list;
  for (int i = 0; i < size; i++)
  {
    if (*(list + i) < *list)
      min = *(list + i);
  }
  return min;
}

int main()
{
  const int SIZE = 8;
  int  array[SIZE] = { 1, 2, 4, 5, 10, 100, 2, -22 };
  //calls findMin function and displays the minimum value
  cout << "The smallest element is: " << findMin(array, SIZE) << endl;
 
  return 0;

}
