   // Create a new CHeapPtr object
   CHeapPtr <int> myHP;
   // Allocate space for 10 integers on the heap
   myHP.Allocate(10);
   // Resize the allocated memory for 20 integers
   myHP.Reallocate(20);   