// Define myList.
CList<CString, CString &> myList;

// Add two elements to the list.
myList.AddTail(CString(_T("ABC")));
myList.AddTail(CString(_T("123")));

// Remove the tail element and verify the list.
// NOTE: once the tail is removed, the number of
// elements in the list will be one.
CString strTail = myList.RemoveTail();
ASSERT((CString(_T("123")) == strTail) && (myList.GetCount() == 1) &&
       (CString(_T("ABC")) == myList.GetTail()));