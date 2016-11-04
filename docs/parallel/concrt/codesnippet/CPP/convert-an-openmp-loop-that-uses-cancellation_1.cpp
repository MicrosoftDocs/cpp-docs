// concrt-omp-parallel-any-of.cpp
// compile with: /EHsc /openmp
#include <ppl.h>
#include <array>
#include <random>
#include <iostream>

using namespace concurrency;
using namespace std;

// Uses OpenMP to determine whether a condition exists in 
// the specified range of elements.
template <class InIt, class Predicate>
bool omp_parallel_any_of(InIt first, InIt last, const Predicate& pr)
{
   typedef typename std::iterator_traits<InIt>::value_type item_type;

   // A flag that indicates that the condition exists.
   bool found = false;

   #pragma omp parallel for
      for (int i = 0; i < static_cast<int>(last-first); ++i)
      {
         if (!found)
         {
            item_type& cur = *(first + i);

            // If the element satisfies the condition, set the flag to 
            // cancel the operation.
            if (pr(cur)) {
               found = true;
            }
         }
      }

   return found;
}

// Uses the Concurrency Runtime to determine whether a condition exists in 
// the specified range of elements.
template <class InIt, class Predicate>
bool concrt_parallel_any_of(InIt first, InIt last, const Predicate& pr)
{
   typedef typename std::iterator_traits<InIt>::value_type item_type;

   structured_task_group tasks;

   // Create a predicate function that cancels the task group when
   // an element satisfies the condition.
   auto for_each_predicate = [&pr, &tasks](const item_type& cur) {
      if (pr(cur)) {
         tasks.cancel();
      }
   };

   // Create a task that calls the predicate function in parallel on each
   // element in the range.
   auto task = make_task([&]() {
       parallel_for_each(first, last, for_each_predicate);
   });

   // The condition is satisfied if the task group is in the cancelled state.
   return tasks.run_and_wait(task) == canceled;
}

int wmain()
{
   // The length of the array.
   const size_t size = 100000;
   
   // Create an array and initialize it with random values.
   array<int, size> a;   
   generate(begin(a), end(a), mt19937(42));

   // Search for a value in the array by using OpenMP and the Concurrency Runtime.

   const int what = 9114046;
   auto predicate = [what](int n) -> bool { 
      return (n == what);
   };

   wcout << L"Using OpenMP..." << endl;
   if (omp_parallel_any_of(begin(a), end(a), predicate))
   {
      wcout << what << L" is in the array." << endl;
   }
   else
   {
      wcout << what << L" is not in the array." << endl;
   }

   wcout << L"Using the Concurrency Runtime..." << endl;
   if (concrt_parallel_any_of(begin(a), end(a), predicate))
   {
      wcout << what << L" is in the array." << endl;
   }
   else
   {
      wcout << what << L" is not in the array." << endl;
   }
}