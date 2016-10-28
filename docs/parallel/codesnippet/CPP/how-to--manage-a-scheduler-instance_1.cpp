// scheduler-instance.cpp
// compile with: /EHsc
#include <windows.h>
#include <ppl.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Prints the identifier of the current scheduler to the console.
void perform_task()
{
   // A task group.
   task_group tasks;

   // Run a task in the group. The current scheduler schedules the task.
   tasks.run_and_wait([] { 
      wcout << L"Current scheduler id: " << CurrentScheduler::Id() << endl;
   });
}

// Uses the CurrentScheduler class to manage a scheduler instance.
void current_scheduler()
{
   // Run the task.
   // This prints the identifier of the default scheduler.
   perform_task();

   // For demonstration, create a scheduler object that uses 
   // the default policy values.
   wcout << L"Creating and attaching scheduler..." << endl;
   CurrentScheduler::Create(SchedulerPolicy());

   // Register to be notified when the scheduler shuts down.
   HANDLE hShutdownEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
   CurrentScheduler::RegisterShutdownEvent(hShutdownEvent);

   // Run the task again.
   // This prints the identifier of the new scheduler.
   perform_task();

   // Detach the current scheduler. This restores the previous scheduler
   // as the current one.
   wcout << L"Detaching scheduler..." << endl;
   CurrentScheduler::Detach();

   // Wait for the scheduler to shut down and destroy itself.
   WaitForSingleObject(hShutdownEvent, INFINITE);

   // Close the event handle.
   CloseHandle(hShutdownEvent);

   // Run the sample task again.
   // This prints the identifier of the default scheduler.
   perform_task();
}

// Uses the Scheduler class to manage a scheduler instance.
void explicit_scheduler()
{
   // Run the task.
   // This prints the identifier of the default scheduler.
   perform_task();

   // For demonstration, create a scheduler object that uses 
   // the default policy values.
   wcout << L"Creating scheduler..." << endl;
   Scheduler* scheduler = Scheduler::Create(SchedulerPolicy());

   // Register to be notified when the scheduler shuts down.
   HANDLE hShutdownEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
   scheduler->RegisterShutdownEvent(hShutdownEvent);

   // Associate the scheduler with the current thread.
   wcout << L"Attaching scheduler..." << endl;
   scheduler->Attach();

   // Run the sample task again.
   // This prints the identifier of the new scheduler.
   perform_task();

   // Detach the current scheduler. This restores the previous scheduler
   // as the current one.
   wcout << L"Detaching scheduler..." << endl;
   CurrentScheduler::Detach();

   // Release the final reference to the scheduler. This causes the scheduler
   // to shut down after all tasks finish.
   scheduler->Release();

   // Wait for the scheduler to shut down and destroy itself.
   WaitForSingleObject(hShutdownEvent, INFINITE);

   // Close the event handle.
   CloseHandle(hShutdownEvent);

   // Run the sample task again.
   // This prints the identifier of the default scheduler.
   perform_task();
}

int wmain()
{
   // Use the CurrentScheduler class to manage a scheduler instance.
   wcout << L"Using CurrentScheduler class..." << endl << endl;
   current_scheduler();

   wcout << endl << endl;

   // Use the Scheduler class to manage a scheduler instance.
   wcout << L"Using Scheduler class..." << endl << endl;
   explicit_scheduler();
}