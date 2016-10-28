// filter-function.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an unbounded_buffer object that uses a filter
   // function to accept only even numbers.
   unbounded_buffer<int> accept_evens(
      [](int n) {
         return (n%2) == 0;
      });

   // Send a few values to the unbounded_buffer object.
   unsigned int accept_count = 0;
   for (int i = 0; i < 10; ++i)
   {
      // The asend function returns true only if the target
      // accepts the message. This enables us to determine
      // how many elements are stored in the unbounded_buffer
      // object.
      if (asend(accept_evens, i))
      {
         ++accept_count;
      }
   }

   // Print to the console each value that is stored in the 
   // unbounded_buffer object. The unbounded_buffer object should
   // contain only even numbers.
   while (accept_count > 0)
   {
      wcout << receive(accept_evens) << L' ';
      --accept_count;
   }
}