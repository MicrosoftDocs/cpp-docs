//handler for Edit | Copy menu
void CMdiView::OnEditCopy()
{
   if (!OpenClipboard())
   {
      AfxMessageBox(_T("Cannot open the Clipboard"));
      return;
   }
   // Remove the current Clipboard contents
   if (!EmptyClipboard())
   {
      AfxMessageBox(_T("Cannot empty the Clipboard"));
      return;
   }

   // Get the currently selected data, hData handle to
   // global memory of data
   CString str;
   m_Edit.GetWindowText(str);
   size_t cbStr = (str.GetLength() + 1) * sizeof(TCHAR);
   HGLOBAL hData = GlobalAlloc(GMEM_MOVEABLE, cbStr);
   memcpy_s(GlobalLock(hData), cbStr, str.LockBuffer(), cbStr);
   GlobalUnlock(hData);
   str.UnlockBuffer();

   // For the appropriate data formats...
   UINT uiFormat = (sizeof(TCHAR) == sizeof(WCHAR)) ? CF_UNICODETEXT : CF_TEXT;
   if (::SetClipboardData(uiFormat, hData) == NULL)
   {
      AfxMessageBox(_T("Unable to set Clipboard data"));
      CloseClipboard();
      return;
   }

   CloseClipboard();
}