   CName name;
   CString last, first;
   TCHAR middle;
   name.SetData(_T("John"), 'Q', _T("Public"));
   ASSERT(name.GetLastName() == _T("Public"));
   name.GetData(first, middle, last);
   ASSERT((first == _T("John")) && (last == _T("Public")));