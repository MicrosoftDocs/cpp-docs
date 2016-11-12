// make-task-structure.cpp
// compile with: /EHsc
#include <ppl.h>

using namespace concurrency;

int wmain()
{
   // Use the make_task function to define several tasks.
   auto task1 = make_task([] { /*TODO: Define the task body.*/ });
   auto task2 = make_task([] { /*TODO: Define the task body.*/ });
   auto task3 = make_task([] { /*TODO: Define the task body.*/ });

   // Create a structured task group and run the tasks concurrently.

   structured_task_group tasks;

   tasks.run(task1);
   tasks.run(task2);
   tasks.run_and_wait(task3);
}