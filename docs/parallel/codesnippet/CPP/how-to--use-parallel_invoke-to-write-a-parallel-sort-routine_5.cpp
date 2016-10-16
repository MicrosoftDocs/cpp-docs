// Sorts the given sequence in the specified order.
template <class T>
void parallel_bitonic_sort(T* items, int lo, int n, bool dir)
{   
   if (n > 1)
   {
      // Divide the array into two partitions and then sort 
      // the partitions in different directions.
      int m = n / 2;

      // Sort the partitions in parallel.
      parallel_invoke(
         [&items,lo,m] { parallel_bitonic_sort(items, lo, m, INCREASING); },
         [&items,lo,m] { parallel_bitonic_sort(items, lo + m, m, DECREASING); }
      );
      
      // Merge the results.
      parallel_bitonic_merge(items, lo, n, dir);
   }
}