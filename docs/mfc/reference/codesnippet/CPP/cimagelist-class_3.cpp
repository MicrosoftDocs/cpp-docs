void CImageListDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
   // Initialize the drag image (usually called from WM_LBUTTONDOWN).
   m_myImageList.BeginDrag(0, CPoint(0, 0));
   m_myImageList.DragEnter(this, point);

   CDialog::OnLButtonDown(nFlags, point);
}