// Find the pixel width of the largest item.
CString str;
CSize   sz;
int     dx = 0;
CDC* pDC = myListBox.GetDC();
for (int i = 0; i < myListBox.GetCount(); i++)
{
   myListBox.GetText(i, str);
   sz = pDC->GetTextExtent(str);

   if (sz.cx > dx)
      dx = sz.cx;
}
myListBox.ReleaseDC(pDC);

// Set the column width of the first column to be one and 1/3 units
// of the largest string. 
myListBox.SetColumnWidth(dx * 4 / 3);