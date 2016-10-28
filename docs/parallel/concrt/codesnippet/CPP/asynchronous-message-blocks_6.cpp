// choice-structure.cpp
// compile with: /EHsc
#include <agents.h>
#include <ppl.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Computes the nth Fibonacci number.
// This function illustrates a lengthy operation and is therefore
// not optimized for performance.
int fibonacci(int n)
{
   if (n < 2)
      return n;
   return fibonacci(n-1) + fibonacci(n-2);
}

int wmain()
{
   // Although the following thee message blocks are written to one time only, 
   // this example illustrates the fact that the choice class works with 
   // different message block types.

   // Holds the 35th Fibonacci number.
   single_assignment<int> fib35;
   // Holds the 37th Fibonacci number.
   overwrite_buffer<int> fib37;
   // Holds half of the 42nd Fibonacci number.
   unbounded_buffer<double> half_of_fib42;   

   // Create a choice object that selects the first single_assignment 
   // object that receives a value.
   auto select_one = make_choice(&fib35, &fib37, &half_of_fib42);

   // Execute a few lengthy operations in parallel. Each operation sends its 
   // result to one of the single_assignment objects.
   parallel_invoke(
      [&fib35] { send(fib35, fibonacci(35)); },
      [&fib37] { send(fib37, fibonacci(37)); },
      [&half_of_fib42] { send(half_of_fib42, fibonacci(42) * 0.5); }
   );

   // Print a message that is based on the operation that finished first.
   switch (receive(select_one))
   {
   case 0:
      wcout << L"fib35 received its value first. Result = " 
            << receive(fib35) << endl;
      break;
   case 1:
      wcout << L"fib37 received its value first. Result = " 
            << receive(fib37) << endl;
      break;
   case 2:
      wcout << L"half_of_fib42 received its value first. Result = " 
            << receive(half_of_fib42) << endl;
      break;
   default:
      wcout << L"Unexpected." << endl;
      break;
   }
}