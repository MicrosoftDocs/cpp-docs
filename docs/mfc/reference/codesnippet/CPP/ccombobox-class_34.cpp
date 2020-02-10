// Add extra initialization here.

// Add 20 items to the combo box. The Resource Editor
// has already been used to set the style of the combo
// box to CBS_SORT.
CString str;
for (int i = 1; i <= 20; i++)
{
    str.Format(_T("Item %2d"), i);
    m_combobox.AddString(str);
}
// Set the minimum visible item
m_combobox.SetMinVisibleItems(10);
// Set the cue banner
m_combobox.SetCueBanner(_T("Select an item..."));

// End of extra initialization.