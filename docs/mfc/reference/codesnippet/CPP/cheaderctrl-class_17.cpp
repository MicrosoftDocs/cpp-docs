CString str;
HDITEM hdi;

hdi.mask = HDI_TEXT | HDI_WIDTH | HDI_FORMAT | HDI_IMAGE;
hdi.cxy = 100; // Make all columns 100 pixels wide.
hdi.fmt = HDF_STRING | HDF_CENTER;

// Insert 6 columns in the header control.
for (int i = 0; i < 6; i++)
{
   str.Format(TEXT("column %d"), i);
   hdi.pszText = str.GetBuffer(0);
   hdi.iImage = i % 3;

   m_myHeaderCtrl.InsertItem(i, &hdi);
}