   CString theString(_T("This is a test"));
   int sizeOfString = (theString.GetLength() + 1);
   LPTSTR lpsz = new TCHAR[sizeOfString];
   _tcscpy_s(lpsz, sizeOfString, theString);
   //... modify lpsz as much as you want   