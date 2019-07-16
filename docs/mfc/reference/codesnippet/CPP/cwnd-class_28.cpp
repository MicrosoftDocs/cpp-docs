// If pDialog points to a CDialog object with a combo box
// with the identifier IDC_DIRCOMBO, this call will populate
// the box with only the non-hidden subdirectories in the root
// directory of the C:\ drive.

TCHAR szPath[MAX_PATH];
_tcsncpy_s(szPath, MAX_PATH, _T("C:\\"), MAX_PATH);
pDialog->DlgDirListComboBox(szPath, IDC_DIRCOMBO, 0, DDL_EXCLUSIVE | DDL_DIRECTORY);

// Note that the first argument is a string and not a string
// literal. This is necessary because DlgDirListComboBox
// modifies the supplied string. Passing a string literal
// will result in an access violation.