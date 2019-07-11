// Dump all of the items in the list box.
CString str, str2;
int n;
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   n = m_myListBox.GetTextLen(i);
   m_myListBox.GetText(i, str.GetBuffer(n));
   str.ReleaseBuffer();

   str2.Format(_T("item %d: %s\r\n"), i, str.GetBuffer(0));
   AFXDUMP(str2);
}