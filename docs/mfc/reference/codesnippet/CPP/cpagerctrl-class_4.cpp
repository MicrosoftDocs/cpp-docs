void CCSplitButton_s2Dlg::OnXScrollposition()
{
   int pos;
   CString str;
   pos = m_pager.GetScrollPos();
   if (pos != 0)
      m_pager.SetScrollPos(0);
   str.Format(_T("Old position = %d; new position = 0"), pos);
   MessageBox(str);
}