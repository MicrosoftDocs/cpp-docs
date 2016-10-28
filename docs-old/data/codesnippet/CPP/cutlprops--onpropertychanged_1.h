   HRESULT OnPropertyChanged(ULONG /*iCurSet*/, DBPROP* pDBProp)
   {
      ATLASSERT(pDBProp != NULL);

      DWORD dwPropertyID = pDBProp->dwPropertyID;

      if (dwPropertyID == DBPROP_IRowsetLocate || 
         dwPropertyID == DBPROP_LITERALBOOKMARKS ||
         dwPropertyID == DBPROP_ORDEREDBOOKMARKS)
      {
         CComVariant var = pDBProp->vValue;

         if (var.boolVal == VARIANT_TRUE)
         {
            // Set the bookmarks property as these are chained
            CComVariant bookVar(true);
            CDBPropSet set(DBPROPSET_ROWSET);
            set.AddProperty(DBPROP_BOOKMARKS, bookVar);

            return SetProperties(1, &set);
         }
      }

      return S_OK;
   }