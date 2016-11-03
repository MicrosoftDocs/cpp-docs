// producer-consumer-quotes.cpp
// compile with: /EHsc
#include <agents.h>
#include <array>
#include <algorithm>
#include <iostream>

using namespace concurrency;
using namespace std;

// Demonstrates a basic agent that produces values.
class producer_agent : public agent
{
public:
   explicit producer_agent(ITarget<double>& target)
      : _target(target)
   {
   }
protected:
   void run()
   {
      // For illustration, create a predefined array of stock quotes. 
      // A real-world application would read these from an external source, 
      // such as a network connection or a database.
      array<double, 6> quotes = { 24.44, 24.65, 24.99, 23.76, 22.30, 25.89 };

      // Send each quote to the target buffer.
      for_each (begin(quotes), end(quotes), [&] (double quote) { 

         send(_target, quote);

         // Pause before sending the next quote.
         concurrency::wait(20);
      });
      // Send a negative value to indicate the end of processing.
      send(_target, -1.0);
                 
      // Set the agent to the finished state.
      done();
   }
private:
   // The target buffer to write to.
   ITarget<double>& _target;
};

// Demonstrates a basic agent that consumes values.
class consumer_agent : public agent
{
public:
   explicit consumer_agent(ISource<double>& source)
      : _source(source)      
   {
   }

protected:
   void run()
   {
      // Read quotes from the source buffer until we receive
      // a negative value.
      double quote;
      while ((quote = receive(_source)) >= 0.0)
      {
         // Print the quote.
         wcout.setf(ios::fixed);
         wcout.precision(2);
         wcout << L"Current quote is " << quote << L'.' << endl;

         // Pause before reading the next quote.
         concurrency::wait(10);
      }

      // Set the agent to the finished state.
      done();
   }
private:
   // The source buffer to read from.
   ISource<double>& _source;
};

int wmain()
{
   // A message buffer that is shared by the agents.
   overwrite_buffer<double> buffer;

   // Create and start the producer and consumer agents.
   producer_agent producer(buffer);
   consumer_agent consumer(buffer);
   producer.start();
   consumer.start();

   // Wait for the agents to finish.
   agent::wait(&producer);
   agent::wait(&consumer);
}