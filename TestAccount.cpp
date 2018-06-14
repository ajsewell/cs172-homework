// Project Name: Account
// Name: Allysa Sewell
// Date: 6/1/18
// Class: CS 172

//PT -- good. 20/20

#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
using namespace std;

int main()
{
	//creates an account object
  Account  account1("George", 1122, 1000);
  cout << "Account holder name: " << account1.getName() << endl;
  cout << "Original balance: " << account1.getBalance() << endl;

  //set annual interest rate
  Account::setAnnualInterestRate(1.5);

  //make transactions
  account1.deposit(30);
  account1.deposit(40);
  account1.deposit(50);
  account1.withdraw(5);
  account1.withdraw(4);
  account1.withdraw(2);


  cout << "Annual interest rate: " 
  << Account::getAnnualInterestRate() << endl;
  cout << "Monthly interest rate: "
  << account1.getMonthlyInterestRate() << endl;

  //creates a vector that is the same as the transactions vector
  //in the account class
  vector<Transaction> transactions = account1.getTransactions();
  int numberOfTransactions = transactions.size();
  Date date = transactions[0].getDate();
  //creates date object for date of transaction(today, although
  //it might show yesterday's date because of time zone differences)
  cout << "Transactions on " << date.getMonth() << " " << date.getDay()
  << " " << date.getYear() << endl;

  //Loop displays amount and type for each transaction
  for (int i = 0; i < numberOfTransactions; i++)
  {
    cout << transactions[i].getAmount() << " "
    << transactions[i].getType() << endl;
  }
  cout << "Balance: " << account1.getBalance();

  return 0;
}
