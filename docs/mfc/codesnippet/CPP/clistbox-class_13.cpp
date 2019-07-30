// Select the next item of the currently selected one.
int nIndex = m_myListBox.GetCurSel();
int nCount = m_myListBox.GetCount();
if ((nIndex != LB_ERR) && (nCount > 1))
{
   if (++nIndex < nCount)
      m_myListBox.SetCurSel(nIndex);
   else
      m_myListBox.SetCurSel(0);
}