// Insert items in between existing items.
CString str;
int n = m_myListBox.GetCount();
for (int i = 0; i < n; i++)
{
   str.Format(_T("item string %c"), (char)('A' + i));
   m_myListBox.InsertString(2 * i, str);
}