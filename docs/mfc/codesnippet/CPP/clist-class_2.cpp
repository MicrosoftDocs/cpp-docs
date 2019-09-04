// Declarations of the variables used in the example
CList<CString, CString &> myList;
CList<CString, CString &> myList2;

// There are two versions of CList::AddHead: one adds a single
// element to the front of the list, the second adds another list
// to the front.

// This adds the string "ABC" to the front of myList.
// myList is a list of CStrings (ie defined as CList<CString,CString&>).
myList.AddHead(CString(_T("ABC")));

// This adds the elements of myList2 to the front of myList.
myList.AddHead(&myList2);