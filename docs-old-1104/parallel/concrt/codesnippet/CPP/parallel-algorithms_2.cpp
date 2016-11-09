// parallel-for-each-structure.cpp
// compile with: /EHsc
#include <ppl.h>
#include <array>
#include <sstream>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an array of integer values.
   array<int, 5> values = { 1, 2, 3, 4, 5 };

   // Print each value in the array in parallel.
   parallel_for_each(begin(values), end(values), [](int value) {
      wstringstream ss;
      ss << value << L' ';
      wcout << ss.str();
   });
}
/* Sample output:
   5 4 3 1 2
*/