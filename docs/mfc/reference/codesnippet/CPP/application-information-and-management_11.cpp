CString strMyClass;

// load stock cursor, brush, and icon for
// my own window class

try
{
   strMyClass = AfxRegisterWndClass(
       CS_VREDRAW | CS_HREDRAW,
       ::LoadCursor(NULL, IDC_ARROW),
       (HBRUSH)::GetStockObject(WHITE_BRUSH),
       ::LoadIcon(NULL, IDI_APPLICATION));
}
catch (CResourceException *pEx)
{
   AfxMessageBox(_T("Couldn't register class! (Already registered?)"));
   pEx->Delete();
}