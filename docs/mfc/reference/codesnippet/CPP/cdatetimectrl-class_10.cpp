// The control will create itself with a format that matches the
// locale setting in Control Panel. But we can force a particular
// format with a call to SetFormat(). This call forces the format
// dd-MMM-yy, which would show 03-APR-98 for April 3rd, 1998.
m_DateTimeCtrl.SetFormat(_T("dd-MMM-yy"));