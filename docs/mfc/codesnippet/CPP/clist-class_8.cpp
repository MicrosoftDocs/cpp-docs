// Define myList.
CList<CString, CString &> myList;

// Add an element to the front of the list.
myList.AddHead(CString(_T("ABC")));

// Verify the element at the head position
// is the one added.
POSITION pos = myList.GetHeadPosition();
ASSERT(CString(_T("ABC")) == myList.GetAt(pos));