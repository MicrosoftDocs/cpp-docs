   // Declare a CComBSTR object. Although the argument is ANSI,
   // the constructor converts it into UNICODE.
   CComBSTR bstrMyString("Hello World");
   // Convert the string into an ANSI string
   CW2A szMyString(bstrMyString);
   // Display the ANSI string
   MessageBoxA(NULL, szMyString, "String Test", MB_OK);   