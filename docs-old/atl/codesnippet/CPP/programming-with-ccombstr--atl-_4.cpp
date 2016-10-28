   // Declare a CComBSTR object
   CComBSTR bstrMyString(L"Hello World");
   // Free the string explicitly
   ::SysFreeString(bstrMyString);
   // The string will be freed a second time
   // when the CComBSTR object goes out of scope,
   // which is invalid.   