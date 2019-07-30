// Is the selected font italic?
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   BOOL italic = dlg.IsItalic();
   TRACE(_T("Is the selected font italic? %d\n"), italic);
}