// account-transactions.cpp
// compile with: /EHsc
#include "account.h"
#include <ppl.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an account that has an initial balance of 1924.
   account acc(1924);

   // Synchronizes access to the account object because the account class is 
   // not concurrency-safe.
   critical_section cs;

   // Perform multiple transactions on the account in parallel.   
   try
   {
      parallel_invoke(
         [&acc, &cs] {
            critical_section::scoped_lock lock(cs);
            wcout << L"Balance before deposit: " << acc.balance() << endl;
            acc.deposit(1000);
            wcout << L"Balance after deposit: " << acc.balance() << endl;
         },
         [&acc, &cs] {
            critical_section::scoped_lock lock(cs);
            wcout << L"Balance before withdrawal: " << acc.balance() << endl;
            acc.withdraw(50);
            wcout << L"Balance after withdrawal: " << acc.balance() << endl;
         },
         [&acc, &cs] {
            critical_section::scoped_lock lock(cs);
            wcout << L"Balance before withdrawal: " << acc.balance() << endl;
            acc.withdraw(3000);
            wcout << L"Balance after withdrawal: " << acc.balance() << endl;
         }
      );
   }
   catch (const exception& e)
   {
      wcout << L"Error details:" << endl << L"\t" << e.what() << endl;
   }
}