// using-task-groups.cpp
// compile with: /EHsc
#include <ppl.h>
#include <sstream>
#include <iostream>

using namespace concurrency;
using namespace std;

// Prints a message to the console.
template<typename T>
void print_message(T t)
{
   wstringstream ss;
   ss << L"Message from task: " << t << endl;
   wcout << ss.str(); 
}

int wmain()
{  
   // A task_group object that can be used from multiple threads.
   task_group tasks;

   // Concurrently add several tasks to the task_group object.
   parallel_invoke(
      [&] {
         // Add a few tasks to the task_group object.
         tasks.run([] { print_message(L"Hello"); });
         tasks.run([] { print_message(42); });
      },
      [&] {
         // Add one additional task to the task_group object.
         tasks.run([] { print_message(3.14); });
      }
   );

   // Wait for all tasks to finish.
   tasks.wait();
}