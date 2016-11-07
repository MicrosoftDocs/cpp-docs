   // Define OnCreate handler
   // When the containing window receives a WM_CREATE
   // message, create the contained window by calling
   // CContainedWindow::Create
   LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      RECT rc;
      GetWindowRect(&rc);
      rc.right -= rc.left;
      rc.bottom -= rc.top;
      rc.top = rc.left = 0;
      m_ctlEdit.Create(m_hWnd, rc, _T("hello"), WS_CHILD | WS_VISIBLE | 
         ES_MULTILINE | ES_AUTOVSCROLL);
      return 0;
   }