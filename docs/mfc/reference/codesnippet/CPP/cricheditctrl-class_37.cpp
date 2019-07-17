// The example code.

// The file to store the contents of the rich edit control.
CFile cFile(TEXT("My_RichEdit_OutFile.rtf"),
            CFile::modeCreate | CFile::modeWrite);
EDITSTREAM es;

es.dwCookie = (DWORD)&cFile;
es.pfnCallback = MyStreamOutCallback;
m_myRichEditCtrl.StreamOut(SF_RTF, es);