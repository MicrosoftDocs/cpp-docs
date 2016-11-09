// parallel-array-search.cpp
// compile with: /EHsc
#include <ppl.h>
#include <iostream>
#include <random>

using namespace concurrency;
using namespace std;

// Returns the position in the provided array that contains the given value, 
// or -1 if the value is not in the array.
template<typename T>
int parallel_find_any(const T a[], size_t count, const T& what)
{
   // The position of the element in the array. 
   // The default value, -1, indicates that the element is not in the array.
   int position = -1;

   // Call parallel_for in the context of a cancellation token to search for the element.
   cancellation_token_source cts;
   run_with_cancellation_token([count, what, &a, &position, &cts]()
   {
      parallel_for(std::size_t(0), count, [what, &a, &position, &cts](int n) {
         if (a[n] == what)
         {
            // Set the return value and cancel the remaining tasks.
            position = n;
            cts.cancel();
         }
      });
   }, cts.get_token());

   return position;
}

int wmain()
{
   const size_t count = 10000;
   int values[count];
 
   // Fill the array with random values.
   mt19937 gen(34);
   for (size_t i = 0; i < count; ++i)
   {
      values[i] = gen()%10000;
   }
 
   // Search for any position in the array that contains value 3123.
   const int what = 3123;
   int position = parallel_find_any(values, count, what);
   if (position >= 0)
   {
      wcout << what << L" is at position " << position << L'.' << endl;
   }
   else
   {
      wcout << what << L" is not in the array." << endl;
   }
}
/* Sample output:
    3123 is at position 7835.
*/