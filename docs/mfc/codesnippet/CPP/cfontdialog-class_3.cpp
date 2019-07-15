// Get the characteristics of the currently selected font, if any.
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   LOGFONT lf;
   dlg.GetCurrentFont(&lf);
   TRACE(_T("Face name of the selected font = %s\n"), lf.lfFaceName);
}