// message-throttling.cpp
// compile with: /EHsc
#include <windows.h> // for GetTickCount()
#include <atomic>
#include <agents.h>
#include <concrt.h>
#include <concurrent_queue.h>
#include <sstream>
#include <iostream>

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
            (Context::Yield)(); // <windows.h> defines Yield as a macro. The parenthesis around Yield prevent the macro expansion so that Context::Yield() is called.  
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

// A synchronization primitive that is signaled when its 
// count reaches zero.
class countdown_event
{
public:
   countdown_event(long long count)
       : _current(count) 
    {
       // Set the event if the initial count is zero.
       if (_current == 0LL)
          _event.set();
    }

    // Decrements the event counter.
    void signal() {
       if(--_current == 0LL) {
          _event.set();
       }
    }

    // Increments the event counter.
    void add_count() {
       if(++_current == 1LL) {
          _event.reset();
       }
    }

    // Blocks the current context until the event is set.
    void wait() {
       _event.wait();
    }

private:
   // The current count.
   atomic<long long> _current;
   // The event that is set when the counter reaches zero.
   event _event;

   // Disable copy constructor.
   countdown_event(const countdown_event&);
   // Disable assignment.
   countdown_event const & operator=(countdown_event const&);
};

int wmain()
{
   // The number of messages to send to the consumer.
   const long long MessageCount = 5;

   // The number of messages that can be active at the same time.
   const long long ActiveMessages = 2;

   // Used to compute the elapsed time.
   DWORD start_time;

   // Computes the elapsed time, rounded-down to the nearest
   // 100 milliseconds.
   auto elapsed = [&start_time] {
      return (GetTickCount() - start_time)/100*100;
   };
  
   // Limits the number of active messages.
   semaphore s(ActiveMessages);

   // Enables the consumer message buffer to coordinate completion
   // with the main application.
   countdown_event e(MessageCount);

   // Create a data pipeline that has three stages.

   // The first stage of the pipeline prints a message.
   transformer<int, int> print_message([&elapsed](int n) -> int {
      wstringstream ss;
      ss << elapsed() << L": received " << n << endl;
      wcout << ss.str();

      // Send the input to the next pipeline stage.
      return n;
   });

   // The second stage of the pipeline simulates a 
   // time-consuming operation.
   transformer<int, int> long_operation([](int n) -> int {
      wait(100);

      // Send the input to the next pipeline stage.
      return n;
   });

   // The third stage of the pipeline releases the semaphore
   // and signals to the main appliation that the message has
   // been processed.
   call<int> release_and_signal([&](int unused) {
      // Enable the sender to send the next message.
      s.release();

      // Signal that the message has been processed.
      e.signal();
   });

   // Connect the pipeline.
   print_message.link_target(&long_operation);
   long_operation.link_target(&release_and_signal);

   // Send several messages to the pipeline.
   start_time = GetTickCount();
   for(auto i = 0; i < MessageCount; ++i)
   {
      // Acquire access to the semaphore.
      s.acquire();

      // Print the message to the console.
      wstringstream ss;
      ss << elapsed() << L": sending " << i << L"..." << endl;
      wcout << ss.str();

      // Send the message.
      send(print_message, i);
   }

   // Wait for the consumer to process all messages.
   e.wait();
}
/* Sample output:
    0: sending 0...
    0: received 0
    0: sending 1...
    0: received 1
    100: sending 2...
    100: received 2
    200: sending 3...
    200: received 3
    300: sending 4...
    300: received 4
*/