void CMyListView::OnEditCopy()
{
   if ( !OpenClipboard() )
   {
      AfxMessageBox( _T("Cannot open the Clipboard") );
      return;
   }
   // Remove the current Clipboard contents
   if( !EmptyClipboard() )
   {
      AfxMessageBox( _T("Cannot empty the Clipboard") );
      return;
   }
   // Get the currently selected data
   HGLOBAL hGlob = GlobalAlloc(GMEM_FIXED, 64);
   strcpy_s((char*)hGlob, 64, "Current selection\r\n");
   // For the appropriate data formats...
   if ( ::SetClipboardData( CF_TEXT, hGlob ) == NULL )
   {
      CString msg;
      msg.Format(_T("Unable to set Clipboard data, error: %d"), GetLastError());
      AfxMessageBox( msg );
      CloseClipboard();
      GlobalFree(hGlob);
      return;
   }
   CloseClipboard();
}