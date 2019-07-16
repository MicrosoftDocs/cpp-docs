CHARFORMAT cf;

// Modify the word format so that the selected word is
// displayed in bold and not striked out.
cf.cbSize = sizeof(cf);
cf.dwMask = CFM_STRIKEOUT | CFM_BOLD;
cf.dwEffects = CFE_BOLD;
m_myRichEditCtrl.SetWordCharFormat(cf);