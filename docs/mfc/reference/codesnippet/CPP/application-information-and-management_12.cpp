// This code is taken from CMyApp::InitInstance
HINSTANCE hRes = NULL;
hRes = LoadLibrary(_T("Resource.dll"));
if (hRes)
   AfxSetResourceHandle(hRes);