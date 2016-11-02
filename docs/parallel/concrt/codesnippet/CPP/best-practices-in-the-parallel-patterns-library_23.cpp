// Performs an action asynchronously.
void perform_action(object& obj, task_group& tasks)
{
   // Perform some action on the object variable.
   tasks.run([&obj] {
      obj.action();
   });
}