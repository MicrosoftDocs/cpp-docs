// Inform users regarding the selections they have made by 
// navigating the pages in propertysheet.
BOOL CShapePage::OnWizardFinish()
{
   CString report = _T("You have selected the following options:\n");

   // Get the number of property pages from CPropertySheet.
   CPropertySheet* sheet = (CPropertySheet*)GetParent();
   int count = sheet->GetPageCount();

   // Get the formatted string from each page. This formatted string 
   // will be shown in a message box. Each page knows about the 
   // string to be displayed. For simplicity, we derive a class 
   // from CPropertyPage called CMyPropertyPage. CMyPropertyPage 
   // has a pure virtual member function called GetPageSelections().
   // All pages in the property sheet must be derived from 
   // CMyPropertyPage so we loop through each page to get the 
   // formatted string by calling the GetPageSelections() function.
   for (int i = 0; i < count; i++)
   {
      CMyPropertyPage* page = (CMyPropertyPage*)sheet->GetPage(i);

      CString str;
      page->GetPageSelections(str);
      report += _T("\n") + str;
   }

   AfxMessageBox(report);

   return CPropertyPage::OnWizardFinish();
}