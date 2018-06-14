// Project Name: BabyNames
// Name: Allysa Sewell
// Date: 6/2/18
// Class CS 172

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 1000; //SIZE is a global constant

//searches an array for a name and prints the corresponding rank
void printRank(string name, string array[], string ranks[], int year,
int size)
{
  bool ranked = false; //will be switched to true if the name is found
  for (int i = 0; i < size; i++)
  {
    if (array[i] == name)
    {
      cout << name << " is ranked #" << ranks[i] << " in year "
      << year << endl;
      ranked = true;
    }
  }
  if (!ranked) //prints following statement if name is not ranked
    cout << "The name " << name << " is not ranked in year "
    << year << endl;
}

void getInput(int size, string ranks[], string boyNames[],
string girlNames[], int year, char gender, string name, ifstream& input)
{
	if (input.fail())
		cout << "Could not open file" << endl;
  //obtains strings from the file stopping at spaces
  //the strings are added to arrays
  for (int i = 0; i < size; i++)
  {
    getline(input, ranks[i], ' ');
    getline(input, boyNames[i], ' ');
    getline(input, girlNames[i], ' ');
  }
  if (gender == 'F') //the array searched depends on gender
    printRank(name, girlNames, ranks, year, SIZE);
  else if (gender == 'M')
    printRank(name, boyNames, ranks, year, SIZE);

  input.close();
}


int main()
{
  string ranks[SIZE];
  string boyNames[SIZE];
  string girlNames[SIZE];
  int year;
  char gender;
  string name;

  cout << "Enter the year: " << endl;
  cin >> year;

  cout << "Enter the gender: " << endl;
  cin >> gender;

  cout << "Enter the name: " << endl;
  cin >> name;

  if (year == 2001) //the file opened depends on the year input
  {
    ifstream input
    ("Babynameranking2001.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }


  else if (year == 2002)
  {
    ifstream input
    ("Babynameranking2002.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }
 
  else if (year == 2003)
  {
    ifstream input
    ("Babynameranking2003.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
 }

  else if (year == 2004)
  {
    ifstream input
    ("Babynameranking2004.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }

  else if (year == 2005)
  {
    ifstream input
    ("Babynameranking2005.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }

  else if (year == 2006)
  {
    ifstream input
    ("Babynameranking2006.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }
  else if (year == 2007)
  {
    ifstream input
    ("Babynameranking2007.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }

  else if (year == 2008)
  {
    ifstream input
    ("Babynameranking2008.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }

  else if (year == 2009)
  {
    ifstream input
    ("Babynameranking2009.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }

  else
  {
    ifstream input
    ("Babynameranking2010.txt");
    getInput(SIZE, ranks, boyNames, girlNames, year, gender, name, input);
  }

  int number;
  cin >> number;

  return 0;
}