// The code fragment shows the usage of CFont::operator HFONT.

// Initialize a CFont object with the characteristics given
// in a LOGFONT structure.
LOGFONT lf;

// clear out structure
memset(&lf, 0, sizeof(LOGFONT));

// request a 12-pixel-height font
lf.lfHeight = 12;

// request a face name "Arial"
_tcsncpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"), 7);

CFont font1;
font1.CreateFontIndirect(&lf); // create the font

// CFont::operator HFONT automatically converts font1 from
// CFont* to HFONT.
CFont *font2 = CFont::FromHandle(font1);

// Do something with the font just created...
CClientDC dc(this);
CFont *def_font = dc.SelectObject(font2);
dc.TextOut(5, 5, _T("Hello"), 5);
dc.SelectObject(def_font);

// Done with the font. Delete the font object.
font1.DeleteObject();