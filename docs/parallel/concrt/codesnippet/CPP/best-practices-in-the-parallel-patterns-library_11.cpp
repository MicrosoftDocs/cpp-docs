// parallel-resource-destruction.cpp
// compile with: /EHsc
#include "parallel-resource-destruction.h"

using namespace concurrency;
using namespace std;

static_assert(false, "This example illustrates a non-recommended practice.");

int main()
{  
   // Create a task_group that will run two tasks.
   task_group tasks;

   // Used to synchronize the tasks.
   event e1, e2;

   // Run two tasks. The first task creates a Container object. The second task
   // cancels the overall task group. To illustrate the scenario where a child 
   // task is not run because its parent task is cancelled, the event objects 
   // ensure that the Container object is created before the overall task is 
   // cancelled and that the Container object is destroyed after the overall 
   // task is cancelled.
   
   tasks.run([&tasks,&e1,&e2] {
      // Create a Container object.
      Container c(L"Container 1");
      
      // Allow the second task to continue.
      e2.set();

      // Wait for the task to be cancelled.
      e1.wait();
   });

   tasks.run([&tasks,&e1,&e2] {
      // Wait for the first task to create the Container object.
      e2.wait();

      // Cancel the overall task.
      tasks.cancel();      

      // Allow the first task to continue.
      e1.set();
   });

   // Wait for the tasks to complete.
   tasks.wait();

   wcout << L"Exiting program..." << endl;
}