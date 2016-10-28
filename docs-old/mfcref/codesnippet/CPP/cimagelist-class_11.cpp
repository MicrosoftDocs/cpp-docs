void CImageListDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
   // Terminate the drag image (usually called from WM_LBUTTONUP).
   m_myImageList.DragLeave(this);
   m_myImageList.EndDrag();

   CDialog::OnLButtonUp(nFlags, point);
}