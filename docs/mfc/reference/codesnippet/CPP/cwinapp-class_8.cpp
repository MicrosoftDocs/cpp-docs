CWinApp *pApp = AfxGetApp();

const TCHAR *pszKey = _T("My Section");
const TCHAR *pszName = _T("Julian");
int iAge = 26;

// Write the information to the registry.

pApp->WriteProfileString(pszKey, _T("Name"), pszName);
pApp->WriteProfileInt(pszKey, _T("Age"), iAge);

// Read the information from the registry.

CString strName = pApp->GetProfileString(pszKey, _T("Name"));
int iAge2 = pApp->GetProfileInt(pszKey, _T("Age"), 0);

ASSERT(strName == pszName);
ASSERT(iAge2 == iAge);