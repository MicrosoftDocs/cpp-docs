// Dump all of the items select state.
CString str;
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   str.Format(_T("item %d: select state is %s\r\n"),
              i,
              m_myListBox.GetSel(i) > 0 ? _T("true") : _T("false"));
   AFXDUMP(str);
}