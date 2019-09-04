// Dump all of the items bounds.
CString str;
RECT r;
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   m_myListBox.GetItemRect(i, &r);

   str.Format(_T("item %d: left = %d, top = %d, right = %d, ")
              _T("bottom = %d\r\n"),
              i,
              r.left,
              r.top,
              r.right,
              r.bottom);
   AFXDUMP(str);
}