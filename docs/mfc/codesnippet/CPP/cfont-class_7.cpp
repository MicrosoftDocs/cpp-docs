// The code fragment shows how to retrieve a copy of the
// LOGFONT structure for a currently selected font of a window.

CFont *pFont = pWnd->GetFont();
if (NULL != pFont)
{
   LOGFONT lf;
   pFont->GetLogFont(&lf);
   TRACE(_T("Typeface name of font = %s\n"), lf.lfFaceName);
}