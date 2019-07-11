// Initialize the storage of the list box to be 256 strings with
// about 10 characters per string, performance improvement.
int n = m_myListBox.InitStorage(256, 16 * sizeof(TCHAR));
ASSERT(n != LB_ERRSPACE);

// Add 256 items to the list box.
CString str;
for (int i = 0; i < 256; i++)
{
   str.Format(_T("item string %d"), i);
   m_myListBox.AddString(str);
}
