// CStylePage is the first wizard property page.  Disable the Back 
// button but enable the Next button.
BOOL CStylePage::OnSetActive() 
{
   CPropertySheet* psheet = (CPropertySheet*) GetParent();   
   psheet->SetWizardButtons(PSWIZB_NEXT);
   
   return CPropertyPage::OnSetActive();
}