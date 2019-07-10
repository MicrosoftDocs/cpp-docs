template <class CollectionT>
LRESULT CSyncListBox<CollectionT>::OnSynchronize(WPARAM, LPARAM lParam)
{
   CollectionT* pCollection = (CollectionT*)(lParam);

   ResetContent();

   if (pCollection != NULL)
   {
      INT nCount = (INT)pCollection->GetCount();
      for (INT n = 0; n < nCount; n++)
      {
         CString s = StringizeElement(pCollection, n);
         AddString(s);
      }
   }

   return 0L;
}