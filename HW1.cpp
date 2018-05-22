// Project Name: HW1
// Name: Allysa Sewell
// Date: 5/19/18
// Class: CS 172

#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

void ex02()
{
  bool hasPassedTest = true;
  // displays whether or not x is less than y
  // x and y are generated randomly
  srand(time(0));
  int x = rand();
  int y = rand();
  if (x >= y)
    cout << "x is greater than or equal to y" << endl;
  else
    cout << "x is less than y" << endl;

  // inputs a number and displays whether it is less than 100
  double numberOfShares;
  cout << "Enter a number of shares: " << endl;
  cin >> numberOfShares;
  if (numberOfShares < 100)
    cout << "The number is less than 100 " << endl;
  else
    cout << "The number is not less than 100" << endl;

  //Obtains 2 widths and uses modulus operator to determine if
  //they are evenly divisible
  int bookWidth, boxWidth;
  cout << "Enter a box width as an integer: " << endl;
  cin >> boxWidth;
  cout << "Enter a book width as an integer: " << endl;
  cin >> bookWidth;
  if (boxWidth % bookWidth == 0)
    cout << "The box width is evenly divisible " 
    "by the book width" << endl;
  else
    cout << "The box width is not evenly divisible "
    "by the book width" << endl;

  //Obtains shelf life and decreases it by 4 if outside
  //temperature is greater than 90
  double shelfLife, temperature;
  cout << "Enter the shelf life of a box of chocolate: " << endl;
  cin >> shelfLife;
  cout << "Enter the outside temperature: " << endl;
  cin >> temperature;
  if (temperature >= 90)
    shelfLife = shelfLife - 4;
  }

void ex03()
{
  //inputs an area of a square and calculates and displays 
  //the diagonal length
  double area;
  cout << "Enter the area of a square: " << endl;
  cin >> area;
  double sideLength = sqrt(area);
  double diagonal = sqrt(2 * sideLength * sideLength);
  cout << " The diagonal of the square is " << diagonal << endl;

  // Displays yes if character y is input and no if n is input
  char answer;
  cout << "Respond y for yes or n for no " << endl;
  cin >> answer;
  if (answer == 'y')
    cout << "Yes" << endl;
  else if (answer == 'n')
    cout << "No" << endl;
 
  //initializes tab character
  char tab = '\t';

  //inputs mailing address as a string
  string mailingAddress;
  cout << "Enter your address: " << endl;
  getline(cin, mailingAddress);
  cin.ignore(50, '\n');

  //initializes empty string
  string s = "";

}

//doubles a number
int doubleNumber( int number)
{
  return number * 2;
}

//adds 2 numbers together
int add(int num1, int num2)
{
  return num1 + num2;
}

//increases a number by 1 and passes it by reference
int plusOne(int& n)
{
  n++;
  return n;
}

void ex04()
{
  int number = 0;
  //The loop will request an integer until valid input
  //between 1 and 10 is received
  while (number < 1 || number > 10)
  {
    cout << "Enter an integer between 1 and 10: " << endl;
    cin >> number;
  }

  int sum = 0;
  int n = 1;
  //sums the cubes of numbers from 1 to the inputted number
  while (n <= number)
  {
    int cube = n * n * n;
    sum += cube;
    n++;
  }
  //displays the sum
  cout << "The sum of the cubes from 1 to "<< number << " is " 
       << sum << endl;

  int i = 0;
  //displays the same number of * as the inputted number
  do
  {
    cout << " * ";
    i++;
  } while (i < number);
  cout << endl;

  //displays even integers from 0 to 40
  for (int m = 0; m <= 40; m++)
  {
    if (m % 2 == 0)
      cout << m << " ";
  }
  cout << endl;

  //doubles inputted number
  doubleNumber(number);
 
  //adds 2 randomly generated integers
  int num1 = rand();
  int num2 = rand();
  add(num1, num2);

}

//prints an array
void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
}

//inputs a value and displays whether it is in an array
void findValue(int array[], int size)
{
  cout << "Enter an integer: " << endl;
  int key;
  cin >> key;
  bool isPresent = false;
  for (int i = 0; i < size; i++)
  {
    if (key == array[i])
      isPresent = true;
  }
  if (isPresent)
    cout << key << " is in the array" << endl;
  else
    cout << key << " is not in the array" << endl;
}

void ex05()
{
  const int SIZE = 5;
  int array[SIZE];
  //inputs 5 integers and adds them to an array
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Enter an integer: " << endl;
    cin >> array[i];
  }

  int sum = 0;
  //sums up the integers in the array
  for (int i = 0; i < SIZE; i++)
  {
    sum += array[i];
  }
  //calculates product
  int product = array[0] * array[1] * array[2] * array[3] * array[4];
  cout << "The sum is " << sum << endl;
  cout << "The product is " << product << endl;

  //displays the array
  printArray(array, SIZE);
}

int main()
{
  ex02();
  ex03();
  ex04();
  ex05();
  return 0;
}