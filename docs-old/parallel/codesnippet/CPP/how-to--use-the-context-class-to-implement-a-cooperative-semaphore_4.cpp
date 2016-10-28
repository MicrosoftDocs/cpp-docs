   // Acquires access to the semaphore.
   void acquire()
   {
      // The capacity of the semaphore is exceeded when the semaphore count 
      // falls below zero. When this happens, add the current context to the 
      // back of the wait queue and block the current context.
      if (--_semaphore_count < 0)
      {
         _waiting_contexts.push(Context::CurrentContext());
         Context::Block();
      }
   }