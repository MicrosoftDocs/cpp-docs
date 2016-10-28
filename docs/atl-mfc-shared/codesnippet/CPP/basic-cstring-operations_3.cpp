   CString s1 = _T("This ");        // Cascading concatenation
   s1 += _T("is a ");
   CString s2 = _T("test");
   CString message = s1 + _T("big ") + s2;  
   // Message contains "This is a big test".