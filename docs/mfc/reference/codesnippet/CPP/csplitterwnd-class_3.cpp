HBRUSH CMySplitterWnd::OnCtlColor(CDC *pDC, CWnd *pWnd, UINT nCtlColor)
{
   HBRUSH hbr = CSplitterWnd::OnCtlColor(pDC, pWnd, nCtlColor);

   if (nCtlColor == CTLCOLOR_LISTBOX &&
       pWnd->GetDlgCtrlID() == IdFromRowCol(1, 0))
   {
      // Pane 1,0 is a list box. Set the color of the text to be blue.
      pDC->SetBkColor(m_BkColor);
      pDC->SetTextColor(RGB(0, 0, 255));
      return (HBRUSH)m_hbrListBoxBkgnd.GetSafeHandle();
   }
   // TODO: Return a different brush if the default is not desired
   return hbr;
}