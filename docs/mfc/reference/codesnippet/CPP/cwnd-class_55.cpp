// The following code fragment is from CMyDlg::OnInitDialog
// CMyDlg is derived from CDialog.

// change font of child controls of a dialog
LOGFONT lf = {0};
// redraw of child controls not needed in OnInitDialog
// since controls aren't drawn yet.
short int fRedraw = FALSE;

lf.lfHeight = 15; // Request a 15-pixel-high font

// with face name "Arial".
wcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"));

m_font.CreateFontIndirect(&lf); // Create the font.

SendMessageToDescendants(WM_SETFONT,
                         (WPARAM)m_font.m_hObject, //handle to font
                         MAKELONG((WORD)fRedraw, 0),
                         FALSE); // send to all descendants(TRUE) or
                                 // just children of *this (FALSE)