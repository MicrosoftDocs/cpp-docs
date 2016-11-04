// transformer-structure.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Create an transformer object that receives int data and 
   // sends double data.
   transformer<int, double> third([](int n) {
      // Return one-third of the input value.
      return n * 0.33;
   });

   // Send a few items to the transformer object.
   send(third, 33);
   send(third, 44);
   send(third, 55);

   // Read the processed items from the transformer object and print
   // them to the console.
   wcout << receive(third) << endl;
   wcout << receive(third) << endl;
   wcout << receive(third) << endl;
}