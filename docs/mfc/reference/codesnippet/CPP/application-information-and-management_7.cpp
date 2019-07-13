// The following shows how to create a MDI based application
// using a generic CView derived class that is implemented in
// a dynamically loaded MFC Extension DLL.

typedef CRuntimeClass *(*GETDLLVIEW)();

BOOL CUserApp::InitInstance()
{
   // Standard Application Wizard generated initialization excluded.
