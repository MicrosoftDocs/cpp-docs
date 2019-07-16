// The example code.

// The file from which to load the contents of the rich edit control.
CFile cFile(TEXT("My_RichEdit_InFile.rtf"), CFile::modeRead);
EDITSTREAM es;

es.dwCookie = (DWORD)&cFile;
es.pfnCallback = MyStreamInCallback;
m_myRichEditCtrl.StreamIn(SF_RTF, es);