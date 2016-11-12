      // Sort the partitions in parallel.
      parallel_invoke(
         [&items,lo,m] { parallel_bitonic_sort(items, lo, m, INCREASING); },
         [&items,lo,m] { parallel_bitonic_sort(items, lo + m, m, DECREASING); }
      );