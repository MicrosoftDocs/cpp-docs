// Get a dc for a CWnd object pointer.
CWindowDC dc(pWnd);

// Send my private message.
::SendMessage(pWnd->m_hWnd, WM_MYMESSAGE, 0, 0);
