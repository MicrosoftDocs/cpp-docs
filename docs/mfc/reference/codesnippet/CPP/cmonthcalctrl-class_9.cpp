BOOL rc = m_monthCalCtrl.SetCalID(CAL_JAPAN);
CString str = _T("Calendar change ");
;
if (rc == TRUE)
   str += _T("succeeded.");
else
{
   str += _T("failed.\n");
   str += _T("Perhaps this locale is not installed.");
}
AfxMessageBox(str, MB_ICONINFORMATION);