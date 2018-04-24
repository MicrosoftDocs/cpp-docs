// <snippet1>
// lambda-lifetime.cpp
// compile with: /c /EHsc
#include <ppl.h>

using namespace concurrency;

// A type that performs an action.
class object
{
public:
   void action() const
   {
      // TODO: Details omitted for brevity.
   }
};

// Performs an action asynchronously.
void perform_action(task_group& tasks)
{
   // Create an object variable and perform some action on 
   // that variable asynchronously.
   object obj;
   tasks.run([&obj] {
      obj.action();
   });

   // NOTE: The object variable is destroyed here. The program
   // will crash or exhibit unspecified behavior if the task
   // is still running when this function returns.
}
// </snippet1>

namespace A {
// <snippet2>
// Performs an action asynchronously.
void perform_action(task_group& tasks)
{
   // Create an object variable and perform some action on 
   // that variable asynchronously.
   object obj;
   tasks.run([obj] {
      obj.action();
   });
}
// </snippet2>
} // A

namespace B {
// <snippet3>
// Performs an action.
void perform_action(task_group& tasks)
{
   // Create an object variable and perform some action on 
   // that variable.
   object obj;
   tasks.run([&obj] {
      obj.action();
   });

   // Wait for the task to finish. 
   tasks.wait();
}
// </snippet3>
} // B

namespace C {
// <snippet4>
// Performs an action asynchronously.
void perform_action(object& obj, task_group& tasks)
{
   // Perform some action on the object variable.
   tasks.run([&obj] {
      obj.action();
   });
}
// </snippet4>
} // C

int wmain()
{
}
