   // string with 11 chars
   CComBSTR bstrTemp(OLESTR("Hello World"));

   unsigned int len = bstrTemp.Length();

   ATLASSERT(len == 11);