// concrt-omp-fibonacci-reduction.cpp
// compile with: /EHsc /openmp
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

   // Compute the components in parallel.
   int n1, n2;
   parallel_invoke(
      [n,&n1] { n1 = fibonacci(n-1); },
      [n,&n2] { n2 = fibonacci(n-2); }
   );

   return n1 + n2;
}

// Uses OpenMP to compute the sum of Fibonacci numbers in parallel.
void omp_parallel_fibonacci_sum(int count)
{
   int sum = 0;
   #pragma omp parallel for reduction(+ : sum)
      for (int i = 0; i < count; ++i)
      {
         sum += fibonacci(i);
      }

   wcout << L"The sum of the first " << count << L" Fibonacci numbers is " 
         << sum << L'.' << endl;
}

// Uses the Concurrency Runtime to compute the sum of Fibonacci numbers in parallel.
void concrt_parallel_fibonacci_sum(int count) 
{
   combinable<int> sums;
   parallel_for(0, count, [&sums](int i)
      {
         sums.local() += fibonacci(i);
      });

   wcout << L"The sum of the first " << count << L" Fibonacci numbers is " 
         << sums.combine(plus<int>()) << L'.' << endl;
}

int wmain()
{
   const int count = 35;

   wcout << L"Using OpenMP..." << endl;
   omp_parallel_fibonacci_sum(count);

   wcout << L"Using the Concurrency Runtime..." << endl;
   concrt_parallel_fibonacci_sum(count);
}