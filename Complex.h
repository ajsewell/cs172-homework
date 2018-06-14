// Project Name: Complex
// Name: Allysa Sewell
// Date: 6/5/18
// Class: CS 172

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <string>
using namespace std;

class Complex
{
public:
  Complex(double a, double b);
  Complex(double a);
  Complex();
  string toString() const;
  Complex add(const Complex& complex2) const;
  Complex subtract(const Complex& complex2) const;
  Complex multiply(const Complex& complex2) const;
  Complex divide(const Complex& complex2) const;
  double abs() const;
  double getRealPart() const;
  double getImaginaryPart() const;

  //definitions for augmented operator functions
  Complex& operator+=(const Complex& complex2);
  Complex& operator-=(const Complex& complex2);
  Complex& operator*=(const Complex& complex2);
  Complex& operator/=(const Complex& complex2);

  //definition for [] operator function
  double& operator[](int index);

  //definitions for unary operator functions
  Complex operator+();
  Complex operator-();

  //definitions for prefix operator functions
  Complex& operator++();
  Complex& operator--();

  //definitions for postfix operator functions
  Complex operator++(int dummy);
  Complex operator--(int dummy);

  //definitions for << and >> functions
  friend ostream& operator<<(ostream&, const Complex&);
  friend istream& operator>>(istream&, Complex&);

private:
  double a;
  double b;

};

//nonmember function definitions
Complex operator+(const Complex& complex1, const Complex& complex2);
Complex operator-(const Complex& complex1, const Complex& complex2);
Complex operator*(const Complex& complex1, const Complex& complex2);
Complex operator/(const Complex& complex1, const Complex& complex2);


#endif
