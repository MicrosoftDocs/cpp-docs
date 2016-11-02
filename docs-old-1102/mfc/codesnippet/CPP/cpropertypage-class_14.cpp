// Validate the value entered in the Number edit control. If its 
// value is not a natural number, request CPropertySheet (i.e. parent
// window of the page) to send a PSM_QUERYSIBLINGS message to each
// LOADED page (a page won't be loaded in memory until it is shown).
// If one of the pages returns a nonzero value in response to the 
// PSM_QUERYSIBLINGS message, then inform the user and change the OK
// to Close and disable the Cancel button. CStylePage is a 
// CPropertyPage-derived class.
BOOL CStylePage::OnApply()
{
   int num = GetDlgItemInt(IDC_NUMOBJECTS);
   if (num <= 0)
   {
      if (QuerySiblings(num, 0L))
      {
         AfxMessageBox(_T("Invalid data is entered.  Choose Close ")
            _T("button to close the dialog."));
         CancelToClose();
      }
   }

   return CPropertyPage::OnApply();
}