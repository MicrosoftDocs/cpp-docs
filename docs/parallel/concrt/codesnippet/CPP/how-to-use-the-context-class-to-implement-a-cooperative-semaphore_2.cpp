   // The semaphore count.
   atomic<long long> _semaphore_count;

   // A concurrency-safe queue of contexts that must wait to 
   // acquire the semaphore.
   concurrent_queue<Context*> _waiting_contexts;