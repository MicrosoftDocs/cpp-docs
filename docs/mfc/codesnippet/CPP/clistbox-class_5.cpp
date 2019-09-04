// pParentWnd is a pointer to the parent window.
m_myListBox.Create(WS_CHILD | WS_VISIBLE | LBS_STANDARD | WS_HSCROLL,
                   CRect(10, 10, 200, 200), pParentWnd, IDC_MYLISTBOX);