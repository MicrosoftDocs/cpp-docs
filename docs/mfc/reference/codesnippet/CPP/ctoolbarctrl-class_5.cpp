//Set color scheme for the current toolbar control.
//Make the left and top edges of the tool button red,
//and the right and bottom edges blue. The colors
//reverse when a button is pressed.
//This method has no effect if the Vista visual theme
//is set.
{
   COLORSCHEME cs;
   cs.dwSize = sizeof(COLORSCHEME);
   cs.clrBtnHighlight = RGB(255, 0, 0);
   cs.clrBtnShadow = RGB(0, 0, 255);
   CToolBarCtrl &m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
   m_toolBarCtrl.SetColorScheme(&cs);
}