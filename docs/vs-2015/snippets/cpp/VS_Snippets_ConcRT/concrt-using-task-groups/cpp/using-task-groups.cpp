// <snippet1>
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
// </snippet1>

// <snippet2>
// nested-task-groups.cpp
// compile with: /c /EHsc
#include <ppl.h>

void nested_tasks()
{
   // The destructor for task_group2 must run before task_group1 finishes.
   concurrency::structured_task_group task_group1;
   concurrency::structured_task_group task_group2;

   // The destructor for task_group4 must run before task_group3 finishes.  
   concurrency::structured_task_group task_group3;
   auto task = make_task([] {
      concurrency::structured_task_group task_group4;
   });
}
// </snippet2>
