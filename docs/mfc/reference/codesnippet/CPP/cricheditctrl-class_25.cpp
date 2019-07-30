CHARFORMAT cf = {0};

// Modify the default character format so that all new
// text is striked out and not bold.
cf.cbSize = sizeof(cf);
cf.dwMask = CFM_STRIKEOUT | CFM_BOLD;
cf.dwEffects = CFE_STRIKEOUT;
m_myRichEditCtrl.SetDefaultCharFormat(cf);

// Verify the settings are what is expected.
m_myRichEditCtrl.GetDefaultCharFormat(cf);
ASSERT((cf.dwMask & (CFM_STRIKEOUT | CFM_BOLD)) ==
       (CFM_STRIKEOUT | CFM_BOLD));
ASSERT((cf.dwEffects & (CFE_STRIKEOUT | CFE_BOLD)) == CFE_STRIKEOUT);