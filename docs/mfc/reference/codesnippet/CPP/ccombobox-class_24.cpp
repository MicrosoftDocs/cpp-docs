// Dump all of the items in the combo box.
CString str1, str2;
int n;
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   n = m_pComboBox->GetLBTextLen(i);
   m_pComboBox->GetLBText(i, str1.GetBuffer(n));
   str1.ReleaseBuffer();

   str2.Format(_T("item %d: %s\r\n"), i, str1.GetBuffer(0));
   AFXDUMP(str2);
}