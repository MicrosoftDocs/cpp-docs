void CCDateTimeCtrl_s1Dlg::OnXGetdatetimepickerinfo()
{
   // Get information about the date-time picker control.
   DATETIMEPICKERINFO dtpi = {0};
   dtpi.cbSize = sizeof(DATETIMEPICKERINFO);
   BOOL rc = m_dateTimeCtrl.GetDateTimePickerInfo(&dtpi);
   if (rc == TRUE)
      AfxMessageBox(_T("Information retrieved"),
                    MB_ICONEXCLAMATION);
   else
      AfxMessageBox(_T("Information was not retrieved"));
}