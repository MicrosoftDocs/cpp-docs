LPVOID lpmyPtr = pParentWnd;

// Check all the items in the list box; if an item's
// data pointer is equal to my pointer then reset it to NULL.
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   if (m_myListBox.GetItemDataPtr(i) == lpmyPtr)
   {
      m_myListBox.SetItemDataPtr(i, NULL);
   }
}