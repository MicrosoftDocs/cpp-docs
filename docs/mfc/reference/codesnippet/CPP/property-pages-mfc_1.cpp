void CMyAxPropPage::DoDataExchange(CDataExchange *pDX)
{
   DDP_Text(pDX, IDC_POSITIONEDIT, m_NeedlePosition, _T("NeedlePosition"));
   DDX_Text(pDX, IDC_POSITIONEDIT, m_NeedlePosition);
   DDV_MinMaxInt(pDX, m_NeedlePosition, 0, 3);
   DDP_PostProcessing(pDX);
}