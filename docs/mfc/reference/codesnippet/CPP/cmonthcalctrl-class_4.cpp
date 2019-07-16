CString str;
CString msg = _T("The current calendar displays %s view.");
DWORD view = m_monthCalCtrl.GetCurrentView();
switch (view)
{
case MCMV_MONTH:
   str.Format(msg, _T("month"));
   break;
case MCMV_YEAR:
   str.Format(msg, _T("year"));
   break;
case MCMV_DECADE:
   str.Format(msg, _T("decade"));
   break;
case MCMV_CENTURY:
   str.Format(msg, _T("century"));
   break;
default:
   str.Format(msg, _T("an unknown"));
   break;
}
AfxMessageBox(str, MB_ICONINFORMATION);