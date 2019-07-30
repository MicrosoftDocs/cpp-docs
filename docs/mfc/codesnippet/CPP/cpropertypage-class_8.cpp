// The Back button is selected from the propertysheet.  Get the selected 
// radio button of the page by looping through all buttons on the 
// pages.  m_radioColor is a member variable of 
// CColorPage (a CPropertyPage-derived class).  Its initial value 
// is initialized in OnInitDialog().
LRESULT CColorPage::OnWizardBack()
{
   for (int id = IDC_RADIOBLACK; id <= IDC_RADIOGREEN; id++)
   {
      CButton* button = (CButton*)GetDlgItem(id);
      if (button->GetCheck() == 1)
      {
         m_radioColor = id - IDC_RADIOBLACK;
         break;
      }
   }

   return CPropertyPage::OnWizardBack();
}