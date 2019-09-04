// Get a pointer to an array of 16 RGB color values that stores
// custom colors created by the user from CColorDialog.
CColorDialog dlg;
if (dlg.DoModal() == IDOK)
{
   COLORREF *ccolor = dlg.GetSavedCustomColors();
   for (int i = 0; i < 16; i++)
   {
      TRACE(_T("RGB value of the selected color - red = %u, ")
            _T("green = %u, blue = %u\n"),
            GetRValue(ccolor[i]),
            GetGValue(ccolor[i]),
            GetBValue(ccolor[i]));
   }
}