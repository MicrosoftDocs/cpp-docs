{
   // Change the bitmap for the File Save button, whose
   // command ID is ID_FILE_SAVE, to the bitmap for the
   // About button, whose index is 7.
   CToolBarCtrl &m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
   BOOL bRet = m_toolBarCtrl.ChangeBitmap(ID_FILE_SAVE, 7);
}