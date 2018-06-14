// Project Name: Complex
// Name: Allysa Sewell
// Date: 6/5/18
// Class: CS 172

#include"Complex.h"
#include <sstream>
#include <cmath>
using namespace std;

//constructs complex object with the specified values for a and b
Complex::Complex(double a, double b)
{
  this->a = a;
  this->b = b;
}

//constructs complex object with specified value for a and
//default value 0 for b
Complex::Complex(double a)
{
  this->a = a;
  b = 0;
}

//constructs complex object with default values of 0 for a and b
Complex::Complex()
{
  a = 0;
  b = 0;
}

//converts complex number object to a string
 string Complex::toString() const
{
  stringstream ss;
  ss << a;
  if (b != 0)
    ss << " + " << b << "i";
  return ss.str();
}

//adds 2 complex numbers
Complex Complex::add(const Complex& complex2) const
{
  Complex complex(a + complex2.a, b +
  complex2.b);
  return complex;
}

//subtracts 2 complex numbers
Complex Complex::subtract(const Complex& complex2) const
{
  Complex complex(a - complex2.a, b -
  complex2.b);
  return complex;
}

//multiplies 2 complex numbers
Complex Complex::multiply(const Complex& complex2) const
{
  Complex complex(a * complex2.a - b * complex2.b,
  b * complex2.a + a * complex2.b);
  return complex;
}

//divides 2 complex numbers
Complex Complex::divide(const Complex& complex2) const
{
  Complex complex((a * complex2.a + b * complex2.b) / (complex2.a *
  complex2.a + complex2.b * complex2.b), (b * complex2.a - a *
  complex2.b) / (complex2.a *complex2.a + complex2.b * 
  complex2.b));
  return complex;
}

//calculates and returns the absolute value of a complex number
double Complex::abs() const
{
  return sqrt(a * a + b * b);
}

//returns the real part of a complex number
double Complex::getRealPart() const
{
  return a;
}

//returns the imaginary part of a complex number
double Complex::getImaginaryPart() const
{
  return b;
}

//function definition for augmented operator +=
Complex& Complex::operator+=(const Complex& complex2)
{
  *this = add(complex2);
  return *this;
}

//function definition for augmented operator -=
Complex& Complex::operator-=(const Complex& complex2)
{
  *this = subtract(complex2);
  return *this;
}

//function definition for augmented operator *=
Complex& Complex::operator*=(const Complex& complex2)
{
  *this = multiply(complex2);
  return *this;
}

//function definition for augmented operator /=
Complex& Complex::operator/=(const Complex& complex2)
{
  *this = divide(complex2);
  return *this;
}

//function definition for [] operator
double& Complex::operator[](int index)
{
  if (index == 0)
    return a;
  if (index == 1)
    return b;
}

//function definition for unary + operator
Complex Complex::operator+()
{
  return *this;
}

//function definition for unary - operator
Complex Complex::operator-()
{
  return Complex(-a, -b);
}

//function definition for prefix ++ operator
Complex& Complex::operator++()
{
  a += 1;
  return *this;
}

//function definition for prefix -- operator
Complex& Complex::operator--()
{
  a -= 1;
  return *this;
}

//function definition for postfix ++ operator
Complex Complex::operator++(int dummy)
{
  Complex temp(a, b);
  a += 1;
  return temp;
}

//function definition for postfix -- operator
Complex Complex::operator--(int dummy)
{
  Complex temp(a, b);
  a -= 1;
  return temp;
}

//function definition for << operator
ostream& operator<<(ostream& out, const Complex& complex)
{
  out << complex.toString();
  return out;
}

//function definition for >> operator
istream& operator>>(istream& in, Complex& complex)
{
  in >> complex.a >> complex.b;
  return in;
}

//definition for nonmember function operator +
Complex operator+(const Complex& complex1, const Complex& complex2)
{
  return complex1.add(complex2);
}

//definition for nonmember function operator -
Complex operator-(const Complex& complex1, const Complex& complex2)
{
  return complex1.subtract(complex2);
}

//definition for nonmember function operator *
Complex operator*(const Complex& complex1, const Complex& complex2)
{
  return complex1.multiply(complex2);
}

//definition for nonmember function operator /
Complex operator/(const Complex& complex1, const Complex& complex2)
{
  return complex1.divide(complex2);
}
