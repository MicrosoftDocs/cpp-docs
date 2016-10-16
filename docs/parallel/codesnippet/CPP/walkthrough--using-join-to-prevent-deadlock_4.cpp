   explicit philosopher(unbounded_buffer<chopstick>& left, 
      unbounded_buffer<chopstick>& right, const wstring& name)
      : _left(left)
      , _right(right)
      , _name(name)
      , _random_generator(42)
   {
      send(_times_eaten, 0);
   }