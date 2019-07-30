CHARFORMAT cf;

// Modify the selection format so that the selected text is
// displayed in bold and not striked out.
cf.cbSize = sizeof(cf);
cf.dwMask = CFM_STRIKEOUT | CFM_BOLD;
cf.dwEffects = CFE_BOLD;
m_myRichEditCtrl.SetSelectionCharFormat(cf);

// Verify the settings are what is expected.
m_myRichEditCtrl.GetSelectionCharFormat(cf);
ASSERT((cf.dwMask & (CFM_STRIKEOUT | CFM_BOLD)) ==
       (CFM_STRIKEOUT | CFM_BOLD));
ASSERT((cf.dwEffects & (CFE_STRIKEOUT | CFE_BOLD)) == CFE_BOLD);