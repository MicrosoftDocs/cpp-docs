// call-structure.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // An event that is set when the call object receives all values.
   event received_all;

   // Counts the 
   long receive_count = 0L;
   long max_receive_count = 3L;

   // Create an call object that works with int data.
   call<int> target([&received_all,&receive_count,max_receive_count](int n) {
      // Print the value that the call object receives to the console.
      wcout << n << endl;
      
      // Set the event when all messages have been processed.
      if (++receive_count == max_receive_count)
         received_all.set();
   });

   // Send a few items to the call object.
   send(target, 33);
   send(target, 44);
   send(target, 55);

   // Wait for the call object to process all items.
   received_all.wait();
}