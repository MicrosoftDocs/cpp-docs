// Define myList and myList2.
CList<CString, CString &> myList;
CList<CString, CString &> myList2;

// Add elements to the end of myList and myList2.
myList.AddTail(CString(_T("A")));
myList.AddTail(CString(_T("B")));
myList2.AddTail(CString(_T("C")));
myList2.AddTail(CString(_T("D")));

// There are two versions of CList::AddTail: one adds a single
// element to the end of the list, the second adds another list
// to the end.

// This adds the string "ABC" to the end of myList.
// myList is a list of CStrings (ie defined as CList<CString,CString&>).
myList.AddTail(CString(_T("ABC")));
ASSERT(CString(_T("ABC")) == myList.GetTail());

// This adds the elements of myList2 to the end of myList.
myList.AddTail(&myList2);