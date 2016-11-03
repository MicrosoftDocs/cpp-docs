void CMyView::OnWizard()
{
   CPropertySheet sheet;
   // CMyFirstPage and CMySecondPage are derived from CPropertyPage
   CMyFirstPage page1;
   CMySecondPage page2;

   sheet.AddPage(&page1);
   sheet.AddPage(&page2);
   sheet.SetWizardMode();
   sheet.DoModal();
}