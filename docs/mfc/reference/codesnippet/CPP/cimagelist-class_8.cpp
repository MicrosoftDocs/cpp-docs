void CImageListDlg::OnMouseMove(UINT nFlags, CPoint point)
{
   m_myImageList.DragMove(point);

   CDialog::OnMouseMove(nFlags, point);
}