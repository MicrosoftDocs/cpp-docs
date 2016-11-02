      __declspec(align(64)) long count1 = 0L;      
      __declspec(align(64)) long count2 = 0L;      
      concurrency::parallel_invoke(
         [&count1] {
            for(int i = 0; i < 100000000; ++i)
               ++count1;
         },
         [&count2] {
            for(int i = 0; i < 100000000; ++i)
               ++count2;
         }
      );
      long count = count1 + count2;