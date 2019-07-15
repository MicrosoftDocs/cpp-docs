// Get a dc for a CWnd pointer.
CPaintDC dc(pWnd);

// Get a dc for a HWND.
CPaintDC dc2(CWnd::FromHandle(hWnd));