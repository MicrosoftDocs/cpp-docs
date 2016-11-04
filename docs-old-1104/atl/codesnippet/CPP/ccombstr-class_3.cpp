   CComBSTR bstrPre(OLESTR("Hello "));
   HRESULT hr;

   // Appends "Wo" to "Hello " (4 bytes == 2 characters)
   hr = bstrPre.AppendBytes(reinterpret_cast<char*>(OLESTR("World!")), 4);

   // Displays a message box with text "Hello Wo"
   ::MessageBox(NULL, CW2CT(bstrPre), NULL, MB_OK);   