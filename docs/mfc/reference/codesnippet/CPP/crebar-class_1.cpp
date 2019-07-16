// Define a CRebar in your class definition,
// such as: CReBar m_wndReBar;
m_wndReBar.Create(this);
m_wndDlgBar.Create(this, IDD_DIALOGBAR, CBRS_ALIGN_TOP,
                   IDD_DIALOGBAR);
m_wndReBar.AddBar(&m_wndDlgBar);