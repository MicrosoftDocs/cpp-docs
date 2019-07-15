// Update the m_ofn variable
m_myFileDialogPtr->UpdateOFNFromShellDialog();

// Change the title
m_myFileDialogPtr->m_ofn.lpstrTitle = L"New Dialog Title";

// Apply the changes
m_myFileDialogPtr->ApplyOFNToShellDialog();

// Show the window
LRESULT result = m_myFileDialogPtr->DoModal();