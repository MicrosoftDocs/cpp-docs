// parallel-bitonic-sort.cpp
// compile with: /EHsc
#include <windows.h>
#include <algorithm>
#include <iostream>
#include <random>
#include <ppl.h>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

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

// Sorts the given sequence in increasing order.
template <class T>
void parallel_bitonic_sort(T* items, int size)
{
   parallel_bitonic_sort(items, 0, size, INCREASING);
}

int wmain()
{  
   // For this example, the size must be a power of two.
   const int size = 0x200000;

   // Create two large arrays and fill them with random values.
   int* a1 = new int[size];
   int* a2 = new int[size];

   mt19937 gen(42);
   for(int i = 0; i < size; ++i)
   {
      a1[i] = a2[i] = gen();
   }

   __int64 elapsed;
   
   // Perform the serial version of the sort.
   elapsed = time_call([&] { bitonic_sort(a1, size); });
   wcout << L"serial time: " << elapsed << endl;

   // Now perform the parallel version of the sort.
   elapsed = time_call([&] { parallel_bitonic_sort(a2, size); });
   wcout << L"parallel time: " << elapsed << endl;
 
   delete[] a1;
   delete[] a2;
}