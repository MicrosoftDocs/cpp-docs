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