// This code fragment shows how to create a modeless property sheet 
// dialog in a command message handler (OnModelessPropertySheet()) 
// of a CView-derived class.
void CPSheetView::OnModelessPropertySheet()
{
   // Declare a CPropertySheet object.  m_pdlgPropertySheet is a data
   // member of type CPropertySheet in CView-derived class.
   m_pdlgPropertySheet = new CPropertySheet(_T("Simple PropertySheet"));
   ASSERT(m_pdlgPropertySheet);

   // Add three pages to the CPropertySheet object.  Both m_pstylePage, 
   // m_pcolorPage, and m_pshapePage are data members of type 
   // CPropertyPage-derived classes in CView-derived class.
   m_pstylePage = new CStylePage;
   m_pcolorPage = new CColorPage;
   m_pshapePage = new CShapePage;
   m_pdlgPropertySheet->AddPage(m_pstylePage);
   m_pdlgPropertySheet->AddPage(m_pcolorPage);
   m_pdlgPropertySheet->AddPage(m_pshapePage);

   // Create a modeless CPropertySheet dialog.
   m_pdlgPropertySheet->Create();
}