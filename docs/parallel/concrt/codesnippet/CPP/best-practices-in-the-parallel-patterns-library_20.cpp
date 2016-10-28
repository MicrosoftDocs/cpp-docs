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