// Turn on the password mode.
m_myEdit.SetPasswordChar('*');
ASSERT(m_myEdit.GetStyle() & ES_PASSWORD);
ASSERT(m_myEdit.GetPasswordChar() == '*');