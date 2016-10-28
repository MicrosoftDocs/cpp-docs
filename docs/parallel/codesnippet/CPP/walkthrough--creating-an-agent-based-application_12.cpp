   // The components of the Adler-32 sum.
   unsigned int a = 1;
   unsigned int b = 0;

   // A call object that updates the checksum when it receives data.
   call<string> calculate_checksum([&] (string s) {
      // If the input string is empty, set the event to signal
      // the end of processing.
      if (s.size() == 0)
         e.set();
      // Perform the Adler-32 checksum algorithm.
      for_each(begin(s), end(s), [&] (char c) {
         a = (a + c) % 65521;
         b = (b + a) % 65521;
      });
   });