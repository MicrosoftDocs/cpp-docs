// Define myList.
CList<CString, CString &> myList;

// Add three elements to the list.
myList.AddTail(CString(_T("XYZ")));
myList.AddTail(CString(_T("ABC")));
myList.AddTail(CString(_T("123")));

// Remove the head element until the list is empty.
CString str;
while (!myList.IsEmpty())
{
   str = myList.RemoveHead();
   TRACE(_T("%s\r\n"), (LPCTSTR)str);
}