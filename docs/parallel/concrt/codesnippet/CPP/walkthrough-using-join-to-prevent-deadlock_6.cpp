   // Releases the chopsticks for others.
   void putdown_chopsticks(int left, int right)
   {
      // Add the values of the messages back to the message queue.
      asend(&_left, left);
      asend(&_right, right);
   }