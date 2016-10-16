      // shows using the Win32 function 
      // to allocate memory for the string: 
      BSTR bstrStatus = ::SysAllocString(L"Some text");
      if (bstrStatus != NULL)
      {
         pBrowser->put_StatusText(bstrStatus);
         // Free the string:
         ::SysFreeString(bstrStatus);
      }