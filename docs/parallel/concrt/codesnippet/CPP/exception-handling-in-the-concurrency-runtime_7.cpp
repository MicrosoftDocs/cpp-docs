// eh-agents.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Defines a point with x and y coordinates.
struct point
{
   int X;
   int Y;
};

// Informs the agent to end processing.
point sentinel = {0,0};

// An agent that prints point objects to the console.
class point_agent : public agent
{
public:
   explicit point_agent(unbounded_buffer<point*>& points)
      : _points(points)
   { 
   }

   // Retrieves any exception that occurred in the agent.
   bool get_error(exception& e)
   {
      return try_receive(_error, e);
   }

protected:
   // Performs the work of the agent.
   void run()
   {
      // Perform processing in a try block.
      try
      {
         // Read from the buffer until we reach the sentinel value.
         while (true)
         {
            // Read a value from the message buffer.
            point* r = receive(_points);

            // In this example, it is an error to receive a 
            // NULL point pointer. In this case, throw an exception.
            if (r == NULL)
            {
               throw exception("point must not be NULL");
            }
            // Break from the loop if we receive the 
            // sentinel value.
            else if (r == &sentinel)
            {
               break;
            }
            // Otherwise, do something with the point.
            else
            {
               // Print the point to the console.
               wcout << L"X: " << r->X << L" Y: " << r->Y << endl;
            }
         }
      }
      // Store the error in the message buffer.
      catch (exception& e)
      {
         send(_error, e);
      }

      // Set the agent status to done.
      done();
   }

private:
   // A message buffer that receives point objects.
   unbounded_buffer<point*>& _points;

   // A message buffer that stores error information.
   single_assignment<exception> _error;
};

int wmain()
{  
   // Create a message buffer so that we can communicate with
   // the agent.
   unbounded_buffer<point*> buffer;

   // Create and start a point_agent object.
   point_agent a(buffer);
   a.start();

   // Send several points to the agent.
   point r1 = {10, 20};
   point r2 = {20, 30};
   point r3 = {30, 40};

   send(buffer, &r1);
   send(buffer, &r2);
   // To illustrate exception handling, send the NULL pointer to the agent.
   send(buffer, reinterpret_cast<point*>(NULL));
   send(buffer, &r3);
   send(buffer, &sentinel);

   // Wait for the agent to finish.
   agent::wait(&a);
  
   // Check whether the agent encountered an error.
   exception e;
   if (a.get_error(e))
   {
      cout << "error occurred in agent: " << e.what() << endl;
   }
   
   // Print out agent status.
   wcout << L"the status of the agent is: ";
   switch (a.status())
   {
   case agent_created:
      wcout << L"created";
      break;
   case agent_runnable:
      wcout << L"runnable";
      break;
   case agent_started:
      wcout << L"started";
      break;
   case agent_done:
      wcout << L"done";
      break;
   case agent_canceled:
      wcout << L"canceled";
      break;
   default:
      wcout << L"unknown";
      break;
   }
   wcout << endl;
}