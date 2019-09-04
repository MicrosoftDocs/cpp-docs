// Define myList.
// Define myList.
CList<CString, CString &> myList;

// Add two elements to the list.
myList.AddHead(CString(_T("ABC")));
myList.AddHead(CString(_T("123")));

// Dump the list elements to the debug window.
POSITION pos = myList.GetHeadPosition();
for (int i = 0; i < myList.GetCount(); i++)
{
   TRACE(_T("%s\r\n"), (LPCTSTR)myList.GetNext(pos));
}