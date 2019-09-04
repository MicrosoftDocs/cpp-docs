CWinApp *pApp = AfxGetApp();

CString strSection = _T("My Section");
CString strItem = _T("My Binary Item");
double myData = 123.456e12;

pApp->WriteProfileBinary(strSection, strItem, (LPBYTE)&myData, sizeof(myData));
double *pData;
UINT n;
pApp->GetProfileBinary(strSection, strItem, (LPBYTE*)&pData, &n);
ASSERT(n == sizeof(myData));
ASSERT(myData = *pData);
delete[] pData; // free the buffer