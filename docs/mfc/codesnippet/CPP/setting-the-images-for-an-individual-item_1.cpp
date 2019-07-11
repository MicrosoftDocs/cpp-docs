COMBOBOXEXITEM     cbi = { 0 };
COMBOBOXEXITEM     cbi = { 0 };
CString            str;
int                nItem;

cbi.mask = CBEIF_IMAGE | CBEIF_INDENT | CBEIF_OVERLAY |
CBEIF_SELECTEDIMAGE | CBEIF_TEXT;

cbi.iItem = 0;
cbi.pszText = _T("Item 0");
cbi.iImage = 0;
cbi.iSelectedImage = 1;
cbi.iOverlay = 2;
cbi.iIndent = (0 & 0x03);   //Set indentation according
                     //to item position

nItem = m_ComboBoxEx.InsertItem(&cbi);
ASSERT(nItem == 0);