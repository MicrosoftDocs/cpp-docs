// etw.cpp
// compile with: /EHsc 
#include <ppl.h>

using namespace concurrency;

int wmain()
{
   // Perform some parallel work. 
   // Event tracing is disabled at this point.
   parallel_for(0, 10000, [](int i) {
      // TODO: Perform work.
   });

   // Enable tracing for a second call to parallel_for.
   EnableTracing();
   parallel_for(0, 10000, [](int i) {
      // TODO: Perform work.
   });   
   DisableTracing();
}