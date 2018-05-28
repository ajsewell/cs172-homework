// Project Name: QuadraticEquations
//Name: Allysa Sewell
//Date: 5/22/18
// Class: CS 172

#include "QuadraticEquations.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "Enter A, B, and C" << endl;
  double A, B, C;
  cin >> A >> B >> C;

  //creates quadraticequation object
  QuadraticEquation quadraticEquation(A, B, C);

  //displays roots based on the discriminant
  if (quadraticEquation.getDiscriminant() > 0)
  {
    cout << "The roots are " << quadraticEquation.getRoot1()
    << " and " << quadraticEquation.getRoot2() << endl;
  }
  else if (quadraticEquation.getDiscriminant() == 0)
  {
    cout << "The root is " << quadraticEquation.getRoot1()
    << endl;
  }
  else
    cout << "The equation has no real roots" << endl;

  return 0;
}