BOOL CMyDlg::OnInitDialog()
{
   CWnd *pDSC = GetDlgItem(IDC_DATASOURCE);
   CWnd *pMyBound = GetDlgItem(IDC_MYBOUNDCTRL1);
   pMyBound->BindDefaultProperty(0x1, VT_BSTR, _T("ContactFirstName"), pDSC);
   return TRUE;
}