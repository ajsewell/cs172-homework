//Project Name: QuadraticEquations
// Name: Allysa Sewell
//Date: 5/22/19
//Class: CS 172

#ifndef QUADRATICEQUATION_H_
#define QUADRATICEQUATION_H_

class QuadraticEquation
{
  public:
    QuadraticEquation(double, double, double);
    double getA();
    double getB();
    double getC();
    double getDiscriminant();
    double getRoot1();
    double getRoot2();

  private:
    double a;
    double b;
    double c;
};

#endif