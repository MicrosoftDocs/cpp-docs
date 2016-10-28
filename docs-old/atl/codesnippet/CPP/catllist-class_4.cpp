   // Define two integer lists
   CAtlList<int> myList1;
   CAtlList<int> myList2;

   // Fill up the first list
   myList1.AddTail(1);
   myList1.AddTail(2);
   myList1.AddTail(3);

   // Add an element to the second list
   myList2.AddTail(4);

   // Insert the first list into the second
   myList2.AddTailList(&myList1);

   // The second list now contains:
   // 4, 1, 2, 3   