// producer-consumer-average.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Demonstrates a basic agent that produces values.
class producer_agent : public agent
{
public:
   explicit producer_agent(ITarget<int>& target, unsigned int count, int sentinel)
      : _target(target)
      , _count(count)
      , _sentinel(sentinel)
   {
   }
protected:
   void run()
   {
      // Send the value of each loop iteration to the target buffer.
      while (_count > 0)
      {
         send(_target, static_cast<int>(_count));
         --_count;
      }
      // Send the sentinel value.
      send(_target, _sentinel);
                 
      // Set the agent to the finished state.
      done();
   }
private:
   // The target buffer to write to.
   ITarget<int>& _target;
   // The number of values to send.
   unsigned int _count;
   // The sentinel value, which informs the consumer agent to stop processing.
   int _sentinel;
};

// Demonstrates a basic agent that consumes values.
class consumer_agent : public agent
{
public:
   explicit consumer_agent(ISource<int>& source, int sentinel)
      : _source(source)
      , _sentinel(sentinel)
   {
   }

   // Retrieves the average of all received values.
   int average()
   {
      return receive(_average);
   }
protected:
   void run()
   {
      // The sum of all values.
      int sum = 0;
      // The count of values received.
      int count = 0;

      // Read from the source block until we receive the 
      // sentinel value.
      int n;
      while ((n = receive(_source)) != _sentinel)
      {
         sum += n;
         ++count;
      }
      
      // Write the average to the message buffer.
      send(_average, sum / count);

      // Set the agent to the finished state.
      done();
   }
private:
   // The source buffer to read from.
   ISource<int>& _source;
   // The sentinel value, which informs the agent to stop processing.
   int _sentinel;
   // Holds the average of all received values.
   single_assignment<int> _average;
};

int wmain()
{
   // Informs the consumer agent to stop processing.
   const int sentinel = 0;
   // The number of values for the producer agent to send.
   const unsigned int count = 100;

   // A message buffer that is shared by the agents.
   unbounded_buffer<int> buffer;

   // Create and start the producer and consumer agents.
   producer_agent producer(buffer, count, sentinel);
   consumer_agent consumer(buffer, sentinel);
   producer.start();
   consumer.start();

   // Wait for the agents to finish.
   agent::wait(&producer);
   agent::wait(&consumer);

   // Print the average.
   wcout << L"The average is " << consumer.average() << L'.' << endl;
}