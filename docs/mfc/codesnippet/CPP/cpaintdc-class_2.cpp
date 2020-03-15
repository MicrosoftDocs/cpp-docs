// Get a dc for a CWnd object pointer.
CPaintDC dc(pWnd);

// Send my private message.
::SendMessage(pWnd->m_hWnd, WM_MYMESSAGE, (LPARAM)& dc.m_ps, 0);
