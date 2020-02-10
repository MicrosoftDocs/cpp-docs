// CMainFrame::OnWindowCommand() is a menu command handler for
// CMainFrame class, which is a CMDIFrameWnd-derived
// class. It handles menu commands for the Windows pop-up menu.
// Its entries in the message map are of the following form:
//    ON_COMMAND_EX(ID_WINDOW_ARRANGE, &CMainFrame::OnWindowCommand)
BOOL CMainFrame::OnWindowCommand(UINT nID)
{
   switch (nID)
   {
   case ID_WINDOW_ARRANGE: // For Window\Arrange Icons menu item, arrange
      MDIIconArrange();    // all minimized document child windows.
      break;

   case ID_WINDOW_CASCADE: // For Window\Cascade menu item, arrange
      MDICascade();        // all the MDI child windows in a cascade format.
      break;

   case ID_WINDOW_TILE_HORZ:       // For Window\Tile Horizontal menu item,
      MDITile(MDITILE_HORIZONTAL); // tile MDI child windows so that
      break;                       // one window appears above another.

   case ID_WINDOW_TILE_VERT:     // For Window\Tile Vertical menu item,
      MDITile(MDITILE_VERTICAL); // tile MDI child windows so that
      break;                     // one window appears beside another.
   }

   return TRUE;
}