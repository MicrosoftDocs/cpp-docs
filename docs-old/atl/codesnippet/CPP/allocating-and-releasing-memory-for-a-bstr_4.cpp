      BSTR bstrStatus;
      pBrowser->get_StatusText(&bstrStatus);

      // shows using the Win32 function 
      // to free the memory for the string: 
      ::SysFreeString(bstrStatus);