// Reserve space in the list box for 256 additional strings with
// about 15 characters per string.
int n = m_myListBox.InitStorage(256, 256 * (15 + 1) * sizeof(TCHAR));
ASSERT(n != LB_ERRSPACE);

// Add 256 items to the list box.
CString str;
for (int i = 0; i < 256; i++)
{
   str.Format(_T("item string %d"), i);
   m_myListBox.AddString(str);
}
