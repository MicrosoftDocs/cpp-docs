// Get the size of the selected font, if any.
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   int size = dlg.GetSize();
   TRACE(_T("The size of the selected font = %d\n"), size);
}