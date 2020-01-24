// Register the application's document templates.  Document templates
//  serve as the connection between documents, frame windows and views

//Load MFC Extension DLL based view class.
m_hViewDll = AfxLoadLibrary(szMyViewDllPath);
if (!m_hViewDll)
{
   CString str;
   str.Format(_T("Error: Cannot find component %s"), szMyViewDllPath);
   AfxMessageBox(str);
   return FALSE;
}

GETDLLVIEW GetMyView = (GETDLLVIEW)GetProcAddress(m_hViewDll, "GetMyView");
ASSERT(GetMyView != NULL);

CMultiDocTemplate *pDocTemplate;
pDocTemplate = new CMultiDocTemplate(IDR_NVC_MFC_DLLUserTYPE,
                                     RUNTIME_CLASS(CUserDoc),
                                     RUNTIME_CLASS(CChildFrame), // custom MDI child frame
                                     GetMyView());
if (!pDocTemplate)
   return FALSE;
AddDocTemplate(pDocTemplate);

// Standard Application Wizard generated initialization excluded.
