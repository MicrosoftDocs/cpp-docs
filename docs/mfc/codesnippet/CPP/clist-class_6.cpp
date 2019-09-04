// Define myList.
CList<CString, CString &> myList;

// Add three elements to the list.
myList.AddTail(CString(_T("XYZ")));
myList.AddTail(CString(_T("ABC")));
myList.AddTail(CString(_T("123")));

// Verify the first element (index 0).
ASSERT(CString(_T("XYZ")) == myList.GetAt(myList.FindIndex(0)));

// Verify the third element (index 2).
ASSERT(CString(_T("123")) == myList.GetAt(myList.FindIndex(2)));