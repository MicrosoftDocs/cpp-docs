void CPenWidthsDlg::DoDataExchange(CDataExchange *pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_THINPENWIDTH, m_nThinWidth);
   DDV_MinMaxInt(pDX, m_nThinWidth, 1, 20);
   DDX_Text(pDX, IDC_THICKPENWIDTH, m_nThickWidth);
   DDV_MinMaxInt(pDX, m_nThickWidth, 1, 20);
}