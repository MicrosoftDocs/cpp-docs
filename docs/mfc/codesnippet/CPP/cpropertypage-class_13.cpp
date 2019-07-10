// The Next button is selected from the propertysheet. Show the 
// second page of the propertysheet ONLY if a non-zero value is 
// entered to the Number edit control of the CStylePage. Otherwise
// display a message to the user and stay on the current page.

LRESULT CStylePage::OnWizardNext()
{
   // Get the number from the edit control
   int num = GetDlgItemInt(IDC_NUMOBJECTS);

   if (num == 0)
   {
      // Display a message to the user
      AfxMessageBox(_T("Supply a non-zero number on the edit control"), MB_OK);

      // Stay on the current page
      return -1;
   }

   // CPropertyPage::OnWizardNext returns zero and causes
   // the property sheet to display the next page
   return CPropertyPage::OnWizardNext();
}