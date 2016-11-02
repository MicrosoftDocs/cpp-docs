         // Define myList.
         CList<CString,CString&> myList;

         // Add an element to the end of the list.
         myList.AddTail(CString(_T("ABC")));

         // Verify the element at the end position
         // is the one added.
         POSITION pos = myList.GetTailPosition();
         ASSERT(CString(_T("ABC")) == myList.GetAt(pos));      