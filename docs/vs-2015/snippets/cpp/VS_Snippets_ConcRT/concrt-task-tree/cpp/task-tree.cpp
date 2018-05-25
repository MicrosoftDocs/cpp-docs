// <snippet1>
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
// </snippet1>

bool work(int i)
{
   if (i == 10)
      return false;
   return true;
}

void cancel_parent_task()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      structured_task_group tg2;
      
      // Create a child task.
      // <snippet2>
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, cancel the parent task
            // and break from the loop.
            bool succeeded = work(i);
            if (!succeeded)
            {
               tg2.cancel();
               break;
            }
         }         
      });
      // </snippet2>

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

   wcout << (tg1.is_canceling() ? L"tg1 is canceled" : L"tg1 is not canceled")
         << endl;
   //wcout << (tg2.is_canceling() ? L"tg2 is canceled" : L"tg2 is not canceled")
   //      << endl;   
}

void cancel_task_tree()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      structured_task_group tg2;
      
      // Create a child task.
      // <snippet3>
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, cancel all tasks in the tree.
            bool succeeded = work(i);
            if (!succeeded)
            {
               tg1.cancel();
               break;
            }
         }   
      });
      // </snippet3>

      // Create a child task.
      auto t5 = make_task([&] {
         // TODO: Perform work here.
      });

      // Run the child tasks and wait for them to finish.
      tg2.run(t4);
      tg2.run(t5);
      tg2.wait();

      wcout << (tg2.is_canceling() ? L"tg2 is canceled" : L"tg2 is not canceled")
            << endl;
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

   wcout << (tg1.is_canceling() ? L"tg1 is canceled" : L"tg1 is not canceled")
         << endl;
}

void throw_parent_task()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      // <snippet4>
      structured_task_group tg2;
      
      // Create a child task.      
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, throw an exception to 
            // cancel the parent task.
            bool succeeded = work(i);
            if (!succeeded)
            {
               throw exception("The task failed");
            }
         }         
      });

      // Create a child task.
      auto t5 = make_task([&] {
         // TODO: Perform work here.
      });

      // Run the child tasks.
      tg2.run(t4);
      tg2.run(t5);

      // Wait for the tasks to finish. The runtime marshals any exception
      // that occurs to the call to wait.
      try
      {
         tg2.wait();
      }
      catch (const exception& e)
      {
         wcout << e.what() << endl;
      }
      // </snippet4>
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

   wcout << (tg1.is_canceling() ? L"tg1 is canceled" : L"tg1 is not canceled")
         << endl;
   
}

void throw_task_tree()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      structured_task_group tg2;
      
      // Create a child task.      
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, throw an exception to 
            // cancel the parent task.
            bool succeeded = work(i);
            if (!succeeded)
            {
               throw exception("The task failed");
            }
         }         
      });

      // Create a child task.
      auto t5 = make_task([&] {
         // TODO: Perform work here.
      });

      // Run the child tasks.
      tg2.run(t4);
      tg2.run(t5);

      try
      {
         tg2.wait();
      }
      catch (exception& e)
      {
         throw e;
      }
   });

   // Create a child task.
   auto t2 = make_task([&] {
      // TODO: Perform work here.
   });

   // Create a child task.
   auto t3 = make_task([&] {
      // TODO: Perform work here.
   });

   // <snippet5>
   // Run the child tasks.
   tg1.run(t1);
   tg1.run(t2);
   tg1.run(t3);   
   
   // Wait for the tasks to finish. The runtime marshals any exception
   // that occurs to the call to wait.
   try
   {
      tg1.wait();
   }
   catch (const exception& e)
   {
      wcout << e.what() << endl;
   }
   // </snippet5>

   wcout << (tg1.is_canceling() ? L"tg1 is canceled" : L"tg1 is not canceled")
         << endl;   
}

void check_for_cancelation()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      // <snippet6>
      structured_task_group tg2;
      
      // Create a child task.
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, cancel the parent task
            // and break from the loop.
            bool succeeded = work(i);
            if (!succeeded)
            {
               tg2.cancel();
               break;
            }
         }
      });

      // Create a child task.
      auto t5 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // To reduce overhead, occasionally check for 
            // cancelation.
            if ((i%100) == 0)
            {
               if (tg2.is_canceling())
               {
                  wcout << L"The task was canceled." << endl;
                  break;
               }
            }

            // TODO: Perform work here.
         }
      });

      // Run the child tasks and wait for them to finish.
      tg2.run(t4);
      tg2.run(t5);
      tg2.wait();
      // </snippet6>
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

   wcout << (tg1.is_canceling() ? L"tg1 is canceled" : L"tg1 is not canceled")
         << endl;
   //wcout << (tg2.is_canceling() ? L"tg2 is canceled" : L"tg2 is not canceled")
   //      << endl;   
}

