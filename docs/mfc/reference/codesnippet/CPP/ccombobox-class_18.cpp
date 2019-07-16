DWORD dwSel;

// Set the selection to be all characters after the current selection.
if ((dwSel = m_MyComboBox.GetEditSel()) != CB_ERR)
{
   m_MyComboBox.SetEditSel(HIWORD(dwSel), -1);
}