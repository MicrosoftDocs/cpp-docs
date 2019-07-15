// The following code fragment is taken from CMyDlg::OnInitDialog
// CMyDlg is derived from CDialog

// Add "About..." menu item to system menu.

// IDM_ABOUTBOX must be in the system command range.
ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
ASSERT(IDM_ABOUTBOX < 0xF000);

CMenu *pSysMenu = GetSystemMenu(FALSE);
if (pSysMenu != NULL)
{
   CString strAboutMenu;
   strAboutMenu.LoadString(IDS_ABOUT);
   if (!strAboutMenu.IsEmpty())
   {
      pSysMenu->AppendMenu(MF_SEPARATOR);
      pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
   }
}

// Set the icon for this dialog. The framework does this automatically
// when the application's main window is not a dialog
SetIcon(m_hIcon, TRUE);  // Set big icon
SetIcon(m_hIcon, FALSE); // Set small icon