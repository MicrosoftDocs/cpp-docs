// If any item's data is equal to zero then reset it to -1.
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   if (m_myListBox.GetItemData(i) == 0)
   {
      m_myListBox.SetItemData(i, (DWORD)-1);
   }
}