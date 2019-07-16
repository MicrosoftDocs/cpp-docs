// Turn off the password mode.
m_myEdit.SetPasswordChar(0);
ASSERT(!(m_myEdit.GetStyle() & ES_PASSWORD));