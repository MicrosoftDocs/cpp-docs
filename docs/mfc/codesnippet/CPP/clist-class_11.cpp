// Define myList.
CList<CString, CString &> myList;

// Add two elements to the list.
myList.AddHead(CString(_T("ABC")));
myList.AddHead(CString(_T("123")));

// Remove the head element and verify the list.
// NOTE: once the head is removed, the number of
// elements in the list will be one.
CString strHead = myList.RemoveHead();
ASSERT((CString(_T("123")) == strHead) && (myList.GetSize() == 1) &&
       (CString(_T("ABC")) == myList.GetHead()));