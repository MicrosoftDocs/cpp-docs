// timer-structure.cpp
// compile with: /EHsc
#include <agents.h>
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
   // Create a call object that prints characters that it receives 
   // to the console.
   call<wchar_t> print_character([](wchar_t c) {
      wcout << c;
   });

   // Create a timer object that sends the period (.) character to 
   // the call object every 100 milliseconds.
   timer<wchar_t> progress_timer(100u, L'.', &print_character, true);

   // Start the timer.
   wcout << L"Computing fib(42)";
   progress_timer.start();

   // Compute the 42nd Fibonacci number.
   int fib42 = fibonacci(42);

   // Stop the timer and print the result.
   progress_timer.stop();
   wcout << endl << L"result is " << fib42 << endl;
}