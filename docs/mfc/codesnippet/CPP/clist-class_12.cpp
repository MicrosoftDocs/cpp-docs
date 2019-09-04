// Define myList.
CList<CString, CString &> myList;

// Add an element to the end of the list.
myList.AddTail(CString(_T("ABC")));

// Verify the element was added to the end of the list.
ASSERT(CString(_T("ABC")) == myList.GetTail());