// Is the selected font underlined?
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   BOOL underline = dlg.IsUnderline();
   TRACE(_T("Is the selected font underlined? %d\n"), underline);
}