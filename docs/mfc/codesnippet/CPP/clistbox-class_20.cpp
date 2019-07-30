// Get the indexes of all the selected items.
int nCount = m_myODListBox.GetSelCount();
CArray<int, int> aryListBoxSel;

aryListBoxSel.SetSize(nCount);
m_myODListBox.GetSelItems(nCount, aryListBoxSel.GetData());

// Dump the selection array.
AFXDUMP(aryListBoxSel);