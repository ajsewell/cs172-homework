// Project Name: Account
// Name: Allysa Sewell
// Date: 5/30/18
// Class: CS 172

#include "Transaction.h"

//constructs a transaction object with the specified values
Transaction::Transaction(char type, double amount, double balance,
string description)
{
  date = Date();
  this->type = type;
  this->amount = amount;
  this->balance = balance;
  this->description = description;
}

//accessor function for date
Date Transaction::getDate()
{
  return date;
}

//accessor function for type
char Transaction::getType()
{
  return type;
}

//accessor function for amount
double Transaction::getAmount()
{
  return amount;
}

//accessor function for balance
double Transaction::getBalance()
{
  return balance;
}

//accessor function for description
string Transaction::getDescription()
{
  return description;
}

//mutator function for date
void Transaction::setDate(Date date)
{
  this->date = date;
}

//mutator function for type
void Transaction::setType(char type)
{
  this->type = type;
}

//mutator function for amount
void Transaction::setAmount(double amount)
{
  this->amount = amount;
}

//mutator function for balance
void Transaction::setBalance(double balance)
{
  this->balance = balance;
}

//mutator function for description
void Transaction::setDescription(string description)
{
  this->description = description;
}



