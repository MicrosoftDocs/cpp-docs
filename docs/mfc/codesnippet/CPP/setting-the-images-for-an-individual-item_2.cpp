COMBOBOXEXITEM cbi = {0};
int iImageTemp;

cbi.mask = CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
cbi.iItem = 0;
m_ComboBoxEx.GetItem(&cbi);

iImageTemp = cbi.iImage;
cbi.iImage = cbi.iSelectedImage;
cbi.iSelectedImage = iImageTemp;
VERIFY(m_ComboBoxEx.SetItem(&cbi));