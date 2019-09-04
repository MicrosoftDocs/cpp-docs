void CSimpleDlg::OnCancel()
{
   // TODO: Add extra cleanup here

   // Ensure that you reset all the values back to the
   // ones before modification. This handler is called
   // when the user doesn't want to save the changes.

   if (AfxMessageBox(_T("Are you sure you want to abort the changes?"),
                     MB_YESNO) == IDNO)
   {
      // Give the user a chance if he has unknowingly hit the
      // Cancel button. If he says No, return. Don't reset. If
      // Yes, go ahead and reset the values and close the dialog.
      return;
   }

   m_nMyValue = m_nPrevValue;
   m_pMyString = NULL;

   CDialog::OnCancel();
}