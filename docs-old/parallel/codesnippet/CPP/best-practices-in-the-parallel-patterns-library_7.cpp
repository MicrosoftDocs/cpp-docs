// Returns the position in the provided array that contains the given value, 
// or -1 if the value is not in the array.
template<typename T>
int parallel_find_any(const T a[], size_t count, const T& what)
{
   // The position of the element in the array. 
   // The default value, -1, indicates that the element is not in the array.
   int position = -1;

   // Call parallel_for in the context of a cancellation token to search for the element.
   cancellation_token_source cts;
   run_with_cancellation_token([count, what, &a, &position, &cts]()
   {
      parallel_for(std::size_t(0), count, [what, &a, &position, &cts](int n) {
         if (a[n] == what)
         {
            // Set the return value and cancel the remaining tasks.
            position = n;
            cts.cancel();
         }
      });
   }, cts.get_token());

   return position;
}