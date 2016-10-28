   STDMETHOD(put_URL)(BSTR newVal)
   {
      HRESULT hResult = E_UNEXPECTED;

      ATLTRACE(_T("IATLAsync::put_URL\n"));
      m_bstrURL = newVal;

      if (::IsWindow(m_EditCtrl.m_hWnd))
      {
         ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0,  (LPARAM)_T(""));
         hResult = CBindStatusCallback<CATLAsync>::Download(this, &CATLAsync::OnData, 
            m_bstrURL, m_spClientSite, FALSE);
      }

      return hResult;
   }