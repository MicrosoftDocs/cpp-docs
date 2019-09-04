// The code fragment shows how to create a font object,
// select the font object into a DC (device context) for text
// drawing, and finally delete the font object.

// Initializes a CFont object with the characteristics given
// in a LOGFONT structure.
CFont font;
LOGFONT lf;
memset(&lf, 0, sizeof(LOGFONT)); // zero out structure
lf.lfHeight = 12;                // request a 12-pixel-height font
_tcsncpy_s(lf.lfFaceName, LF_FACESIZE,
           _T("Arial"), 7);           // request a face name "Arial"
VERIFY(font.CreateFontIndirect(&lf)); // create the font

// Do something with the font just created...
CClientDC dc(this);
CFont *def_font = dc.SelectObject(&font);
dc.TextOut(5, 5, _T("Hello"), 5);
dc.SelectObject(def_font);

// Done with the font. Delete the font object.
font.DeleteObject();