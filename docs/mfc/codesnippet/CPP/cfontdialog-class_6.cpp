// Get the style name of the selected font, if any.
CFontDialog dlg;
dlg.m_cf.Flags |= CF_USESTYLE;
if (dlg.DoModal() == IDOK)
{
   CString stylename = dlg.GetStyleName();
   TRACE(_T("Style name of the selected font = %s\n"), stylename);
}