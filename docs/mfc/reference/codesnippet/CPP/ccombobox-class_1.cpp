// Add 20 items to the combo box.
CString str;
for (int i = 0; i < 20; i++)
{
   str.Format(_T("item string %d"), i);
   m_pComboBox->AddString(str);
}