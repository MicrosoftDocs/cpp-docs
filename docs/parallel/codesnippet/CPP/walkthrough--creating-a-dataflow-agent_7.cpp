// dataflow-agent.cpp
// compile with: /EHsc 
#include <windows.h>
#include <agents.h>
#include <iostream>
#include <random>

using namespace concurrency;
using namespace std;

// A basic agent that uses control-flow to regulate the order of program 
// execution. This agent reads numbers from a message buffer and counts the 
// number of positive and negative values.
class control_flow_agent : public agent
{
public:
   explicit control_flow_agent(ISource<int>& source)
      : _source(source)
   {
   }

   // Retrieves the count of negative numbers that the agent received.
   size_t negatives() 
   {
      return receive(_negatives);
   }

   // Retrieves the count of positive numbers that the agent received.
   size_t positives()
   {
      return receive(_positives);
   }

protected:
   void run()
   {
      // Counts the number of negative and positive values that
      // the agent receives.
      size_t negative_count = 0;
      size_t positive_count = 0;

      // Read from the source buffer until we receive
      // the sentinel value of 0.
      int value = 0;      
      while ((value = receive(_source)) != 0)
      {
         // Send negative values to the first target and
         // non-negative values to the second target.
         if (value < 0)
            ++negative_count;
         else
            ++positive_count;
      }

      // Write the counts to the message buffers.
      send(_negatives, negative_count);
      send(_positives, positive_count);

      // Set the agent to the completed state.
      done();
   }
private:
   // Source message buffer to read from.
   ISource<int>& _source;

   // Holds the number of negative and positive numbers that the agent receives.
   single_assignment<size_t> _negatives;
   single_assignment<size_t> _positives;
};

// A synchronization primitive that is signaled when its 
// count reaches zero.
class countdown_event
{
public:
   countdown_event(unsigned int count = 0L)
      : _current(static_cast<long>(count)) 
   {
      // Set the event if the initial count is zero.
      if (_current == 0L)
         _event.set();
   }
     
   // Decrements the event counter.
   void signal() {
      if(InterlockedDecrement(&_current) == 0L) {
         _event.set();
      }
   }

   // Increments the event counter.
   void add_count() {
      if(InterlockedIncrement(&_current) == 1L) {
         _event.reset();
      }
   }
   
   // Blocks the current context until the event is set.
   void wait() {
      _event.wait();
   }
 
private:
   // The current count.
   volatile long _current;
   // The event that is set when the counter reaches zero.
   event _event;

   // Disable copy constructor.
   countdown_event(const countdown_event&);
   // Disable assignment.
   countdown_event const & operator=(countdown_event const&);
};

// A basic agent that resembles control_flow_agent, but uses uses dataflow to 
// perform computations when data becomes available.
class dataflow_agent : public agent
{
public:
   dataflow_agent(ISource<int>& source)
      : _source(source)
   {
   }

   // Retrieves the count of negative numbers that the agent received.
   size_t negatives() 
   {
      return receive(_negatives);
   }

   // Retrieves the count of positive numbers that the agent received.
   size_t positives()
   {
      return receive(_positives);
   }

protected:
   void run()
   {
      // Counts the number of negative and positive values that
      // the agent receives.
      size_t negative_count = 0;
      size_t positive_count = 0;

      // Tracks the count of active operations.
      countdown_event active;
      // An event that is set by the sentinel.
      event received_sentinel;
      
      //
      // Create the members of the dataflow network.
      //
     
      // Increments the active counter.
      transformer<int, int> increment_active(
         [&active](int value) -> int {
            active.add_count();
            return value;
         });

      // Increments the count of negative values.
      call<int> negatives(
         [&](int value) {
            ++negative_count;
            // Decrement the active counter.
            active.signal();
         },
         [](int value) -> bool {
            return value < 0;
         });

      // Increments the count of positive values.
      call<int> positives(
         [&](int value) {
            ++positive_count;
            // Decrement the active counter.
            active.signal();
         },
         [](int value) -> bool {
            return value > 0;
         });

      // Receives only the sentinel value of 0.
      call<int> sentinel(
         [&](int value) {            
            // Decrement the active counter.
            active.signal();
            // Set the sentinel event.
            received_sentinel.set();
         },
         [](int value) { 
            return value == 0; 
         });

      // Connects the _source message buffer to the rest of the network.
      unbounded_buffer<int> connector;
       
      //
      // Connect the network.
      //

      // Connect the internal nodes of the network.
      connector.link_target(&negatives);
      connector.link_target(&positives);
      connector.link_target(&sentinel);
      increment_active.link_target(&connector);

      // Connect the _source buffer to the internal network to 
      // begin data flow.
      _source.link_target(&increment_active);

      // Wait for the sentinel event and for all operations to finish.
      received_sentinel.wait();
      active.wait();
           
      // Write the counts to the message buffers.
      send(_negatives, negative_count);
      send(_positives, positive_count);

      // Set the agent to the completed state.
      done();
   }

private:
   // Source message buffer to read from.
   ISource<int>& _source;
   
   // Holds the number of negative and positive numbers that the agent receives.
   single_assignment<size_t> _negatives;
   single_assignment<size_t> _positives;
};

// Sends a number of random values to the provided message buffer.
void send_values(ITarget<int>& source, int sentinel, size_t count)
{
   // Send a series of random numbers to the source buffer.
   mt19937 rnd(42);
   for (size_t i = 0; i < count; ++i)
   {
      // Generate a random number that is not equal to the sentinel value.
      int n;
      while ((n = rnd()) == sentinel);

      send(source, n);      
   }
   // Send the sentinel value.
   send(source, sentinel);   
}

int wmain()
{
   // Signals to the agent that there are no more values to process.
   const int sentinel = 0;
   // The number of samples to send to each agent.
   const size_t count = 1000000;

   // The source buffer that the application writes numbers to and 
   // the agents read numbers from.
   unbounded_buffer<int> source;

   //
   // Use a control-flow agent to process a series of random numbers.
   //
   wcout << L"Control-flow agent:" << endl;

   // Create and start the agent.
   control_flow_agent cf_agent(source);
   cf_agent.start();
   
   // Send values to the agent.
   send_values(source, sentinel, count);
   
   // Wait for the agent to finish.
   agent::wait(&cf_agent);
   
   // Print the count of negative and positive numbers.
   wcout << L"There are " << cf_agent.negatives() 
         << L" negative numbers."<< endl;
   wcout << L"There are " << cf_agent.positives() 
         << L" positive numbers."<< endl;  

   //
   // Perform the same task, but this time with a dataflow agent.
   //
   wcout << L"Dataflow agent:" << endl;

   // Create and start the agent.
   dataflow_agent df_agent(source);
   df_agent.start();
   
   // Send values to the agent.
   send_values(source, sentinel, count);
   
   // Wait for the agent to finish.
   agent::wait(&df_agent);
   
   // Print the count of negative and positive numbers.
   wcout << L"There are " << df_agent.negatives() 
         << L" negative numbers."<< endl;
   wcout << L"There are " << df_agent.positives() 
         << L" positive numbers."<< endl;
}