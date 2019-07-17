// Add all the files and directories in the windows directory.
TCHAR lpszWinPath[MAX_PATH], lpszOldPath[MAX_PATH];
VERIFY(0 < ::GetWindowsDirectory(lpszWinPath, MAX_PATH));

// Make the windows directory the current directory.
::GetCurrentDirectory(MAX_PATH, lpszOldPath);
::SetCurrentDirectory(lpszWinPath);

m_pComboBox->ResetContent();
m_pComboBox->Dir(DDL_READWRITE | DDL_DIRECTORY, _T("*.*"));

// Reset the current directory to its previous path.
::SetCurrentDirectory(lpszOldPath);