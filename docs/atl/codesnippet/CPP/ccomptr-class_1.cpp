// Error-checking routine that performs manual lifetime management
// of a COM IErrorInfo object
HRESULT CheckComError_Manual()
{
   HRESULT hr;
   CComBSTR bstrDescription; 
   CComBSTR bstrSource; 
   CComBSTR bstrHelpFile; 

   IErrorInfo* pErrInfo = NULL; // naked COM interface pointer
   hr = ::GetErrorInfo(0, &pErrInfo);
   if(hr != S_OK)
      return hr;

   hr = pErrInfo->GetDescription(&bstrDescription); 
   if(FAILED(hr))
   {
      pErrInfo->Release();   // must release interface pointer before returning
      return hr;
   }

   hr = pErrInfo->GetSource(&bstrSource);
   if(FAILED(hr))
   {
      pErrInfo->Release();   // must release interface pointer before returning
      return hr;
   }

   hr = pErrInfo->GetHelpFile(&bstrHelpFile);
   if(FAILED(hr))
   {
      pErrInfo->Release();   // must release interface pointer before returning
      return hr;
   }

   pErrInfo->Release();      // must release interface pointer before returning
   return S_OK;
}