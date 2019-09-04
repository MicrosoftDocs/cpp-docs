// The following code fragment is taken from CMyDlg::OnInitDialog
// CMyDlg is a CDialog-derived class.

// IDC_MSACALCTRL1 is the ID of the Calendar control OCX embedded
// on this dialog
CWnd *pWndCal = GetDlgItem(IDC_MSACALCTRL1);

// Use the IUnknown of the control
LPUNKNOWN pUnk = pWndCal->GetControlUnknown();

// From there get the IDispatch interface of control
LPDISPATCH pDisp = NULL;
pUnk->QueryInterface(IID_IDispatch, (LPVOID*)&pDisp);

// use IDispatch method to invoke the control's functionality