int CMyPropertySheet::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   // Set for Scrolling Tabs style
   EnableStackedTabs(FALSE);
   // Call the base class
   if (CPropertySheet::OnCreate(lpCreateStruct) == -1)
      return -1;

   return 0;
}