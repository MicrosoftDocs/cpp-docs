// eh-time-out.cpp
// compile with: /EHsc
#include <agents.h>
#include <ppl.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   single_assignment<int> buffer;
   int result;

   try
   {
      // Run two tasks in parallel.
      parallel_invoke(
         // This task waits 5 seconds and then sends a message to 
         // the message buffer.
         [&] {
            wait(5000); 
            send(buffer, 42);
         },
         // This task waits 3 seconds to receive a message.
         // The receive function throws operation_timed_out if it does 
         // not receive a message in the specified time period.
         [&] {
            result = receive(buffer, 3000);
         }
      );

      // Print the result.
      wcout << L"The result is " << result << endl;
   }
   catch (operation_timed_out&)
   {
      wcout << L"The operation timed out." << endl;
   }
}