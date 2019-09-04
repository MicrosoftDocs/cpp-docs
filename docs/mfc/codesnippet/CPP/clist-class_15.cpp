// Define myList.
CList<CString, CString &> myList;

// Add three elements to the list.
POSITION pos = myList.AddHead(CString(_T("XYZ")));
pos = myList.InsertBefore(pos, CString(_T("ABC")));
pos = myList.InsertBefore(pos, CString(_T("123")));

// Verify the head element is what's expected.
ASSERT(CString(_T("123")) == myList.GetHead());