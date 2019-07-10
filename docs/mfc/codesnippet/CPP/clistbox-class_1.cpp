// Add 10 items to the list box.
CString str;
for (int i = 0; i < 10; i++)
{
   str.Format(_T("item string %d"), i);
   m_myListBox.AddString(str);
}