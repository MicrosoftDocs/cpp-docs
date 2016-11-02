void CMyDaoRecordView::DoDataExchange(CDataExchange* pDX)
{
   CDaoRecordView::DoDataExchange(pDX);
   DDX_FieldCBString(pDX, IDC_LASTNAME, m_pSet->m_LastName, m_pSet);
   DDX_FieldText(pDX, IDC_ID, m_pSet->m_EmployeeID, m_pSet);
   DDX_FieldText(pDX, IDC_AGE, m_pSet->m_Age, m_pSet);
}