// message-sharing.cpp
// compile with: /EHsc
#include <agents.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// A type that holds a resource.
class resource
{
public:
   resource(int id) : _id(id)
   { 
      wcout << L"Creating resource " << _id << L"..." << endl;
   }
   ~resource()
   { 
      wcout << L"Destroying resource " << _id << L"..." << endl;
   }

   // Retrieves the identifier for the resource.
   int id() const { return _id; }

   // TODO: Add additional members here.
private:
   // An identifier for the resource.
   int _id;

   // TODO: Add additional members here.
};

int wmain()
{   
   // A message buffer that sends messages to each of its targets.
   overwrite_buffer<shared_ptr<resource>> input;
      
   // Create three call objects that each receive resource objects
   // from the input message buffer.

   call<shared_ptr<resource>> receiver1(
      [](shared_ptr<resource> res) {
         wstringstream ss;
         ss << L"receiver1: received resource " << res->id() << endl;
         wcout << ss.str();
      },
      [](shared_ptr<resource> res) { 
         return res != nullptr; 
      }
   );

   call<shared_ptr<resource>> receiver2(
      [](shared_ptr<resource> res) {
         wstringstream ss;
         ss << L"receiver2: received resource " << res->id() << endl;
         wcout << ss.str();
      },
      [](shared_ptr<resource> res) { 
         return res != nullptr; 
      }
   );

   event e;
   call<shared_ptr<resource>> receiver3(
      [&e](shared_ptr<resource> res) {
         e.set();
      },
      [](shared_ptr<resource> res) { 
         return res == nullptr; 
      }
   );

   // Connect the call objects to the input message buffer.
   input.link_target(&receiver1);
   input.link_target(&receiver2);
   input.link_target(&receiver3);

   // Send a few messages through the network.
   send(input, make_shared<resource>(42));
   send(input, make_shared<resource>(64));
   send(input, shared_ptr<resource>(nullptr));

   // Wait for the receiver that accepts the nullptr value to 
   // receive its message.
   e.wait();
}