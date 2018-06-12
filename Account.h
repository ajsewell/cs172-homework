// Project Name: Account
// Name: Allysa Sewell
// Date: 5/31/18
// Class: CS 172

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account
{
public:
  Account();
  Account(string name, int id, double balance);
  int getId();
  double getBalance();
  static double getAnnualInterestRate();
  string getName();
  void setId(int id);
  void setBalance(double balance);
  static void setAnnualInterestRate(double AnnualInterestRate);
  vector<Transaction> getTransactions();
  void setName(string name);
  double getMonthlyInterestRate();
  void withdraw(double amount);
  void deposit(double amount);
private:
  int id;
  double balance;
  static double annualInterestRate;
  string name;
  vector<Transaction> transactions;
};

#endif