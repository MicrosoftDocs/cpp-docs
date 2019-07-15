// Define myList.
CList<CString, CString&> myList;

// Add three elements to the list.
myList.AddTail(CString(_T("XYZ")));
myList.AddTail(CString(_T("ABC")));
myList.AddTail(CString(_T("123")));

// Remove CString("ABC") from the list.
myList.RemoveAt(myList.FindIndex(1));

// Verify CString("ABC") is not in the list.
ASSERT(myList.Find(CString(_T("ABC"))) == NULL);