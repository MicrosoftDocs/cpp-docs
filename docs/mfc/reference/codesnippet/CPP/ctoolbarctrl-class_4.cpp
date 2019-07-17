{
   // Replace one toolbar bitmap with another.
   TBREPLACEBITMAP tbrb;
   tbrb.hInstOld = ::AfxGetInstanceHandle();
   tbrb.nIDOld = IDR_MAINFRAME;
   tbrb.hInstNew = ::AfxGetInstanceHandle();
   tbrb.nIDNew = IDR_MAINFRAME1;
   tbrb.nButtons = 8;
   CToolBarCtrl &m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
   BOOL bRet = m_toolBarCtrl.ReplaceBitmap(&tbrb);
}