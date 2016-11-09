// concrt-omp-exceptions.cpp
// compile with: /EHsc /openmp
#include <ppl.h>
#include <new>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// Demonstrates a function that performs a memory allocation request 
// that does not succeed.
void do_work(int)
{
   // The following memory allocation causes this function to 
   // throw std::bad_alloc.
   char* ptr = new char[(~unsigned int((int)0)/2) - 1];

   // TODO: Assuming that the allocation succeeds, perform some work 
   // and free the allocated memory.

   delete[] ptr;
}

// Demonstrates an OpenMP parallel loop that performs exception handling.
void omp_exception_handling()
{
   #pragma omp parallel for 
      for(int i = 0; i < 10; i++) 
      {
         try {
            // Perform a unit of work.
            do_work(i);
         }
         catch (exception const& e) {
            // Print the error to the console.
            wstringstream ss;
            ss << L"An error of type '" << typeid(e).name() 
               << L"' occurred." << endl;
            wcout << ss.str();
         }
      }
}

// Demonstrates an Concurrency Runtime parallel loop that performs exception handling.
void concrt_exception_handling()
{
   try {
      parallel_for(0, 10, [](int i) 
      {
         // Perform a unit of work.
         do_work(i);
      });
   }
   catch (exception const& e) {
      // Print the error to the console.
      wcout << L"An error of type '" << typeid(e).name() 
            << L"' occurred." << endl;
   }
}

int wmain()
{
   wcout << L"Using OpenMP..." << endl;
   omp_exception_handling();

   wcout << L"Using the Concurrency Runtime..." << endl;
   concrt_exception_handling();
}