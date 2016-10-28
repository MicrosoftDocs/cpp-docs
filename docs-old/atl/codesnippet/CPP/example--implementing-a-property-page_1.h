BEGIN_MSG_MAP(CDocProperties)
   COMMAND_HANDLER(IDC_NAME, EN_CHANGE, OnUIChange)
   COMMAND_HANDLER(IDC_READONLY, BN_CLICKED, OnUIChange)
   CHAIN_MSG_MAP(IPropertyPageImpl<CDocProperties>)
END_MSG_MAP()

   // Respond to changes in the UI to update the dirty status of the page
   LRESULT OnUIChange(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
   {
      wNotifyCode; wID; hWndCtl; bHandled;
      SetDirty(true);
      return 0;
   }