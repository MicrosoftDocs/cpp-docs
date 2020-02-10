/* 
   The drop-down arrow glyph is a function of the specified character. 
   The default "down" drop-down arrow glyph is specified by a 
   character '6'. Set the "up" arrow glyph, which is a character '5'.
   See the convenience method, SetSplitGlyph(), for comparison.
   */
BUTTON_SPLITINFO bsInfo = {0};
bsInfo.mask = BCSIF_GLYPH;
TCHAR chGlyph = _T('5'); // "up" arrow glyph
bsInfo.himlGlyph = (HIMAGELIST)chGlyph;
bRC = m_splitButton.SetSplitInfo(&bsInfo);