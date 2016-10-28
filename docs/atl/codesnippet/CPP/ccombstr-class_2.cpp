   CComBSTR bstrPre(OLESTR("Hello "));
   CComBSTR bstrSuf(OLESTR("World!"));
   HRESULT hr;

   // Appends "World!" to "Hello "
   hr = bstrPre.AppendBSTR(bstrSuf);

   // Displays a message box with text "Hello World!"
   ::MessageBox(NULL, CW2CT(bstrPre), NULL, MB_OK);   