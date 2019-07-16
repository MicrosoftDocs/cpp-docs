// Initialize the dropdown menu of the splitbutton control.
m_splitButton.SetDropDownMenu(IDR_MENU1, 0);

// Create the pager control.
BOOL nRet;
CRect rect;
GetClientRect(&rect);
nRet = m_pager.Create(
    (WS_VISIBLE | WS_CHILD | PGS_HORZ),
    CRect(rect.Width() / 4, 5, (rect.Width() * 3) / 4, 55),
    this,
    IDC_PAGER1);

m_pager.GetClientRect(&rect);
nRet = m_button.Create(
    _T("This is a very, very long button. 012345678901234567890"),
    (WS_VISIBLE | WS_CHILD), // Do not use CCS_NORESIZE.
    CRect(0, 0, rect.Width(), 30),
    &m_pager, IDC_BUTTON1);

m_pager.SetChild(m_button.m_hWnd);
m_pager.SetButtonSize(20);
m_pager.SetBorder(1);