// overwrite_buffer-structure.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an overwrite_buffer object that works with
   // int data.
   overwrite_buffer<int> item;

   // Send a few items to the overwrite_buffer object.
   send(item, 33);
   send(item, 44);
   send(item, 55);

   // Read the current item from the overwrite_buffer object and print
   // it to the console three times.
   wcout << receive(item) << endl;
   wcout << receive(item) << endl;
   wcout << receive(item) << endl;
}