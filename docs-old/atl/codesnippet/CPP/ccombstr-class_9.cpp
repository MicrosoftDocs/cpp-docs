// Method which converts bstrIn to uppercase 
STDMETHODIMP BSTRToUpper(BSTR bstrIn, BSTR* pbstrOut)
{ 
    if (bstrIn == NULL || pbstrOut == NULL) 
        return E_POINTER; 

    // Create a temporary copy of bstrIn
    CComBSTR bstrTemp(bstrIn); 

    if (!bstrTemp) 
        return E_OUTOFMEMORY; 

    // Make string uppercase
    HRESULT hr;
    hr = bstrTemp.ToUpper();
    if (hr != S_OK)
        return hr;
    
    // Return m_str member of bstrTemp 
    *pbstrOut = bstrTemp.Detach(); 

    return S_OK; 
}