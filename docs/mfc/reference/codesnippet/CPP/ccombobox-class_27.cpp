// Insert items in between existing items.
CString strIns;
int nItems = m_pComboBox->GetCount();
for (int i = 0; i < nItems; i++)
{
   strIns.Format(_T("item string %c"), (char)('A' + i));
   m_pComboBox->InsertString(2 * i, strIns);
}