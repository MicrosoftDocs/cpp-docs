// small-loops.cpp
// compile with: /EHsc
#include <ppl.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create three arrays that each have the same size.
   const size_t size = 100000;
   int a[size], b[size], c[size];

   // Initialize the arrays a and b.
   for (size_t i = 0; i < size; ++i)
   {
      a[i] = i;
      b[i] = i * 2;
   }

   // Add each pair of elements in arrays a and b in parallel 
   // and store the result in array c.
   parallel_for<size_t>(0, size, [&a,&b,&c](size_t i) {
      c[i] = a[i] + b[i];
   });

   // TODO: Do something with array c.
}