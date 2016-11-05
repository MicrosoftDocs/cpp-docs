// call-functor.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Functor class that computes the square of its input.
class square
{
public:
   explicit square(ITarget<int>& target)
      : _target(target)
   {
   }

   // Function call operator for the functor class.
   void operator()(int n)
   {
      send(_target, n * n);
   }

private:
   ITarget<int>& _target;
};

int wmain()
{
   // Stores the result of the computation.
   single_assignment<int> result;

   // Pass a function object to the call constructor.
   square s(result);
   call<int> c(s);

   // Send a message to the call object and print the result.
   send(c, 13);
   wcout << L"13 squared is " << receive(result) << L'.' << endl;
}