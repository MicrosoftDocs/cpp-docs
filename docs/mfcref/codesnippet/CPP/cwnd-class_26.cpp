// CModeless is a CDialog class representing a modeless dialog
// Destruction of the modeless dialog involves calling DestroyWindow in 
// OnOK() & OnCancel() handlers
void CModeless::OnOK() 
{ 
   if (!UpdateData(TRUE)) 
   {
      TRACE(_T("UpdateData failed during dialog termination\n"));
      // The UpdateData routine will set focus to correct item
      return;
   }
   DestroyWindow();
}

void CModeless::OnCancel()
{
   DestroyWindow();
}