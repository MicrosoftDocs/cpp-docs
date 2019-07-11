CPrintDialog dlg(FALSE);

if (!dlg.GetDefaults())
{
   AfxMessageBox(_T("You have no default printer!"));
}
else
{
   CString strDescription;

   strDescription.Format(_T("Your default printer is %s on %s using %s."),
      (LPCTSTR)dlg.GetDeviceName(),
      (LPCTSTR)dlg.GetPortName(),
      (LPCTSTR)dlg.GetDriverName());

   AfxMessageBox(strDescription);
}