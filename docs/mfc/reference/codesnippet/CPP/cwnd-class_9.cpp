BOOL CMyDlg::OnInitDialog()
{
   CWnd *pDSC = GetDlgItem(IDC_DATASOURCE);
   CWnd *pMyBound = GetDlgItem(IDC_MYBOUNDCTRL2);
   pMyBound->BindProperty(0x1, pDSC);
   return TRUE;
}