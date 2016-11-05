const bool INCREASING = true;
const bool DECREASING = false;

// Comparator function for the bitonic sort algorithm.
template <class T>
void compare(T* items, int i, int j, bool dir)
{
   if (dir == (items[i] > items[j]))
   {
      swap(items[i], items[j]);
   }
}

// Sorts a bitonic sequence in the specified order.
template <class T>
void bitonic_merge(T* items, int lo, int n, bool dir)
{
   if (n > 1)
   {
      int m = n / 2;
      for (int i = lo; i < lo + m; ++i)
      {
         compare(items, i, i + m, dir);
      }
      bitonic_merge(items, lo, m, dir);
      bitonic_merge(items, lo + m, m, dir);
   }
}

// Sorts the given sequence in the specified order.
template <class T>
void bitonic_sort(T* items, int lo, int n, bool dir)
{
   if (n > 1)
   {
      // Divide the array into two partitions and then sort 
      // the partitions in different directions.
      int m = n / 2;
      bitonic_sort(items, lo, m, INCREASING);
      bitonic_sort(items, lo + m, m, DECREASING);

      // Merge the results.
      bitonic_merge(items,lo, n, dir);
   }
}

// Sorts the given sequence in increasing order.
template <class T>
void bitonic_sort(T* items, int size)
{
    bitonic_sort(items, 0, size, INCREASING);
}