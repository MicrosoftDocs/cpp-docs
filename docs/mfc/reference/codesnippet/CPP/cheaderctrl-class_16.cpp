void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXHittest()
{
   if (controlCreated == FALSE)
   {
      MessageBox(_T("Header control has not been created yet."));
      return;
   }
   // Initialize HDHITTESTINFO structure.
   HDHITTESTINFO hdHitIfo;
   memset(&hdHitIfo, 0, sizeof(HDHITTESTINFO));

   CString str;
   CRect rect;
   int iRetVal = -1;
   for (int i = 0; i < m_headerCtrl.GetItemCount(); i++)
   {
      m_headerCtrl.GetItemRect(i, &rect);
      hdHitIfo.pt = rect.CenterPoint();
      // The hit test depends on whether the header item is visible.
      iRetVal = m_headerCtrl.HitTest(&hdHitIfo);
      str.AppendFormat(_T("Item = %d, Hit item = %d\n"), i, iRetVal);
   }
   MessageBox(str, _T("Hit test results"));
}