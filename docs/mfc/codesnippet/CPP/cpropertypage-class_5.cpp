// Validate the value entered to the "Number" edit control. Its
// value must be at least one. If not, tell the user and set the
// focus to the "Number" edit control. CStylePage is a 
// CPropertyPage-derived class.
BOOL CStylePage::OnKillActive() 
{
   int num = GetDlgItemInt(IDC_NUMOBJECTS);
   if (num <= 0)
   {
      AfxMessageBox(_T("Number of objects must be at least 1."));
      CEdit* edit = (CEdit*) GetDlgItem(IDC_NUMOBJECTS);
      edit->SetFocus();
      edit->SetSel(0, -1);
      return 0;
   }

   return CPropertyPage::OnKillActive();
}