HLOCAL h = m_myEdit.GetHandle();
LPCTSTR lpszText = (LPCTSTR)::LocalLock(h);

// Dump the text of the edit control.
AFXDUMP(lpszText);

::LocalUnlock(h);