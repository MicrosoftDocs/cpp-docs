// priority_buffer.cpp
// compile with: /EHsc 
#include <ppl.h>
#include <iostream>
#include "priority_buffer.h"

using namespace concurrency;
using namespace concurrencyex;
using namespace std;

int wmain()
{
   // Concurrently perform a number of asend and receive operations
   // on a priority_buffer object.

   priority_buffer<int> pb;
   
   parallel_invoke(
      [&pb] { for (int i = 0; i < 25; ++i) asend(pb, make_tuple(2, 36)); },
      [&pb] { for (int i = 0; i < 25; ++i) asend(pb, make_tuple(0, 12)); },
      [&pb] { for (int i = 0; i < 25; ++i) asend(pb, make_tuple(1, 24)); },
      [&pb] { 
         for (int i = 0; i < 75; ++i) {
            wcout << receive(pb) << L' ';
            if ((i+1) % 25 == 0)
               wcout << endl;
         }
      }
   );
}