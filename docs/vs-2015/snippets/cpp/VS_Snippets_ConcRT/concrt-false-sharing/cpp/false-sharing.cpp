// false-sharing.cpp
// compile with: /EHsc

#include <ppl.h>
#include <iostream>
#include <Windows.h>

using namespace concurrency;
using namespace std;

template <class F>
__int64 time_call(const F& f)
{
   __int64 start = GetTickCount();
   f();
   return GetTickCount() - start;
}

int wmain()
{
   __int64 elapsed;

   elapsed = time_call([] {
      // <snippet1>
      volatile long count = 0L;
      concurrency::parallel_invoke(
         [&count] {
            for(int i = 0; i < 100000000; ++i)
               InterlockedIncrement(&count);
         },
         [&count] {
            for(int i = 0; i < 100000000; ++i)
               InterlockedIncrement(&count);
         }
      );
      // </snippet1>
      wcout << count << endl;
   });
   wcout << elapsed << endl;


   elapsed = time_call([] {
      // <snippet2>
      long count1 = 0L;
      long count2 = 0L;
      concurrency::parallel_invoke(
         [&count1] {
            for(int i = 0; i < 100000000; ++i)
               ++count1;
         },
         [&count2] {
            for(int i = 0; i < 100000000; ++i)
               ++count2;
         }
      );
      long count = count1 + count2;
      // </snippet2>
      wcout << count << endl;
   });
   wcout << elapsed << endl;

   elapsed = time_call([] {
      // <snippet3>
      __declspec(align(64)) long count1 = 0L;      
      __declspec(align(64)) long count2 = 0L;      
      concurrency::parallel_invoke(
         [&count1] {
            for(int i = 0; i < 100000000; ++i)
               ++count1;
         },
         [&count2] {
            for(int i = 0; i < 100000000; ++i)
               ++count2;
         }
      );
      long count = count1 + count2;
      // </snippet3>
      wcout << count << endl;
   });
   wcout << elapsed << endl;

	return 0;
}

