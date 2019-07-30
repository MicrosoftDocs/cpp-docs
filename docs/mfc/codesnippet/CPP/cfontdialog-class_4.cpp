// Get the face name of the selected font, if any.
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   CString facename = dlg.GetFaceName();
   TRACE(_T("Face name of the selected font = %s\n"), facename);
}