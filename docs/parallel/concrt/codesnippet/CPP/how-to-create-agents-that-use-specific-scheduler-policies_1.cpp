// permute-strings.cpp
// compile with: /EHsc
#include <windows.h>
#include <ppl.h>
#include <agents.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// Computes all permutations of a given input string.
class permutor : public agent
{
public:
   explicit permutor(ISource<wstring>& source,
      ITarget<unsigned int>& progress)
      : _source(source)
      , _progress(progress)
   {
   }

   explicit permutor(ISource<wstring>& source,
      ITarget<unsigned int>& progress,
      Scheduler& scheduler)
      : agent(scheduler)
      , _source(source)
      , _progress(progress)
   {
   }

   explicit permutor(ISource<wstring>& source,
      ITarget<unsigned int>& progress,
      ScheduleGroup& group)
      : agent(group)       
      , _source(source)
      , _progress(progress)
   {
   }
   
protected:
   // Performs the work of the agent.
   void run()
   {
      // Read the source string from the buffer.
      wstring s = receive(_source);

      // Compute all permutations.
      permute(s);

      // Set the status of the agent to agent_done.
      done();
   }

   // Computes the factorial of the given value.
   unsigned int factorial(unsigned int n)
   {
      if (n == 0)
         return 0;
      if (n == 1)
         return 1;
      return n * factorial(n - 1);
   }

   // Computes the nth permutation of the given wstring.
   wstring permutation(int n, const wstring& s) 
   {
      wstring t(s);

      size_t len = t.length();
      for (unsigned int i = 2; i < len; ++i)
      {
         swap(t[n % i], t[i]);
         n = n / i;
      }
      return t;
   }

   // Computes all permutations of the given string.
   void permute(const wstring& s)
   {      
      // The factorial gives us the number of permutations.
      unsigned int permutation_count = factorial(s.length());

      // The number of computed permutations.
      LONG count = 0L;      

      // Tracks the previous percentage so that we only send the percentage
      // when it changes.
      unsigned int previous_percent = 0u;

      // Send initial progress message.
      send(_progress, previous_percent);

      // Compute all permutations in parallel.
      parallel_for (0u, permutation_count, [&](unsigned int i) {
         // Compute the permutation.
         permutation(i, s);

         // Send the updated status to the progress reader.
         unsigned int percent = 100 * InterlockedIncrement(&count) / permutation_count;
         if (percent > previous_percent)
         {
             send(_progress, percent);
             previous_percent = percent;
         }
      });

      // Send final progress message.
      send(_progress, 100u);
   }

private:
   // The buffer that contains the source string to permute.
   ISource<wstring>& _source;

   // The buffer to write progress status to.
   ITarget<unsigned int>& _progress;
};

// Prints progress messages to the console.
class printer : public agent
{
public:
   explicit printer(ISource<wstring>& source,
      ISource<unsigned int>& progress)
      : _source(source)
      , _progress(progress)
   {
   }

   explicit printer(ISource<wstring>& source,
      ISource<unsigned int>& progress, Scheduler& scheduler)
      : agent(scheduler)
      , _source(source)
      , _progress(progress)
   {
   }

   explicit printer(ISource<wstring>& source,
      ISource<unsigned int>& progress, ScheduleGroup& group)
      : agent(group)       
      , _source(source)
      , _progress(progress)
   {
   }
   
protected:
   // Performs the work of the agent.
   void run()
   {
      // Read the source string from the buffer and print a message.
      wstringstream ss;
      ss << L"Computing all permutations of '" << receive(_source) << L"'..." << endl;
      wcout << ss.str();
    
      // Print each progress message.
      unsigned int previous_progress = 0u;
      while (true)
      {         
         unsigned int progress = receive(_progress);

         if (progress > previous_progress || progress == 0u)
         { 
            wstringstream ss;
            ss << L'\r' << progress << L"% complete...";
            wcout << ss.str();
            previous_progress = progress;
         }

         if (progress == 100)
            break;
      }
      wcout << endl;

      // Set the status of the agent to agent_done.
      done();
   }

private:
   // The buffer that contains the source string to permute.
   ISource<wstring>& _source;

   // The buffer that contains progress status.
   ISource<unsigned int>& _progress;
};

// Computes all permutations of the given string. 
void permute_string(const wstring& source,
   Scheduler& permutor_scheduler, Scheduler& printer_scheduler)
{  
   // Message buffer that contains the source string.
   // The permutor and printer agents both read from this buffer.
   single_assignment<wstring> source_string;

   // Message buffer that contains the progress status.
   // The permutor agent writes to this buffer and the printer agent reads
   // from this buffer.
   unbounded_buffer<unsigned int> progress;

   // Create the agents with the appropriate schedulers.
   permutor agent1(source_string, progress, permutor_scheduler);
   printer agent2(source_string, progress, printer_scheduler);

   // Start the agents.
   agent1.start();
   agent2.start();
   
   // Write the source string to the message buffer. This will unblock the agents.
   send(source_string, source);

   // Wait for both agents to finish.
   agent::wait(&agent1);
   agent::wait(&agent2);
}

int wmain()
{
   const wstring source(L"Grapefruit");

   // Compute all permutations on the default scheduler.

   Scheduler* default_scheduler = CurrentScheduler::Get();
  
   wcout << L"With default scheduler: " << endl;
   permute_string(source, *default_scheduler, *default_scheduler);
   wcout << endl;

   // Compute all permutations again. This time, provide a scheduler that
   // has higher context priority to the printer agent.

   SchedulerPolicy printer_policy(1, ContextPriority, THREAD_PRIORITY_HIGHEST);
   Scheduler* printer_scheduler = Scheduler::Create(printer_policy);

   // Register to be notified when the scheduler shuts down.
   HANDLE hShutdownEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
   printer_scheduler->RegisterShutdownEvent(hShutdownEvent);

   wcout << L"With higher context priority: " << endl;
   permute_string(source, *default_scheduler, *printer_scheduler);
   wcout << endl; 

   // Release the printer scheduler.
   printer_scheduler->Release();

   // Wait for the scheduler to shut down and destroy itself.
   WaitForSingleObject(hShutdownEvent, INFINITE);

   // Close the event handle.
   CloseHandle(hShutdownEvent);
}