         // Define myList.
         CList<CString,CString&> myList;

         // Add two elements to the list.
         myList.AddHead(CString(_T("ABC")));
         myList.AddHead(CString(_T("123")));

         // Dump the list elements to the debug window,
         // in reverse order.
         POSITION pos = myList.GetTailPosition();
         for (int i = 0; i < myList.GetCount(); i++)
         {
            TRACE(_T("%s\r\n"), (LPCTSTR)myList.GetPrev(pos));
         }