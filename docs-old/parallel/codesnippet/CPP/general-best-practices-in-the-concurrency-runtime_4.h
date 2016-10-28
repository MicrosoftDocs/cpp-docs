// account.h
#pragma once
#include <exception>
#include <sstream>

// Represents a bank account.
class account
{
public:
   explicit account(int initial_balance = 0)
      : _balance(initial_balance)
   {
   }

   // Retrieves the current balance.
   int balance() const
   {
      return _balance;
   }

   // Deposits the specified amount into the account.
   int deposit(int amount)
   {
      _balance += amount;
      return _balance;
   }

   // Withdraws the specified amount from the account.
   int withdraw(int amount)
   {
      if (_balance < 0)
      {
         std::stringstream ss;
         ss << "negative balance: " << _balance << std::endl;
         throw std::exception((ss.str().c_str()));
      }

      _balance -= amount;
      return _balance;
   }

private:
   // The current balance.
   int _balance;
};