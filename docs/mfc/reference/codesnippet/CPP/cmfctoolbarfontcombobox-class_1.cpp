CMFCToolBarFontComboBox *CFormatBar::CreateFontComboButton()
{
   // CSize m_szBaseUnits
   return new CMFCToolBarFontComboBox(IDC_FONTNAME,
                                      GetCmdMgr()->GetCmdImage(IDC_FONTNAME, FALSE),
                                      TRUETYPE_FONTTYPE | DEVICE_FONTTYPE,
                                      DEFAULT_CHARSET,
                                      WS_VISIBLE | WS_TABSTOP | WS_VSCROLL | CBS_DROPDOWN |
                                          CBS_AUTOHSCROLL | CBS_HASSTRINGS | CBS_OWNERDRAWFIXED,
                                      (3 * LF_FACESIZE * m_szBaseUnits.cx) / 2);
}