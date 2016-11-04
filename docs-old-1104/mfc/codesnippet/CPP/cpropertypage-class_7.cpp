// Query the user whether to abort the changes if the new selected
// color (m_Color) is different from the initial color 
// (m_InitialColor) when the CPropertySheet dialog is first shown.
// CColorPage is a CPropertyPage-derived class.
BOOL CColorPage::OnQueryCancel() 
{
   if (m_InitialColor != m_Color)
   {
      if (AfxMessageBox(_T("Abort the changes?"), MB_YESNO) == IDNO)
         return FALSE;  
   }

   return CPropertyPage::OnQueryCancel();
}