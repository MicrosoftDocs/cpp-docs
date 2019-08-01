// Set the selection to be the first occurrence of the
// string lpszmyString, if it is found.
FINDTEXTEX ft;
ft.chrg.cpMin = 0;
ft.chrg.cpMax = 50;
ft.lpstrText = _T("wallaby");
long n = m_myRichEditCtrl.FindText(FR_MATCHCASE | FR_WHOLEWORD, &ft);
if (n != -1)
   m_myRichEditCtrl.SetSel(ft.chrgText);