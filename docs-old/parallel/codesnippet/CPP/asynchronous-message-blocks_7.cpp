// join-structure.cpp
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
   // Holds the 35th Fibonacci number.
   single_assignment<int> fib35;
   // Holds the 37th Fibonacci number.
   single_assignment<int> fib37;
   // Holds half of the 42nd Fibonacci number.
   single_assignment<double> half_of_fib42;   

   // Create a join object that selects the values from each of the
   // single_assignment objects.
   auto join_all = make_join(&fib35, &fib37, &half_of_fib42);

   // Execute a few lengthy operations in parallel. Each operation sends its 
   // result to one of the single_assignment objects.
   parallel_invoke(
      [&fib35] { send(fib35, fibonacci(35)); },
      [&fib37] { send(fib37, fibonacci(37)); },
      [&half_of_fib42] { send(half_of_fib42, fibonacci(42) * 0.5); }
   );

   auto result = receive(join_all);
   wcout << L"fib35 = " << get<0>(result) << endl;
   wcout << L"fib37 = " << get<1>(result) << endl;
   wcout << L"half_of_fib42 = " << get<2>(result) << endl;
}