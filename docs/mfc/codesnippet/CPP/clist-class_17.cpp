// Define myList.
CList<CString, CString&> myList;

// Add three elements to the list.
myList.AddTail(CString(_T("XYZ")));
myList.AddTail(CString(_T("ABC")));
myList.AddTail(CString(_T("123")));

// Remove all of the elements in the list.
myList.RemoveAll();

// Verify the list is empty.
ASSERT(myList.IsEmpty());