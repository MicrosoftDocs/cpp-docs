// An exception-safe RAII wrapper for the semaphore class.
class scoped_lock
{
public:
   // Acquires access to the semaphore.
   scoped_lock(semaphore& s)
      : _s(s)
   {
      _s.acquire();
   }
   // Releases access to the semaphore.
   ~scoped_lock()
   {
      _s.release();
   }

private:
   semaphore& _s;
};