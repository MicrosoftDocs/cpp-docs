CMFCDesktopAlertWndInfo params;
// int m_nIcon
if (m_nIcon > 0)
{
   // CMFCToolBarImages m_Icons
   params.m_hIcon = m_Icons.ExtractIcon(m_nIcon - 1);
}

// CString m_strText
params.m_strText = m_strText;
// CString m_strLink
params.m_strURL = m_strLink;
params.m_nURLCmdID = 101;