void CMyView::DoModalPropertySheet()
{
   CPropertySheet propsheet;
   CMyFirstPage pageFirst; // derived from CPropertyPage
   CMySecondPage pageSecond; // derived from CPropertyPage

   // Move member data from the view (or from the currently
   // selected object in the view, for example).
   pageFirst.m_nMember1 = m_nMember1;
   pageFirst.m_nMember2 = m_nMember2;

   pageSecond.m_strMember3 = m_strMember3;
   pageSecond.m_strMember4 = m_strMember4;

   propsheet.AddPage(&pageFirst);
   propsheet.AddPage(&pageSecond);

   if (propsheet.DoModal() == IDOK)
   {
      m_nMember1 = pageFirst.m_nMember1;
      m_nMember2 = pageFirst.m_nMember2;
      m_strMember3 = pageSecond.m_strMember3;
      m_strMember4 = pageSecond.m_strMember4;
      GetDocument()->SetModifiedFlag();
      GetDocument()->UpdateAllViews(NULL);
   }
}