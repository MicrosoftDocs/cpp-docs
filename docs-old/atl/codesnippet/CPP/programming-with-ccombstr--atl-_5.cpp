   // This is not an efficient way to use a CComBSTR object.
   CComBSTR bstrMyString;
   HRESULT hr;
   while (bstrMyString.Length() < 1000)
      hr = bstrMyString.Append(L"*");   