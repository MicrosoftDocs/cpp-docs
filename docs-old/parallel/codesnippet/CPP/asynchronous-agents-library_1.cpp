// basic-agents.cpp
// compile with: /EHsc
#include <agents.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// This agent writes a string to its target and reads an integer
// from its source.
class agent1 : public agent 
{
public:
   explicit agent1(ISource<int>& source, ITarget<wstring>& target)
      : _source(source)
      , _target(target)
   {
   }

protected:
   void run()
   {
      // Send the request.
      wstringstream ss;
      ss << L"agent1: sending request..." << endl;
      wcout << ss.str();

      send(_target, wstring(L"request"));

      // Read the response.
      int response = receive(_source);

      ss = wstringstream();
      ss << L"agent1: received '" << response << L"'." << endl;
      wcout << ss.str();

      // Move the agent to the finished state.
      done();
   }

private:   
   ISource<int>& _source;
   ITarget<wstring>& _target;
};

// This agent reads a string to its source and then writes an integer
// to its target.
class agent2 : public agent 
{
public:
   explicit agent2(ISource<wstring>& source, ITarget<int>& target)
      : _source(source)
      , _target(target)
   {
   }

protected:
   void run()
   {
      // Read the request.
      wstring request = receive(_source);

      wstringstream ss;
      ss << L"agent2: received '" << request << L"'." << endl;
      wcout << ss.str();

      // Send the response.
      ss = wstringstream();
      ss << L"agent2: sending response..." << endl;
      wcout << ss.str();

      send(_target, 42);

      // Move the agent to the finished state.
      done();
   }

private:   
   ISource<wstring>& _source;
   ITarget<int>& _target;
};

int wmain()
{
   // Step 1: Create two message buffers to serve as communication channels
   // between the agents.
   
   // The first agent writes messages to this buffer; the second
   // agents reads messages from this buffer.
   unbounded_buffer<wstring> buffer1;

   // The first agent reads messages from this buffer; the second
   // agents writes messages to this buffer.
   overwrite_buffer<int> buffer2;

   // Step 2: Create the agents.
   agent1 first_agent(buffer2, buffer1);
   agent2 second_agent(buffer1, buffer2);

   // Step 3: Start the agents. The runtime calls the run method on
   // each agent.
   first_agent.start();
   second_agent.start();

   // Step 4: Wait for both agents to finish.
   agent::wait(&first_agent);
   agent::wait(&second_agent);
}