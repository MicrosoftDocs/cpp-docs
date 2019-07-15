BOOL CAboutDlg::PreTranslateMessage(MSG *pMsg)
{
   if (IsDialogMessage(pMsg))
      return TRUE;
   else
      return CDialog::PreTranslateMessage(pMsg);
}