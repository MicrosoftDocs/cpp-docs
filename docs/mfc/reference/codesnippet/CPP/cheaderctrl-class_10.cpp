void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXSetfocuseditem()
{
   if (controlCreated == FALSE)
   {
      MessageBox(_T("Header control has not been created yet."));
      return;
   }

   // Check that we get the value we set.
   int item = m_headerCtrl.GetItemCount() - 1;
   m_headerCtrl.SetFocusedItem(item);
   int itemGet = m_headerCtrl.GetFocusedItem();
   CString str = _T("Set: focused item = %d\nGet: focused item = %d");
   str.Format(str, item, itemGet);
   MessageBox(str, _T("Set/GetFocused Item"));
}