void check_for_cancelation2()
{   
   // Create a task group that serves as the root of the tree.
   structured_task_group tg1;

   // Create a task that contains a nested task group.
   auto t1 = make_task([&] {
      structured_task_group tg2;
      
      // Create a child task.
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, cancel the parent task
            // and break from the loop.
            bool succeeded = work(i);
            if (!succeeded)
            {
               throw exception("X");               
            }
         }
      });

      // Create a child task.
      auto t5 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // To reduce overhead, occasionally check for 
            // cancelation.
            if ((i%100) == 0)
            {
               if (tg2.is_canceling())
               {
                  wcout << L"The task was canceled." << endl;
                  break;
               }
            }

            // TODO: Perform work here.
         }
         wcout << L"I got all the way done!" << endl;
      });

      // Run the child tasks and wait for them to finish.
      tg2.run(t4);
      tg2.run(t5);
      try
      {
         tg2.wait();
      }
      catch (exception& e)
      {
         wcout << e.what() << endl;
      }
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

   wcout << (tg1.is_canceling() ? L"tg1 is canceled" : L"tg1 is not canceled")
         << endl;
   //wcout << (tg2.is_canceling() ? L"tg2 is canceled" : L"tg2 is not canceled")
   //      << endl;   
}

void cancel_parallel_algorithms()
{
   {
   // <snippet7>
   // To enable cancelation, call parallel_for in a task group.
   structured_task_group tg;

   task_group_status status = tg.run_and_wait([&] {
      parallel_for(0, 100, [&](int i) {
         // Cancel the task when i is 50.
         if (i == 50)
         {
            tg.cancel();
         }
         else
         {
            // TODO: Perform work here.
         }
      });
   });

   // Print the task group status.
   wcout << L"The task group status is: ";
   switch (status)
   {
   case not_complete:
      wcout << L"not complete." << endl;
      break;
   case completed:
      wcout << L"completed." << endl;
      break;
   case canceled:
      wcout << L"canceled." << endl;
      break;
   default:
      wcout << L"unknown." << endl;
      break;
   }
   // </snippet7>
   }

   {
   // <snippet8>
   // Create a Boolean flag to coordinate cancelation.
   bool canceled = false;

   parallel_for(0, 100, [&](int i) {
      // For illustration, set the flag to cancel the task when i is 50.
      if (i == 50)
      {
         canceled = true;
      }

      // Perform work if the task is not canceled.
      if (!canceled)
      {
         // TODO: Perform work here.
      }
   });
   // </snippet8>
   }

   // <snippet9>
   try
   {
      parallel_for(0, 100, [&](int i) {
         // Throw an exception to cancel the task when i is 50.
         if (i == 50)
         {
            throw i;
         }
         else
         {
            // TODO: Perform work here.
         }
      });
   }
   catch (int n)
   {
      wcout << L"Caught " << n << endl;
   }
   // </snippet9>
}

class X
{
public:
   ~X()
   {
      task_group tg;
      tg.run([] {
         wcout << L"In dtor" << endl;
      });
      tg.wait();
   }
};

void test_dtor()
{   
   task_group tg;
   X x;

   tg.run([&] {
      wcout << L"Canceling" << endl;
      tg.cancel();
      wcout << L"Canceled" << endl;
   });

   wcout << L"Waiting" << endl;
   tg.wait();
   wcout << L"Done" << endl;
}

void exception_precedence()
{   
   // <snippet10>
   structured_task_group tg;

   // Create a child task that cancels the task group.
   auto t1 = make_task([&] {
      structured_task_group tg1;
      auto t2 = make_task([] {
         throw exception("Unrecoverable error");
      });
      tg1.run(t2);
      tg.cancel();
      tg1.wait();
   });

   // Run the child tasks and wait for them to finish.
   tg.run(t1);
   try
   {
      tg.wait();
   }
   catch (const exception& e)
   {
      wcout << e.what() << endl;
   }
  
   wcout << (tg.is_canceling() ? L"The task was canceled." 
                               : L"The task was not canceled.")
         << endl;
   // </snippet10>
}

int wmain()
{  
   wcout << L"cancel_parent_task:" << endl;
   cancel_parent_task();
   
   wcout << endl;

   wcout << L"cancel_task_tree:" << endl;
   cancel_task_tree();

   wcout << endl;

   wcout << L"throw_parent_task:" << endl;
   throw_parent_task();

   wcout << endl;

   wcout << L"throw_task_tree:" << endl;
   throw_task_tree();

   wcout << endl;

   wcout << L"check_for_cancelation" << endl;
   check_for_cancelation();

   wcout << endl;

   wcout << L"check_for_cancelation2" << endl;
   check_for_cancelation2();

   wcout << endl;

   wcout << L"cancel_parallel_algorithms" << endl;
   cancel_parallel_algorithms();

   wcout << endl;

   //wcout << L"test_dtor" << endl;
   //test_dtor();

   //wcout << endl;

   //wcout << L"exception_precedence" << endl;
   //exception_precedence();
}
