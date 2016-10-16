STDMETHODIMP CHelper::ShowPage(BSTR bstrCaption, BSTR bstrID, IUnknown* pUnk)
{
   if (!pUnk)
      return E_INVALIDARG;

   // First, assume bstrID is a string representing the CLSID 
   CLSID theCLSID = {0};
   HRESULT hr = CLSIDFromString(bstrID, &theCLSID);
   if (FAILED(hr))
   {
      // Now assume bstrID is a ProgID
      hr = CLSIDFromProgID(bstrID, &theCLSID);
      if (FAILED(hr))
         return hr;
   }

   // Use the system-supplied property frame
   return OleCreatePropertyFrame(
      GetActiveWindow(),   // Parent window of the property frame
      0,           // Horizontal position of the property frame
      0,           // Vertical position of the property frame
      bstrCaption, // Property frame caption
      1,           // Number of objects
      &pUnk,       // Array of IUnknown pointers for objects
      1,           // Number of property pages
      &theCLSID,   // Array of CLSIDs for property pages
      NULL,        // Locale identifier
      0,           // Reserved - 0
      NULL         // Reserved - 0
      );
}