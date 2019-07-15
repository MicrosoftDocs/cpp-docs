// CColorPage is the second wizard property page. Enable both the 
// Back button and the Next button.
BOOL CColorPage::OnSetActive()
{
   CPropertySheet* psheet = (CPropertySheet*)GetParent();
   psheet->SetWizardButtons(PSWIZB_BACK | PSWIZB_NEXT);

   return CPropertyPage::OnSetActive();
}