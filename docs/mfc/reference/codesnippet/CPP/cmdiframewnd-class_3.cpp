// CMainFrame is a CMDIFrameWnd-derived class,
// OnNewDraw is a menu command handler,
// CDrawFrame is a CMDIChildWnd-derived class.
void CMainFrame::OnNewDraw()
{
   CreateNewChild(RUNTIME_CLASS(CDrawFrame), IDR_DRAW, m_hDrawMenu,
                  m_hDrawAccel);
}