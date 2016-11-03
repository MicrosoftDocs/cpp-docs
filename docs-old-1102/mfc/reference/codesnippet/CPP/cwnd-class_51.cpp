void CSplitChildFrm::OnSizing(UINT fwSide, LPRECT pRect)
{
   CMDIChildWnd::OnSizing(fwSide, pRect);

   // Resize the splitter window in the frame. m_wndSplitter is of 
   // type CSplitterWnd
   int nWidth = (pRect->right) - (pRect->left);
   m_wndSplitter.SetColumnInfo(0, nWidth / 2, 10);
   m_wndSplitter.SetColumnInfo(1, nWidth / 2, 10);
   m_wndSplitter.RecalcLayout();
}