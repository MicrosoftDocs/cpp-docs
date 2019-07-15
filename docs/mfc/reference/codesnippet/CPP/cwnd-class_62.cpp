// set the text in IDC_EDITNAME
CWnd *pWnd = GetDlgItem(IDC_EDITNAME);
pWnd->SetWindowText(_T("Gerald Samper"));

// Get the text back. CString is convenient, because MFC
// will automatically allocate enough memory to hold the
// text--no matter how large it is.

CString str;
pWnd->GetWindowText(str);
ASSERT(str == _T("Gerald Samper"));

// The LPTSTR override works, too, but it might be too short.
// If we supply a buffer that's too small, we'll only get those
// characters that fit.

TCHAR sz[10];
int nRet = pWnd->GetWindowText(sz, 10);

// Nine characters, plus terminating null
ASSERT(_tcscmp(sz, _T("Gerald Sa")) == 0);
ASSERT(nRet == 9);

// You can query the length of the text without the length of
// the string using CWnd::GetWindowTextLength()
nRet = pWnd->GetWindowTextLength();
ASSERT(nRet == 13);