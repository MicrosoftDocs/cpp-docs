// basic-agent.cpp
// compile with: /c /EHsc
#include <agents.h>

// An agent that uses message buffers to isolate state and communicate
// with other components.
class basic_agent : public concurrency::agent
{
public:
   basic_agent(concurrency::unbounded_buffer<int>& input)
      : _input(input)
   {
   }
   
   // Retrives the message buffer that holds output messages.
   concurrency::unbounded_buffer<int>& output()
   {
      return _output;
   }

protected:
   void run()
   {
      while (true)
      {
         // Read from the input message buffer.
         int value = concurrency::receive(_input);

         // TODO: Do something with the value.
         int result = value;
         
         // Write the result to the output message buffer.
         concurrency::send(_output, result);
      }
      done();
   }

private:
   // Holds incoming messages.
   concurrency::unbounded_buffer<int>& _input;
   // Holds outgoing messages.
   concurrency::unbounded_buffer<int> _output;
};