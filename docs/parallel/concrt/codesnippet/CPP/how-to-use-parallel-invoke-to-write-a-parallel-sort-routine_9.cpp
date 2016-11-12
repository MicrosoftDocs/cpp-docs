template <class T>
void quick_sort(T* items, int lo, int n)
{
   // TODO: The function body is omitted for brevity.
}

template <class T>
void parallel_bitonic_sort(T* items, int lo, int n, bool dir)
{
   // Use the serial quick sort algorithm if there are relatively few
   // items to sort. The associated overhead for running few tasks in 
   // parallel may not overcome the benefits of parallel processing.
   if (n - lo + 1 <= 500)
   {
      quick_sort(items, lo, n);
   }
   else if (n > 1)
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