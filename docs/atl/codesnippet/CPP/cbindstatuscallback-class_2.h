   void OnData(CBindStatusCallback<CATLAsync>* , BYTE* pBytes, DWORD /*cBytes*/)
   {
      ATLTRACE(_T("OnData called\n"));

      m_bstrText.Append((LPCSTR)pBytes);
      if (::IsWindow(m_EditCtrl.m_hWnd))
      {
         USES_CONVERSION;
         _ATLTRY {
            ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0, 
               (LPARAM)(LPCTSTR)COLE2CT((BSTR)m_bstrText));
         }
         _ATLCATCH( e ) {
            e; // unused
            // COLE2CT threw an exception!
            ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0, 
               (LPARAM)_T("Could not allocate enough memory!!!"));
         }
      }
   }