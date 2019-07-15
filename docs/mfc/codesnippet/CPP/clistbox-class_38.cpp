// Select all of the items with an even index and
// deselect all others.
for (int i = 0; i < m_myODListBox.GetCount(); i++)
{
   m_myODListBox.SetSel(i, ((i % 2) == 0));
}