   // Releases access to the semaphore.
   void release()
   {
      // If the semaphore count is negative, unblock the first waiting context.
      if (++_semaphore_count <= 0)
      {
         // A call to acquire might have decremented the counter, but has not
         // yet finished adding the context to the queue. 
         // Create a spin loop that waits for the context to become available.
         Context* waiting = NULL;
         while (!_waiting_contexts.try_pop(waiting))
         {
            Context::Yield();
         }

         // Unblock the context.
         waiting->Unblock();
      }
   }