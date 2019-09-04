// The code fragment creates a font based on the information
// we got from CFontDialog::m_cf variable.

CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   // Create the font using the selected font from CFontDialog.
   LOGFONT lf;
   memcpy(&lf, dlg.m_cf.lpLogFont, sizeof(LOGFONT));

   CFont font;
   VERIFY(font.CreateFontIndirect(&lf));

   // Do something with the font just created...
   CClientDC dc(this);
   CFont *def_font = dc.SelectObject(&font);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font. Delete the font object.
   font.DeleteObject();
}