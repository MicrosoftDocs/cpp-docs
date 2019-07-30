// An example of implementing the GetPageSelections() for CColorPage.
// CColorPage is a CMyPropertyPage-derived class, which in turn is a 
// CPropertyPage-derived class.
void CColorPage::GetPageSelections(CString& str)
{
   str = _T("Color selected is ");
   switch (m_Color)
   {
   case RGB(0, 0, 0):
      str += _T("Black");
      break;

   case RGB(255, 0, 0):
      str += _T("Red");
      break;

   case RGB(0, 255, 0):
      str += _T("Green");
      break;

   case RGB(0, 0, 255):
      str += _T("Blue");
      break;

   default:
      str += _T("Custom");
      break;
   }
}