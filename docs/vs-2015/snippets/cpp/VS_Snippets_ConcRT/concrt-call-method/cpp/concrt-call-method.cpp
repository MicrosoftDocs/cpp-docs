// <snippet1>
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
// </snippet1>

void f()
{
   single_assignment<int> result;
   square s(result);

   // <snippet2>
   // Assign to a function object.
   function<void(int)> f1 = bind1st(mem_fun(&square::square_value), &s);
   call<int> c1(f1);

   // Alternatively, use the auto keyword to have the compiler deduce the type.
   auto f2 = bind1st(mem_fun(&square::square_value), &s);
   call<int> c2(f2);
   // </snippet2>
}