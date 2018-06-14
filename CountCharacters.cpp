// Project Name: CountCharacters
// Name: Allysa Sewell
// Date: 6/2/18
// Class: CS 172

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string filename;
  cout << "Enter a filename: " << endl;
  cin >> filename;

  //creates file object to open the file entered
  ifstream input(filename.c_str());

  //the program stops if the file cannot be found
  if (input.fail())
  {
    cout << "The file does not exist" << endl;
    cin >> filename;
    return 0;
  }

  //gets characters until the end of the file is reached and increases
  //the count each time a character is obtained
  char ch = input.get();
  int numberOfCharacters = 1;
  while (!input.eof())
  {
    ch = input.get();
    numberOfCharacters++;
  }

  //closes the file
  input.close();

  cout << "The number of characters is: " << numberOfCharacters << endl;
  return 0;
}