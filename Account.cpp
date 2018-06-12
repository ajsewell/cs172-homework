// Project Name: Account
// Name: Allysa Sewell
// Date: 6/1/18
// Class: CS 172

#include "Account.h"
#include <string>
#include <vector>

//initializes annual interest rate
double Account::annualInterestRate = 0;

//constructs a default account
Account::Account()
{
  id = 0;
  balance = 0;
  annualInterestRate = 0;
}

//constructs an account with the specified values
Account::Account(string name, int id, double balance)
{
  this->name = name;
  this->id = id;
  this->balance = balance;
  annualInterestRate = 1.5;
}

//accessor function for id
int Account::getId()
{
  return id;
}

//accessor function for balance
double Account::getBalance()
{
  return balance;
}

//accessor function for annualInterestRate
double Account::getAnnualInterestRate()
{
  return annualInterestRate;
}

//accessor function for name
string Account::getName()
{
  return name;
}

//accessor function for transactions
vector<Transaction> Account::getTransactions()
{
  return transactions;
}

//mutator function for id
void Account::setId(int id)
{
  this->id = id;
}

//mutator function for balance
void Account::setBalance(double balance)
{
  this->balance = balance;
}

//mutator function for annualInterestRate
void Account::setAnnualInterestRate(double AnnualInterestRate)
{
 annualInterestRate = AnnualInterestRate;
}

//mutator function for name
void Account::setName(string name)
{
  this->name = name;
}

//gives monthly interest rate
double Account::getMonthlyInterestRate()
{
  return annualInterestRate / 12;
}

//subtracts amount withdrawn from balance and creates Transaction
void Account::withdraw(double amount)
{
  balance = balance - amount;
  transactions.push_back(Transaction('W', amount, balance, "withdraw"));
}

//adds amount deposited to balance and creates Transaction
void Account::deposit(double amount)
{
  balance = balance + amount;
  transactions.push_back(Transaction('D', amount, balance, "deposit"));
}
