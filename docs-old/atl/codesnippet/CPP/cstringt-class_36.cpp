   BSTR bstr = ::SysAllocString(L"Golf is fun!");

   // create a CAtlString and change the OLE
   // string to the contents of the BSTR
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("Soccer is best!"));
   BSTR bstr2 = str.SetSysString(&bstr);

   // Now, both bstr and bstr2 reference a single instance of
   // the "Soccer" string. The "Golf" string has been freed.
   ASSERT(bstr2 == bstr);   