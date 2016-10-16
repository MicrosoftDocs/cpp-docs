   CComBSTR bstrPre(OLESTR("Hello "));
   CComBSTR bstrSuf(OLESTR("World!"));

   // Appends "World!" to "Hello "
   bstrPre += bstrSuf;

   // Displays a message box with text "Hello World!"
   ::MessageBox(NULL, CW2CT(bstrPre), NULL, MB_OK);   