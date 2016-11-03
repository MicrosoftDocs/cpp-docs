// parallel-vector-sum.cpp
// compile with: /EHsc
#include <ppl.h>
#include <concurrent_vector.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create a concurrent_vector object that contains a few
   // initial elements.
   concurrent_vector<int> v;
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   
   // Perform two tasks in parallel.
   // The first task appends additional elements to the concurrent_vector object.
   // The second task computes the sum of all elements in the same object.

   parallel_invoke(
      [&v] { 
         for(int i = 0; i < 10000; ++i)
         {
            v.push_back(i);
         }
      },
      [&v] {
         combinable<int> sums;
         for(auto i = begin(v); i != end(v); ++i) 
         {
            sums.local() += *i;
         }     
         wcout << L"sum = " << sums.combine(plus<int>()) << endl;
      }
   );
}