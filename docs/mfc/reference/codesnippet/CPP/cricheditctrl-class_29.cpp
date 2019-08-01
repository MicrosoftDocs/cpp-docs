// Set the rich edit control to be read-only.
m_myRichEditCtrl.SetReadOnly(TRUE);
ASSERT(m_myRichEditCtrl.GetStyle() & ES_READONLY);