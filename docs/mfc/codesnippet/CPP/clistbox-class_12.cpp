// Add 10 items to the list box.
CString str;
for (int i = 0; i < 10; i++)
{
   str.Format(_T("item %d"), i);
   m_myListBox.AddString(str);
}

// Verify that 10 items were added to the list box.
ASSERT(m_myListBox.GetCount() == 10);