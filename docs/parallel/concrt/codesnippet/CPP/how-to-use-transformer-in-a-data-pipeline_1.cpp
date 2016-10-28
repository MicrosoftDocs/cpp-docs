// data-pipeline.cpp
// compile with: /EHsc
#include <agents.h>
#include <math.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Computes the absolute value of its input.
   transformer<int, int> t0([](int n) {
      return abs(n);
   });

   // Computes the square root of its input.
   transformer<int, double> t1([](int n) {
      return sqrt(static_cast<double>(n));
   });

   // Computes the square its input.
   transformer<double, int> t2([](double n) {
      return static_cast<int>(n * n);
   });

   // Negates its input.
   transformer<int, int> t3([](int n) {
      return -n;
   });

   // Holds the result of the pipeline computation.
   single_assignment<int> result;

   // Link together each stage of the pipeline.
   // t0 -> t1 -> t2 -> t3 -> result
   t0.link_target(&t1);
   t1.link_target(&t2);
   t2.link_target(&t3);
   t3.link_target(&result);

   // Propagate a message through the pipeline.
   send(t0, -42);

   // Print the result to the console.
   wcout << L"The result is " << receive(result) << L'.' << endl;
}