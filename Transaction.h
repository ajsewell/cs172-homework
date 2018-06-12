// Project Name: Account
// Name: Allysa Sewell
// Date: 5/30/18
// Class: CS 172

#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include <string>
#include "Date.h"
using namespace std;

class Transaction
{
public:
  Transaction(char type, double amount, double balance,
  string description);
  Date getDate();
  char getType();
  double getAmount();
  double getBalance();
  string getDescription();
  void setDate(Date date);
  void setType(char type);
  void setAmount(double amount);
  void setBalance(double balance);
  void setDescription(string description);
private:
  Date date;
  char type;
  double amount;
  double balance;
  string description;

};

#endif