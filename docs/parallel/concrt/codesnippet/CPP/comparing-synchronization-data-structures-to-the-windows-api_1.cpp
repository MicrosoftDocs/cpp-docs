// event-comparison.cpp
// compile with: /EHsc
#include <windows.h>
#include <concrtrm.h>
#include <ppl.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// Demonstrates the usage of cooperative events.
void RunCooperativeEvents()
{
   // An event object.
   event e;

   // Create a task group and execute five tasks that wait for
   // the event to be set.
   task_group tasks;
   for (int i = 0; i < 5; ++i)
   {
      tasks.run([&] {
         // Print a message before waiting on the event.
         wstringstream ss;
         ss << L"\t\tContext " << GetExecutionContextId() 
            << L": waiting on an event." << endl; 
         wcout << ss.str();

         // Wait for the event to be set.
         e.wait();

         // Print a message after the event is set.
         ss = wstringstream();
         ss << L"\t\tContext " << GetExecutionContextId() 
            << L": received the event." << endl; 
         wcout << ss.str();
      });
   }

   // Wait a sufficient amount of time for all tasks to enter 
   // the waiting state.
   Sleep(1000L);

   // Set the event.

   wstringstream ss;
   ss << L"\tSetting the event." << endl; 
   wcout << ss.str();

   e.set();

   // Wait for all tasks to complete.
   tasks.wait();
}

// Demonstrates the usage of preemptive events.
void RunWindowsEvents()
{
   // A Windows event object.
   HANDLE hEvent = CreateEvent(NULL, TRUE, FALSE, TEXT("Windows Event"));

   // Create a task group and execute five tasks that wait for
   // the event to be set.
   task_group tasks;
   for (int i = 0; i < 5; ++i)
   {
      tasks.run([&] {
         // Print a message before waiting on the event.
         wstringstream ss;
         ss << L"\t\tContext " << GetExecutionContextId() 
            << L": waiting on an event." << endl; 
         wcout << ss.str();

         // Wait for the event to be set.
         WaitForSingleObject(hEvent, INFINITE);

         // Print a message after the event is set.
         ss = wstringstream();
         ss << L"\t\tContext " << GetExecutionContextId() 
            << L": received the event." << endl; 
         wcout << ss.str();
      });
   }

   // Wait a sufficient amount of time for all tasks to enter 
   // the waiting state.
   Sleep(1000L);

   // Set the event.

   wstringstream ss;
   ss << L"\tSetting the event." << endl; 
   wcout << ss.str();

   SetEvent(hEvent);

   // Wait for all tasks to complete.
   tasks.wait();

   // Close the event handle.
   CloseHandle(hEvent);
}

int wmain()
{
   // Create a scheduler policy that allows up to two 
   // simultaneous tasks.
   SchedulerPolicy policy(1, MaxConcurrency, 2);

   // Attach the policy to the current scheduler.
   CurrentScheduler::Create(policy);
   
   wcout << L"Cooperative event:" << endl;
   RunCooperativeEvents();

   wcout << L"Windows event:" << endl;
   RunWindowsEvents();
}