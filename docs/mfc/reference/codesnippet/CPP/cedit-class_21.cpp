// The string to set in the edit control.
CString strString(_T("George Frideric"));

// Initialize the new local handle.
size_t cbSize = (strString.GetLength() + 1) * sizeof(TCHAR);
HLOCAL h = ::LocalAlloc(LHND, cbSize);
LPTSTR lpszText = (LPTSTR)::LocalLock(h);
_tcsncpy_s(lpszText, cbSize / sizeof(TCHAR), strString, _TRUNCATE);
::LocalUnlock(h);

// Free the current text handle of the edit control.
::LocalFree(m_myEdit.GetHandle());

// Set the new text handle.
m_myEdit.SetHandle(h);