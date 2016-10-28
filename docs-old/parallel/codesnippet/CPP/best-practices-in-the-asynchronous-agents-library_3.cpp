// message-payloads.cpp
// compile with: /EHsc
#include <Windows.h>
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

// A message structure that contains large payload data.
struct message_data
{
   int id;
   string source;
   unsigned char binary_data[32768];
};

// A basic agent that produces values.
template <typename T>
class producer : public agent
{
public:
   explicit producer(ITarget<T>& target, unsigned int message_count)
      : _target(target)
      , _message_count(message_count)
   {
   }
protected:
   void run();

private:
   // The target buffer to write to.
   ITarget<T>& _target;
   // The number of messages to send.
   unsigned int _message_count;
};

// Template specialization for message_data.
template <>
void producer<message_data>::run()
{
   // Send a number of messages to the target buffer.
   while (_message_count > 0)
   {
      message_data message;
      message.id = _message_count;
      message.source = "Application";

      send(_target, message);
      --_message_count;
   }
   
   // Set the agent to the finished state.
   done();
}

// Template specialization for message_data*.
template <>
void producer<message_data*>::run()
{
   // Send a number of messages to the target buffer.
   while (_message_count > 0)
   {
      message_data* message = new message_data;
      message->id = _message_count;
      message->source = "Application";

      send(_target, message);
      --_message_count;
   }
   
   // Set the agent to the finished state.
   done();
}

// A basic agent that consumes values.
template <typename T>
class consumer : public agent
{
public:
   explicit consumer(ISource<T>& source, unsigned int message_count)
      : _source(source)
      , _message_count(message_count)
   {
   }

protected:
   void run();

private:
   // The source buffer to read from.
   ISource<T>& _source;
   // The number of messages to receive.
   unsigned int _message_count;
};

// Template specialization for message_data.
template <>
void consumer<message_data>::run()
{
   // Receive a number of messages from the source buffer.
   while (_message_count > 0)
   {
      message_data message = receive(_source);
      --_message_count;

      // TODO: Do something with the message. 
      // ...
   }
       
   // Set the agent to the finished state.
   done();
}

template <>
void consumer<message_data*>::run()
{
   // Receive a number of messages from the source buffer.
   while (_message_count > 0)
   {
      message_data* message = receive(_source);
      --_message_count;

      // TODO: Do something with the message.
      // ...

      // Release the memory for the message.
      delete message;     
   }
       
   // Set the agent to the finished state.
   done();
}

int wmain()
{
   // The number of values for the producer agent to send.
   const unsigned int count = 10000;
      
   __int64 elapsed;

   // Run the producer and consumer agents.
   // This version uses message_data as the message payload type.

   wcout << L"Using message_data..." << endl;
   elapsed = time_call([count] {
      // A message buffer that is shared by the agents.
      unbounded_buffer<message_data> buffer;

      // Create and start the producer and consumer agents.
      producer<message_data> prod(buffer, count);
      consumer<message_data> cons(buffer, count);
      prod.start();
      cons.start();

      // Wait for the agents to finish.
      agent::wait(&prod);
      agent::wait(&cons);
   });
   wcout << L"took " << elapsed << L"ms." << endl;

   // Run the producer and consumer agents a second time.
   // This version uses message_data* as the message payload type.

   wcout << L"Using message_data*..." << endl;
   elapsed = time_call([count] {
      // A message buffer that is shared by the agents.
      unbounded_buffer<message_data*> buffer;

      // Create and start the producer and consumer agents.
      producer<message_data*> prod(buffer, count);
      consumer<message_data*> cons(buffer, count);
      prod.start();
      cons.start();

      // Wait for the agents to finish.
      agent::wait(&prod);
      agent::wait(&cons);
   });
   wcout << L"took " << elapsed << L"ms." << endl;
}