// Set the height of every item to be the
// vertical size of the item's text extent.
CString str;
CSize sz;
CDC *pDC = myListBox.GetDC();
for (int i = 0; i < myListBox.GetCount(); i++)
{
   myListBox.GetText(i, str);
   sz = pDC->GetTextExtent(str);

   myListBox.SetItemHeight(i, sz.cy);
}
myListBox.ReleaseDC(pDC);