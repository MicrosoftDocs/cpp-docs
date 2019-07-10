void CMyDialog::OnLvnOdcachehintList3(NMHDR* pNMHDR, LRESULT* pResult)
{
   LPNMLVCACHEHINT pCacheHint = reinterpret_cast<LPNMLVCACHEHINT>(pNMHDR);

   // Update the cache with the recommended range.
   for (int i = pCacheHint->iFrom; i <= pCacheHint->iTo; i++)
   {
      m_Items[i].m_iImage = i % 2;
      m_Items[i].m_strItemText.Format(_T("Item %d"), i);
      m_Items[i].m_strSubItem1Text = _T("Sub 1");
      m_Items[i].m_strSubItem2Text = _T("Sub 2");
   }

   *pResult = 0;
}