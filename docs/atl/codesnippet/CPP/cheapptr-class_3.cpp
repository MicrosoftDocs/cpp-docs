   // Create a new CHeapPtr object
   CHeapPtr <int> myHP;
   // Allocate space for 10 integers on the heap
   myHP.Allocate(10);
   // Create a second heap pointer
   // and assign it to the first pointer.
   CHeapPtr <int> myHP2;
   myHP2 = myHP;   