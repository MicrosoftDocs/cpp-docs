void CMyListView::OnLvnBegindrag(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pResult);

   LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);

   CMyDataSource* pDataSrc = new CMyDataSource();
   if (NULL != pDataSrc)
   {
      pDataSrc->Initialize(pNMLV, this);
      pDataSrc->DelayRenderData(
         (CLIPFORMAT)RegisterClipboardFormat(_T("TIGroupFiles")));
      pDataSrc->DoDragDrop();
      pDataSrc->InternalRelease();
   }
}