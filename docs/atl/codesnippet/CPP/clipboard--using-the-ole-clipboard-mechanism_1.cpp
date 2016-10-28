void CMyListView::OnEditCut()
{
   // Create an OLE data source on the heap
   COleDataSource* pData = new COleDataSource;
   // Get the currently selected data
   HGLOBAL hGlob = GlobalAlloc(GMEM_FIXED, 64);
   strcpy_s((char*)hGlob, 64, "Current selection\r\n");
   // For the appropriate data formats...
   pData->CacheGlobalData( CF_TEXT, hGlob );
   // The Clipboard now owns the allocated memory
   // and will delete this data object
   // when new data is put on the Clipboard
   pData->SetClipboard();
}