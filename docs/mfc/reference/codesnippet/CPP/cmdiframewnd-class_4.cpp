// CMainFrame::OnActivateFirstMDIChild() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It looks for the caption of the first created MDI child window from
// the Window popup menu, and then activate the child window.
void CMainFrame::OnActivateFirstMDIChild()
{
   // Get handle to the Window pop-up menu.
   CMenu *menubar = GetMenu();
   CMenu *wmenu = CMenu::FromHandle(GetWindowMenuPopup(menubar->GetSafeHmenu()));
   if (wmenu == NULL)
      return;

   // Get the caption of the first created MDI child window.
   CString caption;
   if (!wmenu->GetMenuString(AFX_IDM_FIRST_MDICHILD, caption, MF_BYCOMMAND))
      return;

   // Get the actual name of the first created MDI child window by
   // getting rid of the number and space, e.g. "&1 MDI 1".
   int pos = caption.FindOneOf(_T(" "));
   if (pos == -1)
      return;

   caption = caption.Right(caption.GetLength() - (pos + 1));

   // Get the CWnd* of the first created MDI child window by comparing
   // the caption of each MDI child window in the MDI application.
   // Activate the first created MDI child window if found.
   CMDIChildWnd *child = MDIGetActive();
   do
   {
      CString str;
      child->GetWindowText(str);
      if (str == caption)
      {
         child->MDIActivate(); // or MDIActivate(child);
         break;
      }

      child = (CMDIChildWnd*)child->GetWindow(GW_HWNDNEXT);
   } while (child);
}