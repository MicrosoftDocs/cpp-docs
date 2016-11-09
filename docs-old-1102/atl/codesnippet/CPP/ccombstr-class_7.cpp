   CComBSTR m_bstrURL;    // BSTR representing a URL

   // put_URL is the put method for the URL property. 
   STDMETHOD(put_URL)(BSTR strURL)
   {
       ATLTRACE(_T("put_URL\n"));

       // free existing string in m_bstrURL & make a copy 
       // of strURL pointed to by m_bstrURL
       m_bstrURL = strURL;
       return S_OK;
   }

   // get_URL is the get method for the URL property. 
   STDMETHOD(get_URL)(BSTR* pstrURL)
   {
       ATLTRACE(_T("get_URL\n"));

       // make a copy of m_bstrURL pointed to by pstrURL
       *pstrURL = m_bstrURL.Copy(); // See CComBSTR::CopyTo
       return S_OK;
   }