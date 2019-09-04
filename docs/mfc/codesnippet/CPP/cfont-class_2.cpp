// The code fragment shows how to create a font object,
// select the font object into a DC (device context) for text
// drawing, and finally delete the font object.

// Initializes a CFont object with the specified characteristics.
CFont font;
VERIFY(font.CreateFont(
    12,                       // nHeight
    0,                        // nWidth
    0,                        // nEscapement
    0,                        // nOrientation
    FW_NORMAL,                // nWeight
    FALSE,                    // bItalic
    FALSE,                    // bUnderline
    0,                        // cStrikeOut
    ANSI_CHARSET,             // nCharSet
    OUT_DEFAULT_PRECIS,       // nOutPrecision
    CLIP_DEFAULT_PRECIS,      // nClipPrecision
    DEFAULT_QUALITY,          // nQuality
    DEFAULT_PITCH | FF_SWISS, // nPitchAndFamily
    _T("Arial")));            // lpszFacename

// Do something with the font just created...
CClientDC dc(this);
CFont *def_font = dc.SelectObject(&font);
dc.TextOut(5, 5, _T("Hello"), 5);
dc.SelectObject(def_font);

// Done with the font.  Delete the font object.
font.DeleteObject();