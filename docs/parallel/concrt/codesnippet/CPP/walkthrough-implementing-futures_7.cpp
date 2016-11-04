// futures-with-eh.cpp
// compile with: /EHsc
#include <ppl.h>
#include <agents.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace concurrency;
using namespace std;

template <typename T>
class async_future
{
public:
   template <class Functor>
   explicit async_future(Functor&& fn)
   {
      // Execute the work function in a task group and send the result
      // to the single_assignment object.
      _tasks.run([fn, this]() {
         send(_value, fn());
       });
   }

   ~async_future()
   {
      // Wait for the task to finish.
      _tasks.wait();
   }

   // Retrieves the result of the work function.
   // This method blocks if the async_future object is still
   // computing the value.
   T get()
   { 
      // Wait for the task to finish.
      // The wait method throws any exceptions that were generated
      // by the work function.
      _tasks.wait();

      // Return the result of the computation.
      return receive(_value);
   }

private:
   // Executes the asynchronous work function.
   task_group _tasks;

   // Stores the result of the asynchronous work function.
   single_assignment<T> _value;
};

int wmain()
{
   // For illustration, create a async_future with a work 
   // function that throws an exception.
   async_future<int> f([]() -> int { 
      throw exception("error");
   });

   // Try to read from the async_future object. 
   try
   {
      int value = f.get();
      wcout << L"f contains value: " << value << endl;
   }
   catch (const exception& e)
   {
      wcout << L"caught exception: " << e.what() << endl;
   }
}