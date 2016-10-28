// basic-parallel-sort.cpp
// compile with: /EHsc
#include <ppl.h>
#include <random>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Create and sort a large vector of random values.
    vector<int> values(25000000);
    generate(begin(values), end(values), mt19937(42));
    parallel_sort(begin(values), end(values));

    // Print a few values.
    wcout << "V(0)        = " << values[0] << endl;
    wcout << "V(12500000) = " << values[12500000] << endl;
    wcout << "V(24999999) = " << values[24999999] << endl;
} 
/* Output:
   V(0)        = -2147483129
   V(12500000) = -427327
   V(24999999) = 2147483311
*/