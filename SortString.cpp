// Project Name: SortString
// Name: Allysa Sewell
// Date: 5/23/18
// Class: CS 172

//PT -- nice work. 20/20

#include <iostream>
#include <string>
using namespace std;

string sort(string& s)
//puts characters in a string in alphabetical order
{
  int size = s.size();
  // finds greatest character and assigns it to the highest
  //string index still  included in the loop
  for (int j = size; j >= 0; j--)
    for (int i = 0 ; i < j; i++)
      if (s[i] > s[j - 1])
      {
        double temp = s[i];
        s[i] = s[j - 1];
        s[j - 1] = temp;
      }
  return s;
}

int main()
{
  cout << "Enter a string: " << endl;
  string s;
  cin >> s;
  cout << "The sorted string is: " << sort(s) << endl;

}
