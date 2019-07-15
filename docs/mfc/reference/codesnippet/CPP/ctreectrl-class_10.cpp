// The string replacing the text in the edit control.
LPCTSTR lpszmyString = _T("New text!");

// Replace the text in the label edit control, if possible.
CEdit *pEdit = m_TreeCtrl.GetEditControl();

if (pEdit != NULL)
{
   pEdit->SetWindowText(lpszmyString);
}