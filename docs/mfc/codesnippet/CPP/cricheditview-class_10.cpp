// This code fragment is taken from the Wordpad sample.
HRESULT CMyRichEditView::QueryAcceptData(LPDATAOBJECT lpdataobj,
   CLIPFORMAT* lpcfFormat, DWORD dwReco, BOOL bReally, HGLOBAL hMetaFile)
{
   if (bReally && *lpcfFormat == 0 && (m_nPasteType == 0))
   {
      COleDataObject dataobj;
      dataobj.Attach(lpdataobj, FALSE);
      if (!dataobj.IsDataAvailable(cfRTO)) // native avail, let 
                                           // richedit do as it wants
      {
         if (dataobj.IsDataAvailable(cfEmbeddedObject))
         {
            if (PasteNative(lpdataobj)) // See WordPad sample for info
                                        // on PasteNative
               return S_FALSE;
         }
      }
   }
   return CRichEditView::QueryAcceptData(lpdataobj, lpcfFormat, dwReco,
      bReally, hMetaFile);
}