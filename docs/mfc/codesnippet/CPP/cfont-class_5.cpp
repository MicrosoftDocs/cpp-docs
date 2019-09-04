// The code fragment shows how to create a font object,
// select the font object into a DC (device context) for text
// drawing, and finally delete the font object.
LOGFONT lf;

// clear out structure.
memset(&lf, 0, sizeof(LOGFONT));

// request a 12-pixel-height font
lf.lfHeight = 120;

// request a face name "Arial".
_tcsncpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"), 7);

CClientDC dc(this);

CFont font;
VERIFY(font.CreatePointFontIndirect(&lf, &dc));

// Do something with the font just created...
CFont *def_font = dc.SelectObject(&font);
dc.TextOut(5, 5, _T("Hello"), 5);
dc.SelectObject(def_font);

// Done with the font. Delete the font object.
font.DeleteObject();