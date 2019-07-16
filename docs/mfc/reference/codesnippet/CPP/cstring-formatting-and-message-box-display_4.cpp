// A simple message box, with only the OK button.
AfxMessageBox(_T("Simple message box."));

// A message box that uses a string from a string table
// with yes and no buttons and the stop icon.
// NOTE: nStringID is an integer that contains a valid id of
// a string in the current resource.
AfxMessageBox(nStringID, MB_YESNO | MB_ICONSTOP);