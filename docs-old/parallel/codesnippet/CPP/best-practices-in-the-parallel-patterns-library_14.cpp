// Searches for an element of the provided array that satisfies the provided
// predicate function.
template<typename T, class Predicate>
Answer<T>* parallel_find_answer(const T a[], size_t count, const Predicate& pred)
{
   // The result of the search.
   Answer<T>* answer = nullptr;
   // Ensures that only one task produces an answer.
   volatile long first_result = 0;

   // Use parallel_for and a task group to search for the element.
   structured_task_group tasks;
   tasks.run_and_wait([&]
   {
      // Declare the type alias for use in the inner lambda function.
      typedef T T;

      parallel_for<size_t>(0, count, [&](const T& n) {
         if (pred(a[n]) && InterlockedExchange(&first_result, 1) == 0)
         {
            // Cancel the overall task.
            tasks.cancel();
            // Create an object that holds the answer.
            answer = new Answer<T>(a[n]);            
         }
      });
   });

   return answer;
}