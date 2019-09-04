// Define myList.
CList<CString, CString &> myList;

// Add three elements to the list.
myList.AddHead(CString(_T("XYZ")));
myList.AddHead(CString(_T("ABC")));
myList.AddHead(CString(_T("123")));

// Find a specific element.
POSITION pos = myList.Find(CString(_T("XYZ")));
ASSERT(CString(_T("XYZ")) == myList.GetAt(pos));