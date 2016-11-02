   LPUNKNOWN m_pSourceUnk;
   LPUNKNOWN m_pSinkUnk;
   DWORD m_dwCustCookie;

   // create source object
   HRESULT hr = CoCreateInstance (CLSID_MyComponent, NULL, CLSCTX_ALL, 
      IID_IUnknown, (LPVOID*)&m_pSourceUnk);
   ATLASSERT(SUCCEEDED(hr));

   // Create sink object.  CMySink is a CComObjectRootEx-derived class 
   // that implements the event interface methods.
   CComObject<CMySink>* pSinkClass;
   CComObject<CMySink>::CreateInstance(&pSinkClass);
   hr = pSinkClass->QueryInterface (IID_IUnknown, (LPVOID*)&m_pSinkUnk);
   ATLASSERT(SUCCEEDED(hr));

   hr = AtlAdvise (m_pSourceUnk, m_pSinkUnk, __uuidof(_IMyComponentEvents), &m_dwCustCookie);
   ATLASSERT(SUCCEEDED(hr));    