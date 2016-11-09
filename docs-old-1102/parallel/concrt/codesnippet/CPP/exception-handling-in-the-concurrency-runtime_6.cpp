// eh-multiple.cpp
// compile with: /EHsc
#include <ppl.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

int wmain()
{
   const int min = 0;
   const int max = 10;
   
   // Print values in a parallel_for loop. Use a try-catch block to 
   // handle any exceptions that occur in the loop.
   try
   {
      parallel_for(-5, 20, [min,max](int i)
      {
         // Throw an exeception if the input value is less than the 
         // minimum or greater than the maximum.

         // Otherwise, print the value to the console.

         if (i < min)
         {
            stringstream ss;
            ss << i << ": the value is less than the minimum.";
            throw exception(ss.str().c_str());
         }
         else if (i > max)
         {
            stringstream ss;
            ss << i << ": the value is greater than than the maximum.";
            throw exception(ss.str().c_str());
         }
         else
         {
            wstringstream ss;
            ss << i << endl;
            wcout << ss.str();
         }
      });
   }
   catch (exception& e)
   {
      // Print the error to the console.
      wcerr << L"Caught exception: " << e.what() << endl;
   }  
}