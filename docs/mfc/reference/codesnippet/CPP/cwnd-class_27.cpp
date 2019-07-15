// If pDialog points to a CDialog object with a list box
// with the identifier IDC_DIRLIST, this call will populate
// the box with only the non-hidden subdirectories in the root
// directory of the C:\ drive.
TCHAR path[MAX_PATH];
_tcscpy_s(path, MAX_PATH, _T("C:\\"));

pDialog->DlgDirList(path, IDC_DIRLIST, 0, DDL_EXCLUSIVE | DDL_DIRECTORY);