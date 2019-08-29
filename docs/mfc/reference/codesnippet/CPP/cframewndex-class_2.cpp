// CMainFrame is application-defined object of type CFrameWndEx
BOOL CMainFrame::OnShowPopupMenu(CMFCPopupMenu *pMenuPopup)
{
   BOOL bRes = CFrameWndEx::OnShowPopupMenu(pMenuPopup);

   if (pMenuPopup != NULL && !pMenuPopup->IsCustomizePane())
   {
      AdjustObjectSubmenu(pMenuPopup);
      AdjustColorsMenu(pMenuPopup, ID_CHAR_COLOR);
   }

   return bRes;
}