// Show the font dialog with all the default settings.
CFontDialog dlg;
dlg.DoModal();

// Show the font dialog with 12 point "Times New Roman" as the
// selected font.
LOGFONT lf;
memset(&lf, 0, sizeof(LOGFONT));

CClientDC dc(this); // expects a CWnd that has already been initialized
lf.lfHeight = -MulDiv(12, dc.GetDeviceCaps(LOGPIXELSY), 72);
_tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("Times New Roman"));

CFontDialog fdlg(&lf);
fdlg.DoModal();