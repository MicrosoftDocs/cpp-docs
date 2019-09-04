// Define myList.
CList<CString, CString &> myList;

// Add an element to the front of the list.
myList.AddHead(CString(_T("ABC")));

// Verify the element was added to the front of the list.
ASSERT(CString(_T("ABC")) == myList.GetHead());