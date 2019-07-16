void CTabDlg::OnSize(UINT nType, int cx, int cy)
{
   CDialog::OnSize(nType, cx, cy);

   if (m_TabCtrl.m_hWnd == NULL)
      return; // Return if window is not created yet.

   RECT rect;

   // Get size of dialog window.
   GetClientRect(&rect);

   // Adjust the rectangle to fit the tab control into the
   // dialog's client rectangle.
   m_TabCtrl.AdjustRect(FALSE, &rect);

   // Move the tab control to the new position and size.
   m_TabCtrl.MoveWindow(&rect, TRUE);
}