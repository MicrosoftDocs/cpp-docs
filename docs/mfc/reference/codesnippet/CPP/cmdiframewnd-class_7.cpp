// CMdiView::OnReplaceMenu() is a menu command handler for CMdiView
// class, which in turn is a CView-derived class. It loads a new
// menu resource and replaces the main application window's menu
// bar with this new menu.
void CMdiView::OnReplaceMenu()
{
   // Load a new menu resource named IDR_SHORT_MENU. m_hDefaultMenu is
   // a member variable of CMdiDoc class (a CDocument-derived class).
   // Its type is HMENU.
   CMdiDoc *pdoc = (CMdiDoc*)GetDocument();
   pdoc->m_hDefaultMenu =
       ::LoadMenu(AfxGetResourceHandle(), MAKEINTRESOURCE(IDR_SHORT_MENU));
   if (pdoc->m_hDefaultMenu == NULL)
      return;

   // Get the parent window of this view window. The parent window is
   // a CMDIChildWnd-derived class. We can then obtain the MDI parent
   // frame window using the CMDIChildWnd*. Then, replace the current
   // menu bar with the new loaded menu resource.
   CMDIFrameWnd *frame = ((CMDIChildWnd*)GetParent())->GetMDIFrame();
   frame->MDISetMenu(CMenu::FromHandle(pdoc->m_hDefaultMenu), NULL);
   frame->DrawMenuBar();
}