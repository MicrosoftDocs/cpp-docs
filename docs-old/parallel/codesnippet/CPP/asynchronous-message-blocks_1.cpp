// unbounded_buffer-structure.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an unbounded_buffer object that works with
   // int data.
   unbounded_buffer<int> items;

   // Send a few items to the unbounded_buffer object.
   send(items, 33);
   send(items, 44);
   send(items, 55);

   // Read the items from the unbounded_buffer object and print
   // them to the console.
   wcout << receive(items) << endl;
   wcout << receive(items) << endl;
   wcout << receive(items) << endl;
}