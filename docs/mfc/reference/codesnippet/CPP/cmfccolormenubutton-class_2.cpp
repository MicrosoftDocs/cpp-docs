CMFCColorMenuButton *CFormatBar::CreateColorButton()
{
   if (m_palColorPicker.GetSafeHandle() == NULL)
   {
      m_nNumColours = sizeof(crColours) / sizeof(ColourTableEntry);
      ASSERT(m_nNumColours <= MAX_COLOURS);
      if (m_nNumColours > MAX_COLOURS)
         m_nNumColours = MAX_COLOURS;

      // Create the palette
      struct
      {
         LOGPALETTE LogPalette;
         PALETTEENTRY PalEntry[MAX_COLOURS];
      } pal;

      LOGPALETTE *pLogPalette = (LOGPALETTE*)&pal;
      pLogPalette->palVersion = 0x300;
      pLogPalette->palNumEntries = (WORD)m_nNumColours;

      for (int i = 0; i < m_nNumColours; i++)
      {
         pLogPalette->palPalEntry[i].peRed = GetRValue(crColours[i].crColour);
         pLogPalette->palPalEntry[i].peGreen = GetGValue(crColours[i].crColour);
         pLogPalette->palPalEntry[i].peBlue = GetBValue(crColours[i].crColour);
         pLogPalette->palPalEntry[i].peFlags = 0;
      }

      m_palColorPicker.CreatePalette(pLogPalette);
   }

   CMFCColorMenuButton *pColorButton = new CMFCColorMenuButton(ID_CHAR_COLOR, _T("Text Color..."), &m_palColorPicker);

   pColorButton->EnableAutomaticButton(_T("Automatic"), RGB(0, 0, 0));
   pColorButton->EnableOtherButton(_T("More Colors..."));
   pColorButton->EnableDocumentColors(_T("Document's Colors"));
   pColorButton->EnableTearOff(ID_COLOR_TEAROFF, 5, 2);
   pColorButton->SetColumnsNumber(8);
   pColorButton->SetColor(RGB(0, 0, 255));

   // Initialize color names:
   for (int i = 0; i < m_nNumColours; i++)
   {
      CMFCColorMenuButton::SetColorName(crColours[i].crColour, crColours[i].szName);
   }

   return pColorButton;
}