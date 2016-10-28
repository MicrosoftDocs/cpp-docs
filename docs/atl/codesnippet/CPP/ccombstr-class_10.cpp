   CComBSTR bstr(OLESTR("abc"));

   // Calls SysFreeString to free the BSTR
   bstr.Empty();
   ATLASSERT(bstr.Length() == 0);   