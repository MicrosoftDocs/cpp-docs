// Error-checking routine that performs automatic lifetime management
// of a COM IErrorInfo object through a CComPtr smart pointer object
HRESULT CheckComError_SmartPtr()
{
   HRESULT hr;
   CComBSTR bstrDescription; 
   CComBSTR bstrSource; 
   CComBSTR bstrHelpFile; 

   CComPtr<IErrorInfo> pErrInfo; 
   hr = ::GetErrorInfo(0, &pErrInfo);
   if(hr != S_OK)
      return hr;

   hr = pErrInfo->GetDescription(&bstrDescription); 
   if(FAILED(hr))
      return hr;

   hr = pErrInfo->GetSource(&bstrSource);
   if(FAILED(hr))
      return hr;

   hr = pErrInfo->GetHelpFile(&bstrHelpFile);
   if(FAILED(hr))
      return hr;

   return S_OK;
}   // CComPtr will auto-release underlying IErrorInfo interface pointer as needed