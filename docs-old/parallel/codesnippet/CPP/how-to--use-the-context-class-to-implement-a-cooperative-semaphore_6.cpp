// cooperative-semaphore.cpp
// compile with: /EHsc
#include <atomic>
#include <concrt.h>
#include <ppl.h>
#include <concurrent_queue.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// A semaphore type that uses cooperative blocking semantics.
class semaphore
{
public:
   explicit semaphore(long long capacity)
      : _semaphore_count(capacity)
   {
   }

   // Acquires access to the semaphore.
   void acquire()
   {
      // The capacity of the semaphore is exceeded when the semaphore count 
      // falls below zero. When this happens, add the current context to the 
      // back of the wait queue and block the current context.
      if (--_semaphore_count < 0)
      {
         _waiting_contexts.push(Context::CurrentContext());
         Context::Block();
      }
   }

   // Releases access to the semaphore.
   void release()
   {
      // If the semaphore count is negative, unblock the first waiting context.
      if (++_semaphore_count <= 0)
      {
         // A call to acquire might have decremented the counter, but has not
         // yet finished adding the context to the queue. 
         // Create a spin loop that waits for the context to become available.
         Context* waiting = NULL;
         while (!_waiting_contexts.try_pop(waiting))
         {
            Context::Yield();
         }

         // Unblock the context.
         waiting->Unblock();
      }
   }

private:
   // The semaphore count.
   atomic<long long> _semaphore_count;

   // A concurrency-safe queue of contexts that must wait to 
   // acquire the semaphore.
   concurrent_queue<Context*> _waiting_contexts;
};

int wmain()
{
   // Create a semaphore that allows at most three threads to 
   // hold the lock.
   semaphore s(3);

   parallel_for(0, 10, [&](int i) {
      // Acquire the lock.
      s.acquire();

      // Print a message to the console.
      wstringstream ss;
      ss << L"In loop iteration " << i << L"..." << endl;
      wcout << ss.str();

      // Simulate work by waiting for two seconds.
      wait(2000);

      // Release the lock.
      s.release();
   });
}