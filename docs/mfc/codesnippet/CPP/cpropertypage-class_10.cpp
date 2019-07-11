// An example of implementing the GetPageSelections() for CStylePage.
// CStylePage is a CMyPropertyPage-derived class, which in turn is a 
// CPropertyPage-derived class.
void CStylePage::GetPageSelections(CString& str)
{
   str.Format(_T("Number of objects to be created = %d"), m_NumObjects);
}