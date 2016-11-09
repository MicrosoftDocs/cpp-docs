   CComBSTR m_bstrURL; // BSTR representing a URL

   // get_URL is the get method for the URL property. 
   STDMETHOD(get_URL)(BSTR* pstrURL)
   {
      // Make a copy of m_bstrURL and return it via pstrURL
      return m_bstrURL.CopyTo(pstrURL);
   }