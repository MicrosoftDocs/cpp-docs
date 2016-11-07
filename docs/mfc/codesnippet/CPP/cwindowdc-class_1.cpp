   // Get a dc for a CWnd object pointer.
   CWindowDC dc(pWnd);

   // Send my private massage.
   ::SendMessage(pWnd->m_hWnd, WM_MYMESSAGE, 0, 0);