// The code fragment shows how to create a font object using
// Windows API CreateFontIndirect(), convert the HFONT to a
// CFont* before selecting the font object into a DC (device
// context) for text drawing, and finally delete the font object.

// Initialize a CFont object with the characteristics given
// in a LOGFONT structure.
LOGFONT lf;

// clear out structure
memset(&lf, 0, sizeof(LOGFONT));
// request a 12-pixel-height font
lf.lfHeight = 12;
// request a face name "Arial"
_tcsncpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"), 7);
// create the font
HFONT hfont = ::CreateFontIndirect(&lf);

// Convert the HFONT to CFont*.
CFont *pfont = CFont::FromHandle(hfont);

// Do something with the font just created...
CClientDC dc(this);
CFont *def_font = dc.SelectObject(pfont);
dc.TextOut(5, 5, _T("Hello"), 5);
dc.SelectObject(def_font);

// Done with the font. Delete the font object.
::DeleteObject(hfont);