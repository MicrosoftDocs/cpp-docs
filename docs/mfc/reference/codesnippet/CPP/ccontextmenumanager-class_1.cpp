// The GetContextMenuManager method is inherited from the CWinAppEx class.
GetContextMenuManager()->AddMenu(_T("My menu"), IDR_CONTEXT_MENU);
GetContextMenuManager()->SetDontCloseActiveMenu(true);