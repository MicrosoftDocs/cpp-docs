// Is the selected font bold?
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   BOOL bold = dlg.IsBold();
   TRACE(_T("Is the selected font bold? %d\n"), bold);
}