BOOL CMainFrame::OnShowMDITabContextMenu(CPoint point, DWORD dwAllowedItems, BOOL bDrop)
{
   CMenu menu;
   VERIFY(menu.LoadMenu(bDrop ? IDR_POPUP_DROP_MDITABS : IDR_POPUP_MDITABS));

   CMenu* pPopup = menu.GetSubMenu(0);
   ASSERT(pPopup != NULL);

   if ((dwAllowedItems & AFX_MDI_CREATE_HORZ_GROUP) == 0)
   {
      pPopup->DeleteMenu(ID_MDI_NEW_HORZ_TAB_GROUP, MF_BYCOMMAND);
   }

   if ((dwAllowedItems & AFX_MDI_CREATE_VERT_GROUP) == 0)
   {
      pPopup->DeleteMenu(ID_MDI_NEW_VERT_GROUP, MF_BYCOMMAND);
   }

   if ((dwAllowedItems & AFX_MDI_CAN_MOVE_NEXT) == 0)
   {
      pPopup->DeleteMenu(ID_MDI_MOVE_TO_NEXT_GROUP, MF_BYCOMMAND);
   }

   if ((dwAllowedItems & AFX_MDI_CAN_MOVE_PREV) == 0)
   {
      pPopup->DeleteMenu(ID_MDI_MOVE_TO_PREV_GROUP, MF_BYCOMMAND);
   }

   if ((dwAllowedItems & AFX_MDI_CAN_BE_DOCKED) == 0)
   {
      pPopup->DeleteMenu(ID_MDI_TABBED_DOCUMENT, MF_BYCOMMAND);
   }

   CMFCPopupMenu* pPopupMenu = new CMFCPopupMenu;
   pPopupMenu->SetAutoDestroy(FALSE);
   pPopupMenu->Create(this, point.x, point.y, pPopup->GetSafeHmenu());

   return TRUE;
}