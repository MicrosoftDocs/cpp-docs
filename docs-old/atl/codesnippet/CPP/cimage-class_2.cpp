void CMyDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);

   CBitmap* pBitmap = CBitmap::FromHandle(m_myImage);
   m_pmenuPop->AppendMenu(0, ID_BMPCOMMAND, pBitmap);
   ClientToScreen(&point);
   m_pmenuPop->TrackPopupMenu(TPM_RIGHTBUTTON | TPM_LEFTALIGN, point.x, 
      point.y, this);
}