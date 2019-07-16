// Set the selection to be all characters after the current selection.
long nStartChar, nEndChar;

m_myRichEditCtrl.GetSel(nStartChar, nEndChar);
m_myRichEditCtrl.SetSel(nEndChar, -1);