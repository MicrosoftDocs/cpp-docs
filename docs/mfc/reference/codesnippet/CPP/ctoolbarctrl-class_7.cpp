{
   // SetPressedImageList
   // Set the pressed image list to be the same as the
   // normal image list.
   CToolBarCtrl &m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
   CImageList *pNormalCil = m_toolBarCtrl.GetImageList();
   CImageList *pPressedCil = m_toolBarCtrl.GetPressedImageList();
   m_toolBarCtrl.SetPressedImageList(0, pNormalCil);
}