// Want an item in the bottom half to be the first visible item.
int n = m_myListBox.GetCount() / 2;
if (m_myListBox.GetTopIndex() < n)
{
   m_myListBox.SetTopIndex(n);
   ASSERT(m_myListBox.GetTopIndex() == n);
}