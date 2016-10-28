   // string with 11 chars (22 bytes)
   CComBSTR bstrTemp(OLESTR("Hello World"));

   unsigned int len = bstrTemp.ByteLength();

   ATLASSERT(len == 22);   