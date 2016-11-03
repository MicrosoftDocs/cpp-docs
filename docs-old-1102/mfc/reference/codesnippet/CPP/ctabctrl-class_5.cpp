   TCITEM tcItem;
   tcItem.mask = TCIF_TEXT;
   tcItem.pszText = _T("Tab #1");

   m_TabCtrl.InsertItem(0, &tcItem);