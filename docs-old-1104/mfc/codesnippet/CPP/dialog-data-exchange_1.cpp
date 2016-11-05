void CTestDialog::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Check(pDX, IDC_MY_CHECKBOX, m_bVal);
   DDX_Text(pDX, IDC_MY_TEXTBOX, m_strName);
   DDV_MaxChars(pDX, m_strName, 20);
}