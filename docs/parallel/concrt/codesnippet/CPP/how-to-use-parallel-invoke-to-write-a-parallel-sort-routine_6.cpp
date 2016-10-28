// Sorts the given sequence in increasing order.
template <class T>
void parallel_bitonic_sort(T* items, int size)
{
   parallel_bitonic_sort(items, 0, size, INCREASING);
}