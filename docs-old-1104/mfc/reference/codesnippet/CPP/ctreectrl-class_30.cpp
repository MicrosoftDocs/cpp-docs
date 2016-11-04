   // Insert a root item using the structure. We must
   // initialize a TVINSERTSTRUCT structure and pass its
   // address to the call. 

   TVINSERTSTRUCT tvInsert;
   tvInsert.hParent = NULL;
   tvInsert.hInsertAfter = NULL;
   tvInsert.item.mask = TVIF_TEXT;
   tvInsert.item.pszText = _T("United States");

   HTREEITEM hCountry = m_TreeCtrl.InsertItem(&tvInsert);

   // Insert subitems of that root. Pennsylvania is
   // a state in the United States, so its item will be a child
   // of the United States item. We won't set any image or states,
   // so we supply only the TVIF_TEXT mask flag. This
   // override provides nearly complete control over the
   // insertion operation without the tedium of initializing
   // a structure. If you're going to add lots of items
   // to a tree, you might prefer the structure override
   // as it affords you a performance win by allowing you
   // to initialize some fields of the structure only once,
   // outside of your insertion loop.

   HTREEITEM hPA = m_TreeCtrl.InsertItem(TVIF_TEXT,
      _T("Pennsylvania"), 0, 0, 0, 0, 0, hCountry, NULL);

   // Insert the "Washington" item and assure that it is
   // inserted after the "Pennsylvania" item. This override is 
   // more appropriate for conveniently inserting items with 
   // images.

   HTREEITEM hWA = m_TreeCtrl.InsertItem(_T("Washington"),
      0, 0, hCountry, hPA);

   // We'll add some cities under each of the states.
   // The override used here is most appropriate
   // for inserting text-only items.

   m_TreeCtrl.InsertItem(_T("Pittsburgh"), hPA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Harrisburg"), hPA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Altoona"), hPA, TVI_SORT);

   m_TreeCtrl.InsertItem(_T("Seattle"), hWA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Kalaloch"), hWA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Yakima"), hWA, TVI_SORT);