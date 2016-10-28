// single_assignment-structure.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an single_assignment object that works with
   // int data.
   single_assignment<int> item;

   // Send a few items to the single_assignment object.
   send(item, 33);
   send(item, 44);
   send(item, 55);

   // Read the current item from the single_assignment object and print
   // it to the console three times.
   wcout << receive(item) << endl;
   wcout << receive(item) << endl;
   wcout << receive(item) << endl;
}