   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1;                    // Empty string
   CAtlString s2(_T("cat"));           // From a C string literal
   CAtlString s3 = s2;               // Copy constructor
   CAtlString s4(s2 + _T(" ") + s3);   // From a string expression

   CAtlString s5(_T('x'));             // s5 = "x"
   CAtlString s6(_T('x'), 6);          // s6 = "xxxxxx"

   CAtlString s7((LPCSTR)ID_FILE_NEW); // s7 = "Create a new document"

   VARIANT var;
   V_VT(&var) = VT_BSTR;
   V_BSTR(&var) = ::SysAllocString(L"Football is a fun sport.");
   CAtlString s8(var); // s8 = "Football is a fun sport."

   // The following statement does not call the assignment operator.
   // The compiler considers the following statement equivalent to
   // CAtlString city("Paris")
   CAtlString city = _T("Paris");   