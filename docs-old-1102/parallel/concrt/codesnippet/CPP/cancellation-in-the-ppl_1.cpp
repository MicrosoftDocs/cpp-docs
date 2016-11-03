// task-tree.cpp
// compile with: /c /EHsc
#include <ppl.h>
#include <sstream>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

void create_task_tree()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      structured_task_group tg2;
      
      // Create a child task.
      auto t4 = make_task([&] {
         // TODO: Perform work here.
      });

      // Create a child task.
      auto t5 = make_task([&] {
         // TODO: Perform work here.
      });

      // Run the child tasks and wait for them to finish.
      tg2.run(t4);
      tg2.run(t5);
      tg2.wait();
   });

   // Create a child task.
   auto t2 = make_task([&] {
      // TODO: Perform work here.
   });

   // Create a child task.
   auto t3 = make_task([&] {
      // TODO: Perform work here.
   });

   // Run the child tasks and wait for them to finish.
   tg1.run(t1);
   tg1.run(t2);
   tg1.run(t3);
   tg1.wait();   
}