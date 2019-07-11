// CShapePage is the last wizard property page. Enable the Back 
// button and change the Next button to Finish. The "Finish" button 
// will have "Done" as its caption.
BOOL CShapePage::OnSetActive()
{
   CPropertySheet* psheet = (CPropertySheet*)GetParent();
   psheet->SetWizardButtons(PSWIZB_BACK | PSWIZB_FINISH);
   psheet->SetFinishText(_T("Done"));

   return CPropertyPage::OnSetActive();
}