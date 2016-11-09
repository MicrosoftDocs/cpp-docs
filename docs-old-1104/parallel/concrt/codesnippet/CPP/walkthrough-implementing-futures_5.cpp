   // Retrieves the result of the work function.
   // This method blocks if the async_future object is still 
   // computing the value.
   T get()
   { 
      return receive(_value); 
   }