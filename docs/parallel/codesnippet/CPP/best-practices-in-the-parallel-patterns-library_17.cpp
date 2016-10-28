      volatile long count = 0L;
      concurrency::parallel_invoke(
         [&count] {
            for(int i = 0; i < 100000000; ++i)
               InterlockedIncrement(&count);
         },
         [&count] {
            for(int i = 0; i < 100000000; ++i)
               InterlockedIncrement(&count);
         }
      );