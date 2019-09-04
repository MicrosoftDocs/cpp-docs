// Get the selected color from the CColorDialog.
CColorDialog dlg;
if (dlg.DoModal() == IDOK)
{
   COLORREF color = dlg.GetColor();
   TRACE(_T("RGB value of the selected color - red = %u, ")
         _T("green = %u, blue = %u\n"),
         GetRValue(color), GetGValue(color), GetBValue(color));
}