void CCSplitButton_s2Dlg::OnXBorder()
{
   int borderSize = m_pager.GetBorder();
   CString str;
   str.Format(_T("The border is %d pixel(s) thick."), borderSize);
   MessageBox(str);
}