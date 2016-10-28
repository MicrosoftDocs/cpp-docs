// Sorts a bitonic sequence in the specified order.
template <class T>
void parallel_bitonic_merge(T* items, int lo, int n, bool dir)
{   
   // Merge the sequences concurrently if there is sufficient work to do.
   if (n > 500)
   {
      int m = n / 2;
      for (int i = lo; i < lo + m; ++i)
      {
         compare(items, i, i + m, dir);
      }

      // Use the parallel_invoke algorithm to merge the sequences in parallel.
      parallel_invoke(
         [&items,lo,m,dir] { parallel_bitonic_merge(items, lo, m, dir); },
         [&items,lo,m,dir] { parallel_bitonic_merge(items, lo + m, m, dir); }
      );
   }
   // Otherwise, perform the work serially.
   else if (n > 1)
   {
      bitonic_merge(items, lo, n, dir);
   }   
}