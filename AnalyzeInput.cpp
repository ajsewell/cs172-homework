// Project Name: AnalyzeInput
// Name: Allysa Sewell
// Date: 5/25/18
// Class: CS 172

#include <iostream>
using namespace std;

int main()
{
  cout << "Enter an array size: " << endl;
  int size;
  cin >> size;
  //declares array using the size input
  double* array = new double[size];
  double sum = 0;
  //inputs numbers into the array and calculates their sum
  for (int i = 0; i < size; i++)
  {
    cout << "Enter a number: " << endl;
    cin >> *(array + i);
    sum += *(array + i);
  }


  //calculates average
  double average = sum / size;

  //counts how many numbers are above the average
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (*(array + i) > average)
      count++;
  }

  //displays average and the number of members above the average
  cout << "The average is: " << average << endl;
  cout << count << " numbers are above the average" << endl;

  //returns memory
  delete[] array;

  int number;
  cin >> number;
  return 0;
}