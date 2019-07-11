// Set the data pointer of each item to be NULL.
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   m_myListBox.SetItemDataPtr(i, NULL);
}