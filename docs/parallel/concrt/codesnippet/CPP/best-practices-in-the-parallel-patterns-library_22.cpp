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