CWnd *pWnd = AfxGetMainWnd();
// Set pWnd to some CWnd object whose window has already
// been created.

// The following call to CWnd::MessageBox uses the application
// title as the message box caption.
pWnd->MessageBox(_T("Some message"), AfxGetApp()->m_pszAppName);

// A more direct way to get the application title is to
// call AfxGetAppName:
pWnd->MessageBox(_T("Some message"), AfxGetAppName());

// An easier way to display a message box using the application
// title as the message box caption is to call AfxMessageBox:
AfxMessageBox(_T("Some message"));