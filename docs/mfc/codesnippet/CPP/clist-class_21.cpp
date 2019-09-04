// Define myList.
CList<CString, CString &> myList;

// Add three elements to the list.
myList.AddTail(CString(_T("XYZ")));
myList.AddTail(CString(_T("ABC")));
myList.AddTail(CString(_T("123")));

// Replace CString("ABC") with CString("CBA")
POSITION pos = myList.Find(CString(_T("ABC")));
myList.SetAt(pos, CString(_T("CBA")));

// Verify CString("ABC") is not in the list.
ASSERT(myList.Find(CString(_T("ABC"))) == NULL);