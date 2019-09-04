// Find the pixel width of the largest first substring.
CString str;
CSize sz;
int nIndex, dx = 0;
CDC *pDC = myListBox.GetDC();
for (int i = 0; i < myListBox.GetCount(); i++)
{
   myListBox.GetText(i, str);

   if ((nIndex = str.Find('\t')) != -1)
      str = str.Right(nIndex);

   sz = pDC->GetTextExtent(str);

   if (sz.cx > dx)
      dx = sz.cx;
}
myListBox.ReleaseDC(pDC);

// Set tab stops at every one and 1/3 units
// of the largest string.
// NOTE: Convert pixels to dialog units.
myListBox.SetTabStops((dx * 4 / 3 * 4) / LOWORD(::GetDialogBaseUnits()));