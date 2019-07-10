// Add all the files and directories in the windows directory.
TCHAR lpszWinPath[MAX_PATH], lpszOldPath[MAX_PATH];
::GetWindowsDirectory(lpszWinPath, MAX_PATH);

::GetCurrentDirectory(MAX_PATH, lpszOldPath);
::SetCurrentDirectory(lpszWinPath);

m_myListBox.ResetContent();
m_myListBox.Dir(DDL_READWRITE | DDL_DIRECTORY, _T("*.*"));

::SetCurrentDirectory(lpszOldPath);