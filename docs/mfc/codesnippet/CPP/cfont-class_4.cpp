// The code fragment shows how to create a font object,
// select the font object into a DC (device context) for text
// drawing, and finally delete the font object.

CClientDC dc(this);

CFont font;
VERIFY(font.CreatePointFont(120, _T("Arial"), &dc));

// Do something with the font just created...
CFont *def_font = dc.SelectObject(&font);
dc.TextOut(5, 5, _T("Hello"), 5);
dc.SelectObject(def_font);

// Done with the font. Delete the font object.
font.DeleteObject();