//Project Name: ShuffleVector
// Name: Allysa Sewell
// Date: 5/30/18
// Class: CS 172

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// 20/20

template<typename T>
void shuffle(vector<T>& v)
// shuffles a vector by generating a random index and switching
//the value at that index with the value at the current index

{
  //PT -- better to just call srand once, in main()
  srand(time(0));

  for (int i = 0; i < v.size(); i++)
  {
    int j = rand() % (i + 1);
    T temp = v[i];
    v[i] = v[j];
    v[j] = temp;
  }
}

int main()
{
  vector<int> v; //creates vector object

  for (int i = 0; i < 10; i++) //Adds 0-9 to the vector
    v.push_back(i);

  //displays the vector
  cout << "Before shuffling the vector is: " << endl; 
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  shuffle(v); //shuffles the vector

  //displays the shuffled vector
  cout << "After shuffling the vector is: " << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}
