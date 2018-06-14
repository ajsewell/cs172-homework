// Project Name: CreateTextFile
// Name: Allysa Sewell
// Date: 6/1/18
// Class: CS 172

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  //declares ofstream object
  fstream stream;

  //creates the file or appends it if it already exists

  stream.open("Exercise13_1.txt", ios::out | ios::app);
  if (stream.fail())
  {
    cout << "Could not open file" << endl;
    return 0;
  }
    
  
 
   srand(time(0));
  const int NUMBER_INTEGERS = 100;
  //generates 100 random  integers and adds them to the file
  for (int i = 0; i < NUMBER_INTEGERS; i++)
  {
    int n = rand();
    stream << n << " ";
  }

  //closes the file
  stream.close();

  return 0;
}
