// STDMETHOD(BSTRToUpper)(/*[in, out]*/ BSTR bstrConv);
STDMETHODIMP InplaceBSTRToUpper(BSTR bstrConv)
{
   // Assign bstrConv to m_str member of CComBSTR
   CComBSTR bstrTemp;
   bstrTemp.Attach(bstrConv); 

   // Make sure BSTR is not NULL string
   if (!bstrTemp)
        return E_POINTER;

   // Make string uppercase 
   HRESULT hr;
   hr = bstrTemp.ToUpper();
   if (hr != S_OK)
       return hr;

   // Set m_str to NULL, so the BSTR is not freed
   bstrTemp.Detach(); 

   return S_OK; 
}