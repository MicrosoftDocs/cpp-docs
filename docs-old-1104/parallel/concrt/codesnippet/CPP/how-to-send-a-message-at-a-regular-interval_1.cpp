// report-progress.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Simulates a lengthy operation.
void perform_lengthy_operation()
{
   // Yield the current context for one second.
   wait(1000);
}

int wmain()
{  
   // Create a call object that prints a single character to the console.
   call<wchar_t> report_progress([](wchar_t c) { 
      wcout << c;
   });

   // Create a timer object that sends the dot character to the 
   // call object every 100 milliseconds.
   timer<wchar_t> progress_timer(100, L'.', &report_progress, true);

   wcout << L"Performing a lengthy operation";

   // Start the timer on a separate context.
   progress_timer.start();

   // Perform a lengthy operation on the main context.
   perform_lengthy_operation();

   // Stop the timer and print a message.
   progress_timer.stop();

   wcout << L"done.";
}