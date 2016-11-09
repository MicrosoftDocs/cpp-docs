// call-method.cpp
// compile with: /EHsc
#include <agents.h>
#include <functional>
#include <iostream>

using namespace concurrency;
using namespace std;

// Class that computes the square of its input.
class square
{
public:
   explicit square(ITarget<int>& target)
      : _target(target)
   {
   }

   // Method that computes the square of its input.
   void square_value(int n)
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

   // Bind a class method to a call object.
   square s(result);
   call<int> c(bind1st(mem_fun(&square::square_value), &s));

   // Send a message to the call object and print the result.
   send(c, 13);
   wcout << L"13 squared is " << receive(result) << L'.' << endl;
}