// An example of implementing the GetPageSelections() for CShapePage.
// CShapePage is a CMyPropertyPage-derived class, which in turn is a 
// CPropertyPage-derived class.
void CShapePage::GetPageSelections(CString& str)
{
   CString shapename;
   switch (m_Selection)
   {
   case IDC_RECTANGLE:
      shapename = _T("Rectangle");
      break;

   case IDC_ROUND_RECTANGLE:
      shapename = _T("Round Rectangle");
      break;

   case IDC_ELLIPSE:
      shapename = _T("Ellipse");
      break;
   }

   str.Format(_T("Shape to be created is %s"), shapename);
}