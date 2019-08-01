// Select the next item of the currently selected item
// in the combo box.
int nIndex = m_pComboBox->GetCurSel();
int nCount = m_pComboBox->GetCount();
if ((nIndex != CB_ERR) && (nCount > 1))
{
   if (++nIndex < nCount)
      m_pComboBox->SetCurSel(nIndex);
   else
      m_pComboBox->SetCurSel(0);
}