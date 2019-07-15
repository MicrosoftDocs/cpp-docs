// The following code fragment is from CMyDlg::OnInitDialog
// CMyDlg is derived from CDialog.

// Associate a help context id with the control.
// IDC_TESTHELP_CONTROL is the id of the control
// and HIDC_TESTHELP_CONTROL is its help context
// id associated with the control.
CWnd *pWnd = GetDlgItem(IDC_TESTHELP_CONTROL);
pWnd->SetWindowContextHelpId(HIDC_TESTHELP_CONTROL);