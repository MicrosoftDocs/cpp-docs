// call-lambda.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
   // Stores the result of the computation.
   single_assignment<int> result;

   // Pass a lambda function to a call object that computes the square
   // of its input and then sends the result to the message buffer.
   call<int> c([&](int n) {
      send(result, n * n);
   });

   // Send a message to the call object and print the result.
   send(c, 13);
   wcout << L"13 squared is " << receive(result) << L'.' << endl;
}