   template <class Functor>
   explicit async_future(Functor&& fn)
   {
      // Execute the work function in a task group and send the result
      // to the single_assignment object.
      _tasks.run([fn, this]() {
         send(_value, fn());
       });
   }