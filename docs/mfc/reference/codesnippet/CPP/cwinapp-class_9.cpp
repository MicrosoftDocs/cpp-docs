CWinApp *pApp = AfxGetApp();

CString strSection = _T("My Section");
CString strStringItem = _T("My String Item");
CString strIntItem = _T("My Int Item");

pApp->WriteProfileString(strSection, strStringItem, _T("test"));

CString strValue;
strValue = pApp->GetProfileString(strSection, strStringItem);
ASSERT(strValue == _T("test"));

pApp->WriteProfileInt(strSection, strIntItem, 1234);

int nValue;
nValue = pApp->GetProfileInt(strSection, strIntItem, 0);
ASSERT(nValue == 1234);