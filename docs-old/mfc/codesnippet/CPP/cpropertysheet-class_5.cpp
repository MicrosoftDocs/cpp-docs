// The code fragment below shows how to destroy the C++ objects for
// propertysheet and propertypage in the destructor of CView-derived
// class.
// NOTE:  DestroyWindow() is called in CPropertySheet::OnClose() so
// you do not need to call it here.  Property pages are children
// of the CPropertySheet, they will be destroyed by their parents.
CPSheetView::~CPSheetView()
{
   delete m_pshapePage;
   delete m_pstylePage;
   delete m_pcolorPage;
   delete m_pdlgPropertySheet;
}