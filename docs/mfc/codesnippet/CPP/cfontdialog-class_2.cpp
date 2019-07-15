// Get the color of the selected font, if any.
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   COLORREF color = dlg.GetColor();
   TRACE(_T("Color of the selected font = %8x\n"), color);
}