// futures.cpp
// compile with: /EHsc
#include <ppl.h>
#include <agents.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>

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
   // Create a vector of 10000 integers, where each element 
   // is between 0 and 9999.
   mt19937 gen(2);
   vector<int> values(10000);   
   generate(begin(values), end(values), [&gen]{ return gen()%10000; });

   // Create a async_future object that finds the smallest value in the
   // vector.
   async_future<int> min_value([&]() -> int { 
      int smallest = INT_MAX;
      for_each(begin(values), end(values), [&](int value) {
         if (value < smallest)
         {
            smallest = value;
         }
      });
      return smallest;
   });
   
   // Create a async_future object that finds the largest value in the
   // vector.
   async_future<int> max_value([&]() -> int { 
      int largest = INT_MIN;
      for_each(begin(values), end(values), [&](int value) {
         if (value > largest)
         {
            largest = value;
         } 
      });
      return largest;
   });

   // Calculate the average value of the vector while the async_future objects
   // work in the background.
   int sum = accumulate(begin(values), end(values), 0);
   int average = sum / values.size();

   // Print the smallest, largest, and average values.
   wcout << L"smallest: " << min_value.get() << endl
         << L"largest:  " << max_value.get() << endl
         << L"average:  " << average << endl;
}