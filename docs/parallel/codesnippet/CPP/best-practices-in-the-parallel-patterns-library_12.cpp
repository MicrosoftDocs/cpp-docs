// repeated-blocking.cpp
// compile with: /EHsc
#include <ppl.h>
#include <agents.h>

using namespace concurrency;

static_assert(false, "This example illustrates a non-recommended practice.");

int main()
{
   // Create a message buffer.
   overwrite_buffer<int> buffer;
  
   // Repeatedly send data to the buffer in a parallel loop.
   parallel_for(0, 1000, [&buffer](int i) {
      
      // The send function blocks cooperatively. 
      // We discourage the use of repeated blocking in a parallel
      // loop because it can cause the runtime to create 
      // a large number of threads over a short period of time.
      send(buffer, i);
   });
}