// CMainFrame::OnLoadMenuIndirect() is a menu command handler for
// CMainFrame class, which in turn is a CFrameWnd-derived class. It
// shows how to use LoadMenuIndirect() to load a resource from a
// menu template in memory.
void CMainFrame::OnLoadMenuIndirect()
{
   // For simplicity, allocate 500 bytes from stack. May use
   // GlobalAlloc() to allocate memory bytes from heap.
   BYTE milist[500];
   memset(milist, 0, 500);
   int bytes_left = sizeof(milist);

   // Fill up the MENUITEMTEMPLATEHEADER structure.
   MENUITEMTEMPLATEHEADER *mheader = (MENUITEMTEMPLATEHEADER*)milist;
   mheader->versionNumber = 0;
   mheader->offset = 0;

   int bytes_used = sizeof(MENUITEMTEMPLATEHEADER);
   bytes_left -= bytes_used;

   // Add the following menu items to menu bar:
   // File     Edit
   //   Exit     Copy
   //            Paste
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&File", 0,
                             TRUE, FALSE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"E&xit",
                             ID_APP_EXIT, FALSE, TRUE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&Edit", 0,
                             TRUE, TRUE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&Copy",
                             ID_EDIT_COPY, FALSE, FALSE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&Paste",
                             ID_EDIT_PASTE, FALSE, TRUE);
   bytes_left -= bytes_used;

   // Load resource from a menu template in memory.
   ASSERT(m_IndiMenu.LoadMenuIndirect(milist));

   // Remove and destroy old menu
   SetMenu(NULL);
   ::DestroyMenu(m_hMenuDefault);

   // Add new menu.
   SetMenu(&m_IndiMenu);

   // Assign default menu
   m_hMenuDefault = m_IndiMenu.m_hMenu;
}

// This is a helper function for adding a menu item (either a popup
// or command item) to the specified menu template.
//
//    MenuTemplate  - pointer to a menu template
//    TemplateBytes - space remaining in MenuTemplate
//    MenuString    - string for the menu item to be added
//    MenuID        - id for the command item. Its value is ignored if
//                    IsPopup is TRUE.
//    IsPopup       - TRUE for popup menu (or submenu); FALSE for command
//                    item
//    LastItem      - TRUE if MenuString is the last item for the popup;
//                    FALSE otherwise.
UINT AddMenuItem(LPVOID MenuTemplate, int TemplateBytes, WCHAR *MenuString,
                 WORD MenuID, BOOL IsPopup, BOOL LastItem)
{
   MENUITEMTEMPLATE *mitem = (MENUITEMTEMPLATE*)MenuTemplate;

   UINT bytes_used = 0;
   if (IsPopup) // for popup menu
   {
      if (LastItem)
         mitem->mtOption = MF_POPUP | MF_END;
      else
         mitem->mtOption = MF_POPUP;
      bytes_used += sizeof(mitem->mtOption);

      mitem = (MENUITEMTEMPLATE*)((BYTE*)MenuTemplate + bytes_used);
      // a popup doesn't have mtID!!!

      TemplateBytes -= bytes_used;
      wcscpy_s((WCHAR*)mitem, TemplateBytes / sizeof(WCHAR), MenuString);
      bytes_used += (UINT)(sizeof(WCHAR) * (wcslen(MenuString) + 1)); // include '\0'
   }
   else // for command item
   {
      mitem->mtOption = LastItem ? MF_END : 0;
      mitem->mtID = MenuID;
      TemplateBytes -= bytes_used;
      wcscpy_s(mitem->mtString, TemplateBytes / sizeof(WCHAR), MenuString);
      bytes_used += (UINT)(sizeof(mitem->mtOption) + sizeof(mitem->mtID) +
                           sizeof(WCHAR) * (wcslen(MenuString) + 1)); // include '\0'
   }

   return bytes_used;
}