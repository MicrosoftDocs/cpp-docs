// A synchronization primitive that is signaled when its 
// count reaches zero.
class countdown_event
{
public:
   countdown_event(unsigned int count = 0)
      : _current(static_cast<long>(count)) 
   {
      // Set the event if the initial count is zero.
      if (_current == 0L)
         _event.set();
   }
     
   // Decrements the event counter.
   void signal() {
      if(InterlockedDecrement(&_current) == 0L) {
         _event.set();
      }
   }

   // Increments the event counter.
   void add_count() {
      if(InterlockedIncrement(&_current) == 1L) {
         _event.reset();
      }
   }
   
   // Blocks the current context until the event is set.
   void wait() {
      _event.wait();
   }
 
private:
   // The current count.
   volatile long _current;
   // The event that is set when the counter reaches zero.
   event _event;

   // Disable copy constructor.
   countdown_event(const countdown_event&);
   // Disable assignment.
   countdown_event const & operator=(countdown_event const&);
};