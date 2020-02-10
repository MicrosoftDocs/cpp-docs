// scheduler-policy.cpp
// compile with: /EHsc
#include <windows.h>
#include <ppl.h>
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Computes the nth Fibonacci number.
// This function illustrates a lengthy operation and is therefore
// not optimized for performance.
int fibonacci(int n)
{
   if (n < 2)
      return n;

   // Compute the components in parallel.
   int n1, n2;
   parallel_invoke(
      [n,&n1] { n1 = fibonacci(n-1); },
      [n,&n2] { n2 = fibonacci(n-2); }
   );
  
   return n1 + n2;
}

// Prints a progress indicator while computing the nth Fibonacci number.
void fibonacci_with_progress(Scheduler& progress_scheduler, int n)
{
   // Use a task group to compute the Fibonacci number.
   // The tasks in this group are scheduled by the current scheduler.
   structured_task_group tasks;

   auto task = make_task([n] {
      fibonacci(n);
   });
   tasks.run(task);

   // Create a call object that prints its input to the console.
   // This example uses the provided scheduler to schedule the 
   // task that the call object performs.
   call<wchar_t> c(progress_scheduler, [](wchar_t c) { 
      wcout << c; 
   });

   // Connect the call object to a timer object. The timer object
   // sends a progress message to the call object every 100 ms.
   // This example also uses the provided scheduler to schedule the 
   // task that the timer object performs.
   timer<wchar_t> t(progress_scheduler, 100, L'.', &c, true);
   t.start();

   // Wait for the task that computes the Fibonacci number to finish.
   tasks.wait();

   // Stop the timer.
   t.stop();

   wcout << L"done" << endl;
}

int wmain()
{  
   // Calculate the 38th Fibonacci number.
   const int n = 38;

   // Use the default scheduler to schedule the progress indicator while 
   // the Fibonacci number is calculated in the background.

   wcout << L"Default scheduler:" << endl;
   fibonacci_with_progress(*CurrentScheduler::Get(), n);

   // Now use a scheduler that has a custom policy for the progress indicator.
   // The custom policy specifies the thread priority to the highest 
   // priority class.
   
   SchedulerPolicy policy(1, ContextPriority, THREAD_PRIORITY_HIGHEST);
   Scheduler* scheduler = Scheduler::Create(policy);

   // Register to be notified when the scheduler shuts down.
   HANDLE hShutdownEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
   scheduler->RegisterShutdownEvent(hShutdownEvent);

   wcout << L"Scheduler that has a custom policy:" << endl;
   fibonacci_with_progress(*scheduler, n);

   // Release the final reference to the scheduler. This causes the scheduler
   // to shut down.
   scheduler->Release();

   // Wait for the scheduler to shut down and destroy itself.
   WaitForSingleObject(hShutdownEvent, INFINITE);

   // Close the event handle.
   CloseHandle(hShutdownEvent);
}