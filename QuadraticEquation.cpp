// Project Name: QuadraticEquations
// Name: Allysa Sewell
// Date: 5/22/18
// Class: CS 172

#include "QuadraticEquations.h"
#include <cmath>

//constructs quadraticequation
QuadraticEquation::QuadraticEquation(double A, double B, double C)
{
  a = A;
  b = B;
  c = C;
}

//accessor functions
double QuadraticEquation::getA()
{
  return a;
}

double QuadraticEquation::getB()
{
  return b;
}

double QuadraticEquation::getC()
{
  return c;
}

//calculates discriminant
double QuadraticEquation::getDiscriminant()
{
  return (b * b) - (4 * a * c);
}

//calculates roots if discriminant is 0 or greater
double QuadraticEquation::getRoot1()
{
  if (getDiscriminant() < 0)
    return 0;
  else
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

double QuadraticEquation::getRoot2()
{
  if (getDiscriminant() < 0)
    return 0;
  else
    return (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}