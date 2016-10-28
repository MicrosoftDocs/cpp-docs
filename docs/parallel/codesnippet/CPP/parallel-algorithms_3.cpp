// parallel-invoke-structure.cpp
// compile with: /EHsc
#include <ppl.h>
#include <string>
#include <iostream>

using namespace concurrency;
using namespace std;

// Returns the result of adding a value to itself.
template <typename T>
T twice(const T& t) {
   return t + t;
}

int wmain()
{
   // Define several values.
   int n = 54;
   double d = 5.6;
   wstring s = L"Hello";

   // Call the twice function on each value concurrently.
   parallel_invoke(
      [&n] { n = twice(n); },
      [&d] { d = twice(d); },
      [&s] { s = twice(s); }
   );

   // Print the values to the console.
   wcout << n << L' ' << d << L' ' << s << endl;
}