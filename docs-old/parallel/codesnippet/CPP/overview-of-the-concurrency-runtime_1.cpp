// comparing-work-functions.cpp
// compile with: /EHsc
#include <ppl.h>
#include <array>
#include <iostream>

using namespace concurrency;
using namespace std;

// Function object (functor) class that computes the square of its input.
template<class Ty>
class SquareFunctor
{
public:
   void operator()(Ty& n) const
   {
      n *= n;
   }
};

// Function that computes the square of its input.
template<class Ty>
void square_function(Ty& n)
{
   n *= n;
}

int wmain()
{
   // Create an array object that contains 5 values.
   array<int, 5> values = { 1, 2, 3, 4, 5 };

   // Use a lambda function, a function object, and a function pointer to 
   // compute the square of each element of the array in parallel.

   // Use a lambda function to square each element.
   parallel_for_each(begin(values), end(values), [](int& n){n *= n;});

   // Use a function object (functor) to square each element.
   parallel_for_each(begin(values), end(values), SquareFunctor<int>());

   // Use a function pointer to square each element.
   parallel_for_each(begin(values), end(values), &square_function<int>);

   // Print each element of the array to the console.
   for_each(begin(values), end(values), [](int& n) { 
      wcout << n << endl;
   });
}