// Project Name: Complex
// Name: Allysa Sewell
// Date: 6/5/18
// Class: CS 172

#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
  //input complex numbers
  cout << "Enter the first complex number: " << endl;
  Complex complex1;
  cin >> complex1;

  cout << "Enter the second complex number: " << endl;
  Complex complex2;
  cin >> complex2;

  //add complex numbers and displays the result
  cout << "(" << complex1 << ") + (" << complex2 << ") = "
  << complex1 + complex2 << endl;

  //subtract complex numbers and displays the result
  cout << "(" << complex1 << ") - (" << complex2 << ") = "
  << complex1 - complex2 << endl;

  //multiply complex numbers and displays the result
  cout << "(" << complex1 << ") * (" << complex2 << ") = "
  << complex1 * complex2 << endl;

  //divide complex numbers and displays the result
  cout << "(" << complex1 << ") / (" << complex2 << ") = "
  << complex1 / complex2 << endl;

  //take absolute value of the first complex number
  cout << "| " << complex1 << " | = " << complex1.abs() << endl;

  return 0;


}