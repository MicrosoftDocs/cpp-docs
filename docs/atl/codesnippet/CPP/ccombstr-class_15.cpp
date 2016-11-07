   CComBSTR bstrStr ;
   // bstrStr is not initialized so this call will not assert.
   MyInitFunction(&bstrStr); 

   CComBSTR bstrStr2(OLESTR("Hello World"));
   // bstrStr2 is initialized so this call will assert.
   ::SysReAllocString(&bstrStr2, OLESTR("Bye"));