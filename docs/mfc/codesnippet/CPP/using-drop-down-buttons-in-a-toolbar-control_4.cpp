void CMyDialog::OnTbnDropDownToolBar1(NMHDR *pNMHDR, LRESULT *pResult)
{
   LPNMTOOLBAR pToolBar = reinterpret_cast<LPNMTOOLBAR>(pNMHDR);
   ClientToScreen(&(pToolBar->rcButton)); // TrackPopupMenu uses screen coords

   CMenu menu;
   VERIFY(menu.LoadMenu(IDR_MENU1));
   CMenu *pPopup = menu.GetSubMenu(0);
   if (NULL != pPopup)
   {
      pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON,
                             pToolBar->rcButton.left, pToolBar->rcButton.bottom, this);
   }

   *pResult = 0;
}