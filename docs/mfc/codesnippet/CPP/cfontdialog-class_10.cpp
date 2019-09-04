// Is the selected font displayed with strikeout?

CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   BOOL strikeout = dlg.IsStrikeOut();
   TRACE(_T("Is the selected font strikeout? %d\n"), strikeout);
}