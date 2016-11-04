// cooperative-tasks.cpp
// compile with: /EHsc
#include <ppl.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// Data that the application passes to lightweight tasks.
struct task_data_t
{
   int id;  // a unique task identifier.
   event e; // signals that the task has finished.
};

// A lightweight task that performs a lengthy operation.
void task(void* data)
{   
   task_data_t* task_data = reinterpret_cast<task_data_t*>(data);

   // Create a large loop that occasionally prints a value to the console.
   int i;
   for (i = 0; i < 1000000000; ++i)
   {
      if (i > 0 && (i % 250000000) == 0)
      {
         wstringstream ss;
         ss << task_data->id << L": " << i << endl;
         wcout << ss.str();
      }
   }
   wstringstream ss;
   ss << task_data->id << L": " << i << endl;
   wcout << ss.str();

   // Signal to the caller that the thread is finished.
   task_data->e.set();
}

int wmain()
{
   // For illustration, limit the number of concurrent 
   // tasks to one.
   Scheduler::SetDefaultSchedulerPolicy(SchedulerPolicy(2, 
      MinConcurrency, 1, MaxConcurrency, 1));

   // Schedule two tasks.

   task_data_t t1;
   t1.id = 0;
   CurrentScheduler::ScheduleTask(task, &t1);

   task_data_t t2;
   t2.id = 1;
   CurrentScheduler::ScheduleTask(task, &t2);

   // Wait for the tasks to finish.

   t1.e.wait();
   t2.e.wait();
}